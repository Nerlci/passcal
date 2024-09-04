#include "CodeGenVisitor.h"
#include "Exception/SemanticException.h"

CodeGenVisitor::CodeGenVisitor()
        : builder(context) {
}

CodeGenVisitor::CodeGenVisitor(const std::string& filename)
    : builder(context)
    , filename(filename) {
}

antlrcpp::Any CodeGenVisitor::visitProgramHead(PascalSParser::ProgramHeadContext* ctx) {
    // Create a new LLVM module
    auto program_id_node = ctx->identifier();
    std::string program_name = program_id_node->getText();
    module = std::make_unique<Module>(program_name, context);

    llvm::FunctionType* mainFuncType = llvm::FunctionType::get(Type::getInt32Ty(context), false);
    llvm::Function* mainFunc = llvm::Function::Create(mainFuncType, llvm::Function::ExternalLinkage, "main", module.get());
    llvm::BasicBlock* mainEntry = llvm::BasicBlock::Create(context, "mainEntry", mainFunc);

    builder.SetInsertPoint(mainEntry);

    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitProgramBody(PascalSParser::ProgramBodyContext* ctx) {
    visitChildren(ctx);

    // Return 0 at the end of the program
    // TODO: Return different values for procedures and functions
    builder.CreateRet(ConstantInt::get(Type::getInt32Ty(context), 0));

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) {
    // Generate LLVM IR for constant declaration
    if (ctx->constDeclaration() != nullptr) {
        visit(ctx->constDeclaration());
    }

    std::string identifier = ctx->identifier()->getText();
    llvm::Value* value = std::any_cast<llvm::Value*>(visit(ctx->constVariable()));

    module->getOrInsertGlobal(identifier, value->getType());
    llvm::GlobalVariable* global = module->getNamedGlobal(identifier);
    global->setInitializer(dyn_cast<Constant>(value));
    global->setConstant(true);

    scope->put(identifier, global);

    return nullptr;
}

// @return llvm::Value*
antlrcpp::Any CodeGenVisitor::visitConstVariable(PascalSParser::ConstVariableContext* ctx) {
    // Generate LLVM IR for constant variable
    llvm::Value* value = nullptr;

    if (ctx->identifier() != nullptr) {
        std::string identifier = ctx->identifier()->getText();
        auto global = module->getNamedGlobal(identifier);

        if (global == nullptr) {
            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                "'" + identifier + "' was not declared in this scope or is not a constant");
        } else {
            value = (llvm::ConstantInt*)global->getInitializer();
        }
    }

    if (ctx->NUM() != nullptr) {
        bool negative = ctx->MINUS() != nullptr;

        std::string num_str = ctx->NUM()->getText();
        if (num_str.find('.') != std::string::npos) {
            double num = std::stod(num_str) * (negative ? -1 : 1);
            value = ConstantFP::get(context, APFloat(num));
        } else {
            int num = std::stoi(num_str) * (negative ? -1 : 1);
            value = ConstantInt::get(context, APInt(32, num, !negative));
        }
    }

    if (ctx->LETTER() != nullptr) {
        char letter = ctx->LETTER()->getText()[0];
        value = ConstantInt::get(context, APInt(8, letter));
    }

    return value;
}

antlrcpp::Any CodeGenVisitor::visitTypeDeclaration(PascalSParser::TypeDeclarationContext* ctx) {
    // Generate LLVM IR for type declaration
    if (ctx->typeDeclaration() != nullptr) {
        visit(ctx->typeDeclaration());
    }

    std::string identifier = ctx->identifier()->getText();
    llvm::Type* type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    llvm::StructType* type_struct = llvm::StructType::create(context, "type_" + identifier);
    type_struct->setBody(type);
    auto addr = builder.CreateAlloca(type_struct, nullptr, identifier);

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitVarDeclarations(PascalSParser::VarDeclarationsContext* ctx) {
    // Generate LLVM IR for variable declarations
    if (ctx->varDeclaration() != nullptr) {
        auto var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));

        for (const auto& var_declaration : var_declarations) {
            std::string identifier = var_declaration.first;
            llvm::Type* type = var_declaration.second;

            auto alloca = builder.CreateAlloca(type, nullptr, identifier);
            scope->put(identifier, alloca);
        }
    }

    return nullptr;
}

// @return std::map<std::string, llvm::Type*>
antlrcpp::Any CodeGenVisitor::visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) {
    // Generate LLVM IR for variable declaration
    std::map<std::string, llvm::Type*> var_declarations;
    if (ctx->varDeclaration() != nullptr) {
        auto prev_var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
        var_declarations.insert(prev_var_declarations.begin(), prev_var_declarations.end());
    }

    auto identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
    auto type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    for (const auto& identifier : identifiers) {
        if (var_declarations.find(identifier) != var_declarations.end()) {
            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                "'" + identifier + "' was already declared in this scope");
        }

        var_declarations[identifier] = type;
    }

    return var_declarations;
}

// @return std::vector<std::string>
antlrcpp::Any CodeGenVisitor::visitIdentifierList(PascalSParser::IdentifierListContext* ctx) {
    // Generate LLVM IR for identifier list
    std::vector<std::string> identifiers;
    std::string identifier = ctx->identifier()->getText();
    identifiers.push_back(identifier);

    if (ctx->identifierList() != nullptr) {
        auto next_identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
        identifiers.insert(identifiers.begin(), next_identifiers.begin(), next_identifiers.end());
    }

    return identifiers;
}

// @return llvm::Type*
antlrcpp::Any CodeGenVisitor::visitType(PascalSParser::TypeContext* ctx) {
    // Generate LLVM IR for type
    llvm::Type* type = nullptr;
    if (ctx->standardType() != nullptr) {
        type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));
    } else if (ctx->recordBody() != nullptr) {
        auto record_body = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->recordBody()));

        std::map<std::string, int> record_names;
        std::vector<llvm::Type*> record_types;
        int idx = 0;
        for (const auto& record : record_body) {
            record_names.insert({ record.first, idx++ });
            record_types.push_back(record.second);
        }

        type = llvm::StructType::get(context, record_types);

        scope->putRecord(type, record_names);
    } else if (ctx->ARRAY() != nullptr) {
        auto array_type_content = std::any_cast<llvm::Type*>(visit(ctx->type()));
        auto array_period = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));

        for (auto period = array_period.rbegin(); period != array_period.rend(); ++period) {
            int start = period->first;
            int end = period->second;
            array_type_content = ArrayType::get(array_type_content, end - start + 1);
        }

        type = array_type_content;

        scope->putArray(type, array_period);
    }

    return type;
}

// @return std::vector<std::pair<int, int>>
antlrcpp::Any CodeGenVisitor::visitPeriods(PascalSParser::PeriodsContext* ctx) {
    // Generate LLVM IR for periods
    std::vector<std::pair<int, int>> periods;
    if (ctx->periods() != nullptr) {
        auto next_periods = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));
        periods.insert(periods.begin(), next_periods.begin(), next_periods.end());
    }

    auto period = std::any_cast<std::pair<int, int>>(visit(ctx->period()));
    periods.push_back(period);

    return periods;
}

// @return std::pair<int, int>
antlrcpp::Any CodeGenVisitor::visitPeriod(PascalSParser::PeriodContext* ctx) {
    // Generate LLVM IR for period
    auto start_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(0)));
    auto end_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(1)));
    int start = start_const->getUniqueInteger().getLimitedValue();
    int end = end_const->getUniqueInteger().getLimitedValue();

    return std::make_pair(start, end);
}

// @return llvm::Type*
antlrcpp::Any CodeGenVisitor::visitStandardType(PascalSParser::StandardTypeContext* ctx) {
    // Generate LLVM IR for standard type
    llvm::Type* type = nullptr;
    if (ctx->INTEGER() != nullptr) {
        type = Type::getInt32Ty(context);
    } else if (ctx->BOOLEAN() != nullptr) {
        type = Type::getInt1Ty(context);
    } else if (ctx->REAL() != nullptr) {
        type = Type::getDoubleTy(context);
    } else if (ctx->CHAR() != nullptr) {
        type = Type::getInt8Ty(context);
    } else {
        type = Type::getVoidTy(context);
    }

    return type;
}

antlrcpp::Any CodeGenVisitor::visitExpression(PascalSParser::ExpressionContext* ctx) {
    // return: llvm::Value*
//    std::cout << "Visiting expression: " << ctx->getText() << std::endl;
    llvm::Value* value = nullptr;
    if (ctx->relationalOpreator()) {
        llvm::Value* left = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(0)));
        llvm::Value* right = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(1)));
        std::string op = ctx->relationalOpreator()->getText();

        if (op == "==") {
            value = builder.CreateICmpEQ(left, right, "eqtmp");
        } else if (op == "<>") {
            value = builder.CreateICmpNE(left, right, "netmp");
        } else if (op == "<") {
            value = builder.CreateICmpSLT(left, right, "lttmp");
        } else if (op == "<=") {
            value = builder.CreateICmpSLE(left, right, "letmp");
        } else if (op == ">") {
            value = builder.CreateICmpSGT(left, right, "gttmp");
        } else if (op == ">=") {
            value = builder.CreateICmpSGE(left, right, "getmp");
        }
    } else {

//        std::cout << "end expr" << std::endl;
        value = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(0)));
    }
    return value;
}

antlrcpp::Any CodeGenVisitor::visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) {
    //return: llvm::Value*
    Value* value = nullptr;
//    std::cout << "unsignConsVar" << std::endl;
    if (ctx->identifier()) {
        // 处理ID
        std::string varName = ctx->identifier()->getText();
        // 假设变量已经声明并在符号表中可用
        value = scope->get(varName);
        // TODO: 如果变量未声明或不是标识符，需要报错
    } else if (ctx->NUM()) {
        // 处理NUM
        std::string num_str = ctx->NUM()->getText();
        if (num_str.find('.') != std::string::npos || num_str.find('E') != std::string::npos || num_str.find('e') != std::string::npos) {
            double num = std::stod(num_str);
            value = llvm::ConstantFP::get(context, llvm::APFloat(num));
        } else {
            int num = std::stoi(num_str);
            value = llvm::ConstantInt::get(context, llvm::APInt(32, num));
        }
    } else if (ctx->LETTER()) {
        // 处理QUOTE LETTER QUOTE
        char letterValue = ctx->LETTER()->getText()[0];
        value = builder.getInt8(letterValue);
    }
//    std::cout << "end unsignConsVar" << std::endl;
    return value;
}

antlrcpp::Any CodeGenVisitor::visitFactor(PascalSParser::FactorContext* ctx) {
    //return: llvm::Value*
//    std::cout << "factor" << std::endl;
    Value* value = nullptr;
    if(ctx->unsignConstVariable()){
        value = std::any_cast<llvm::Value *>(visit(ctx->unsignConstVariable()));
    } else if(ctx->variable()){
        value = std::any_cast<llvm::Value *>(visit(ctx->variable()));
    } else if(ctx->identifier() && ctx->LPAREN() && ctx->expressionList() && ctx->RPAREN()){
        // Function call
        std::string funcName = ctx->identifier()->getText();
        Function* func = module->getFunction(funcName);
        if(!func) {
            // Not declared
            value = nullptr;
        } else{
            // visit expressionList will return a vector of Value*
            std::vector<Value*> args;
            args = std::any_cast<std::vector<Value*>>(visit(ctx->expressionList()));
            value = builder.CreateCall(func, args, "calltmp");
        }
    } else if(ctx->LPAREN() && ctx->expression() && ctx->RPAREN()){
        value = std::any_cast<llvm::Value*>(visit(ctx->expression()));
    } else if(ctx->NOT() && ctx->factor()){
        llvm::Value* factorValue = std::any_cast<llvm::Value*>(visit(ctx->factor()));
        value = builder.CreateNot(factorValue, "nottmp");
    } else if(ctx->boolean()){
        value = std::any_cast<llvm::Value*>(visit(ctx->boolean()));
    }
//    std::cout << "end factor" << std::endl;
    return value;
}

antlrcpp::Any CodeGenVisitor::visitTerm(PascalSParser::TermContext* ctx){
    // return: llvm::Value*
//    std::cout << "term" << std::endl;
    Value* value = nullptr;
    if(ctx->multiplyOperator()){
        Value* left = std::any_cast<llvm::Value*>(visit(ctx->term()));
        Value* right = std::any_cast<llvm::Value*>(visit(ctx->factor()));
        std::string op = ctx->multiplyOperator()->getText();

        if (op == "*") {
            value = builder.CreateMul(left, right, "multmp");
        } else if (op == "div") {
            value = builder.CreateSDiv(left, right, "divtmp");
        } else if (op == "mod") {
            value = builder.CreateSRem(left, right, "modtmp");
        } else if (op == "and") {
            value = builder.CreateAnd(left, right, "andtmp");
        }
    } else {
        value = std::any_cast<llvm::Value*>(visit(ctx->factor()));
    }
//    std::cout << "end term" << std::endl;
    return value;
}

antlrcpp::Any CodeGenVisitor::visitBoolean(PascalSParser::BooleanContext* ctx) {
    // return: llvm::Value*
    Value* value = nullptr;
    if(ctx->TRUE()){
        value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(context), 1);
    } else if(ctx->FALSE()){
        value = llvm::ConstantInt::get(llvm::Type::getInt1Ty(context), 0);
    }
}

antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx){
    // return: llvm::Value*
//    std::cout << "simpleExp" << std::endl;
    Value* value = nullptr;
    if(ctx->PLUS()||ctx->MINUS()){
        Value* termValue = std::any_cast<llvm::Value*>(visit(ctx->term()));
        if(ctx->PLUS()){
            value = termValue;
        } else if(ctx->MINUS()){
            value = builder.CreateNeg(termValue, "negtmp");
        }
    } else if (ctx->addOperator()){
        llvm::Value* left = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression()));
        llvm::Value* right = std::any_cast<llvm::Value*>(visit(ctx->term()));
        std::string op = ctx->addOperator()->getText();

        // Load the values if they are variables
        if (left->getType()->isPointerTy()) {
            left = builder.CreateLoad(left->getType(), left, "loadleft");
        }
        if (right->getType()->isPointerTy()) {
            right = builder.CreateLoad(right->getType(), right, "loadright");
        }
        if (op == "+") {
            value = builder.CreateAdd(left, right, "addtmp");
        } else if (op == "-") {
            value = builder.CreateSub(left, right, "subtmp");
        } else if (op == "or") {
            value = builder.CreateOr(left, right, "ortmp");
        }
    } else{
        value = std::any_cast<llvm::Value*>(visit(ctx->term()));
    }
//    std::cout << "end simpleExp" << std::endl;
    return value;
}

antlrcpp::Any CodeGenVisitor::visitVariable(PascalSParser::VariableContext* ctx) {
    // return: llvm::Value*

//    初始化 value 为变量的基地址
//      for 每个 idVarpart in idVarpartsCtx:
//          if idVarpart 是数组索引:
//              计算数组元素的地址
//              更新 value 为新的地址
//          else if idVarpart 是记录字段:
//              计算字段的偏移量
//              更新 value 为新的地址
//      返回 value
    // Retrieve the base identifier
    std::string varName = ctx->identifier()->getText();
    llvm::Value* value = scope->get(varName);

    // Retrieve the IdVarpartsContext
    PascalSParser::IdVarpartsContext* idVarpartsCtx = ctx->idVarparts();

    // Process each IdVarpartContext
    for (size_t i = 0; i < idVarpartsCtx->children.size(); ++i) {
        auto idVarpartCtx = dynamic_cast<PascalSParser::IdVarpartContext*>(idVarpartsCtx->children[i]);
        if (idVarpartCtx) {
            if (idVarpartCtx->LBRACKET()) {
                // Handle array element access
                std::vector<Value*> index = std::any_cast<std::vector<Value*>>(visit(idVarpartCtx->expressionList()));
                value = getArrayElement(value, index);
            } else if (idVarpartCtx->DOT()) {
                // Handle record field access
                std::string fieldName = idVarpartCtx->identifier()->getText();
                value = getRecordElement(value, fieldName);
            }
        }
    }

    return value;
}

// Implement other visit methods as needed

Value* CodeGenVisitor::getArrayElement(Value* array, std::vector<Value*> index) {
    // Generate LLVM IR for getting array element
    Type* array_type = ((AllocaInst*)array)->getAllocatedType();
    std::vector<std::pair<int, int>> array_info = scope->getArray(array_type);
    // if (array_info.size() != index.size()) {
    //     throw SemanticException(filename, 0, 0, "Array index count mismatch");
    // }

    std::vector<Value*> offsetted_indices;
    for (int i = 0; i < array_info.size(); i++) {
        Value* start = ConstantInt::get(context, APInt(32, array_info[i].first));
        Value* offset = builder.CreateSub(index[i], start);
        offsetted_indices.push_back(offset);
    }

    return builder.CreateGEP(array_type, array, offsetted_indices);
}

Value* CodeGenVisitor::getRecordElement(Value* record, std::string& field) {
    // Generate LLVM IR for getting record element
    Type* record_type = ((AllocaInst*)record)->getAllocatedType();
    std::map<std::string, int> record_info = scope->getRecord(record_type);
    int index = record_info[field];

    // if (index == -1) {
    //     throw SemanticException(filename, 0, 0, "Field '" + field + "' not found in record");
    // }

    return builder.CreateStructGEP(record_type, record, index);
}
