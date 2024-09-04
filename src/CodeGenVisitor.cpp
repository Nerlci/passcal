#include "CodeGenVisitor.h"

CodeGenVisitor::CodeGenVisitor()
        : builder(context) {
}

antlrcpp::Any CodeGenVisitor::visitProgramHead(PascalSParser::ProgramHeadContext* ctx) {

    // Create a new LLVM module
    auto program_id_node = ctx->identifier();
    std::string program_name = program_id_node->getText();
    module = std::make_unique<Module>(program_name, context);
    return visitChildren(ctx);
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
            // TODO: Handle undeclared identifier
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

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitVarDeclarations(PascalSParser::VarDeclarationsContext* ctx) {
    // Generate LLVM IR for variable declarations
    auto var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));

    for (const auto& var_declaration : var_declarations) {
        std::string identifier = var_declaration.first;
        llvm::Type* type = var_declaration.second;

        auto alloca = builder.CreateAlloca(type, nullptr, identifier);
        scope->put(identifier, alloca);
    }

    return nullptr;
}

// @return std::map<std::string, llvm::Type*>
antlrcpp::Any CodeGenVisitor::visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) {
    // Generate LLVM IR for variable declaration
    // TODO: Return maps of variable names to types
    std::map<std::string, llvm::Type*> var_declarations;
    if (ctx->varDeclaration() != nullptr) {
        auto prev_var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
        var_declarations.insert(prev_var_declarations.begin(), prev_var_declarations.end());
    }

    auto identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
    auto type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    for (const auto& identifier : identifiers) {
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
        type = std::any_cast<llvm::Type*>(visit(ctx->recordBody()));
    } else if (ctx->ARRAY() != nullptr) {
        auto array_type_content = std::any_cast<llvm::Type*>(visit(ctx->type()));
        auto array_period = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));

        for (auto period = array_period.rbegin(); period != array_period.rend(); ++period) {
            int start = period->first;
            int end = period->second;
            array_type_content = ArrayType::get(array_type_content, end - start + 1);
            std::cout << start << " " << end << std::endl;
        }

        type = array_type_content;
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

antlrcpp::Any CodeGenVisitor::visitRecordBody(PascalSParser::RecordBodyContext* ctx) {
    // Generate LLVM IR for record body
    llvm::StructType* record = nullptr;
    if (ctx->varDeclaration() != nullptr) {
        auto var_declaration = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
        // std::vector<llvm::Type*> elements;

        // if (ctx->recordSection() != nullptr) {
        //     auto record_sections = ctx->recordSection();
        //     for (auto record_section : record_sections) {
        //         auto identifiers = std::any_cast<std::vector<std::string>>(visit(record_section->identifierList()));
        //         auto type = std::any_cast<llvm::Type*>(visit(record_section->type()));

        //         for (const auto& identifier : identifiers) {
        //             elements.push_back(type);
        //         }
        //     }
        // }

        // record = llvm::StructType::create(context, elements, "record");
    } else {
        record = llvm::StructType::create(context, "record");
    }

    return record;
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
//    if(!ctx->RELOP()){
//        return visitSimpleExpression(ctx->simpleExpression(0));
//    }
//    auto L = visitSimpleExpression(ctx->simpleExpression(0));
//    auto R = visitSimpleExpression(ctx->simpleExpression(1));
//    if(ctx->RELOP()->getText() == "<"){
//        return
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) {
    if (ctx->identifier()) {
        // 处理ID
        std::string varName = ctx->identifier()->getText();
        // 假设变量已经声明并在符号表中可用
        Value* var = module->getNamedValue(varName);
        // TODO: 如果变量未声明或不是标识符，需要报错
        return var;
    } else if (ctx->NUM()) {
        // 处理NUM
        int numValue = std::stoi(ctx->NUM()->getText());
        return builder.getInt32(numValue);
    } else if (ctx->LETTER()) {
        // 处理QUOTE LETTER QUOTE
        char letterValue = ctx->LETTER()->getText()[0];
        return builder.getInt8(letterValue);
    }
    return nullptr;
    return visitChildren(ctx);
}

//antlrcpp::Any CodeGenVisitor::visitFactor(PascalSParser::FactorContext *ctx) {
//    if (ctx->unsignConstVariable()) {
//        return visitUnsignConstVariable(ctx->unsignConstVariable());
//    } else if (ctx->variable()) {
//        return visitVariable(ctx->variable());
//    } else if (ctx->ID()) {
//        // Handle ID case
//        return ctx->ID()->getText();
//    } else if (ctx->LPAREN()) {
//        return visitExpression(ctx->expression());
//    } else if (ctx->NOT()) {
//        auto factor = visitFactor(ctx->factor());
//        // Handle NOT operation
//        return !std::any_cast<bool>(factor);
//    } else if (ctx->boolean()) {
//        return visitBoolean(ctx->boolean());
//    }
//    return nullptr;
//}

//antlrcpp::Any CodeGenVisitor::visitTerm(PascalSParser::TermContext *ctx) {
//    if(!ctx->MULOP()){
//        return visitFactor(ctx->factor());
//    }
//    auto L = visitTerm(ctx->term());
//    auto R = visitFactor(ctx->factor());
//    if(ctx->MULOP()->getText() == "*"){
//        return builder.CreateMul(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"multmp");
//    } else if(ctx->MULOP()->getText() == "/"){
//        return builder.CreateSDiv(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"divtmp");
//    } else if(ctx->MULOP()->getText() == "div"){
//        return builder.CreateSDiv(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"divtmp");
//    } else if(ctx->MULOP()->getText() == "mod"){
//        return builder.CreateSRem(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"modtmp");
//    } else if(ctx->MULOP()->getText() == "and"){
//        return builder.CreateAnd(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"andtmp");
//    }
//}

//antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext *ctx) {
//    if(!ctx->ADDOP()){
//        return visit(ctx->term());
//    }
//    else if(ctx->ADDOP()) {
//        auto left = visit(ctx->simpleExpression());
//        auto right = visit(ctx->term());
//        Value *leftvalue = std::any_cast<llvm::Value *>(left);
//        Value *rightvalue = std::any_cast<llvm::Value *>(right);
//        if (ctx->ADDOP()->getText() == "+") {
//            return builder.CreateAdd(leftvalue, rightvalue, "addtmp");
//        } else if (ctx->ADDOP()->getText() == "-") {
//            return builder.CreateSub(leftvalue, rightvalue, "subtmp");
//        } else if (ctx->ADDOP()->getText() == "or") {
//            return builder.CreateOr(leftvalue, rightvalue, "ortmp");
//        }
//    }
//    else if(ctx->PLUS()||ctx->MINUS()){
//        auto termValue = visit(ctx->term());
//        Value* termValue1 = std::any_cast<llvm::Value *>(termValue);
//        if(ctx->PLUS()) {
//            return termValue1;
//        } else if(ctx->MINUS()){
//            return builder.CreateNeg(termValue1,"negtmp");
//        }
//    }
//    return nullptr;
//}

//antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx) {
//    if (ctx->term()) {
//        // 情况：simpleExpression -> term
//        return visit(ctx->term());
//    } else if (ctx->ADDOP()) {
//        // 情况：simpleExpression -> simpleExpression ADDOP term
//        Value* left = std::any_cast<llvm::Value>visit(ctx->simpleExpression());
//        Value* right = std::any_cast<llvm::Value>visit(ctx->term());
//        if (ctx->ADDOP()->getText() == "+") {
//            return builder.CreateAdd(left, right, "addtmp");
//        } else if (ctx->ADDOP()->getText() == "-") {
//            return builder.CreateSub(left, right, "subtmp");
//        }
//    } else if (ctx->PLUS() || ctx->MINUS()) {
//        // 情况：simpleExpression -> PLUS term | MINUS term
//        Value* termValue = visit(ctx->term()).as<Value*>();
//        if (ctx->PLUS()) {
//            return termValue; // 一元加，不变
//        } else if (ctx->MINUS()) {
//            return builder.CreateNeg(termValue, "negtmp");
//        }
//    }
//    return nullptr;
//}

// 实现其他需要的访问方法
