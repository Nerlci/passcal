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
    auto program_id_node = ctx->ID();
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

//antlrcpp::Any CodeGenVisitor::visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) {
//    // Generate LLVM IR for constant declaration
//    if (ctx->constDeclaration() != nullptr) {
//        visit(ctx->constDeclaration());
//    }
//
//    std::string identifier = ctx->ID()->getText();
//    llvm::Value* value = std::any_cast<llvm::Value*>(visit(ctx->constVariable()));
//
//    module->getOrInsertGlobal(identifier, value->getType());
//    llvm::GlobalVariable* global = module->getNamedGlobal(identifier);
//    global->setInitializer(dyn_cast<Constant>(value));
//    global->setConstant(true);
//
//    scope->put(identifier, global);
//
//    return nullptr;
//}
//
//// @return llvm::Value*
//antlrcpp::Any CodeGenVisitor::visitConstVariable(PascalSParser::ConstVariableContext* ctx) {
//    // Generate LLVM IR for constant variable
//    llvm::Value* value = nullptr;
//
//    if (ctx->ID() != nullptr) {
//        std::string identifier = ctx->ID()->getText();
//        auto global = module->getNamedGlobal(identifier);
//
//        if (global == nullptr) {
//            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
//                "'" + identifier + "' was not declared in this scope or is not a constant");
//        } else {
//            value = (llvm::ConstantInt*)global->getInitializer();
//        }
//    }
//
//    if (ctx->NUM() != nullptr) {
//        bool negative = ctx->MINUS() != nullptr;
//
//        std::string num_str = ctx->NUM()->getText();
//        if (num_str.find('.') != std::string::npos) {
//            double num = std::stod(num_str) * (negative ? -1 : 1);
//            value = ConstantFP::get(context, APFloat(num));
//        } else {
//            int num = std::stoi(num_str) * (negative ? -1 : 1);
//            value = ConstantInt::get(context, APInt(32, num, !negative));
//        }
//    }
//
//    if (ctx->CHARLITERAL() != nullptr) {
//        char letter = ctx->CHARLITERAL()->getText()[1];
//        value = ConstantInt::get(context, APInt(8, letter));
//    }
//
//    return value;
//}
//
//antlrcpp::Any CodeGenVisitor::visitTypeDeclaration(PascalSParser::TypeDeclarationContext* ctx) {
//    // Generate LLVM IR for type declaration
//    if (ctx->typeDeclaration() != nullptr) {
//        visit(ctx->typeDeclaration());
//    }
//
//    std::string identifier = ctx->ID()->getText();
//    llvm::Type* type = std::any_cast<llvm::Type*>(visit(ctx->type()));
//
//    llvm::StructType* type_struct = llvm::StructType::create(context, "type_" + identifier);
//    type_struct->setBody(type);
//    auto addr = builder.CreateAlloca(type_struct, nullptr, identifier);
//
//    return nullptr;
//}
//
//antlrcpp::Any CodeGenVisitor::visitVarDeclarations(PascalSParser::VarDeclarationsContext* ctx) {
//    // Generate LLVM IR for variable declarations
//    if (ctx->varDeclaration() != nullptr) {
//        auto var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
//
//        for (const auto& var_declaration : var_declarations) {
//            std::string identifier = var_declaration.first;
//            llvm::Type* type = var_declaration.second;
//
//            auto alloca = builder.CreateAlloca(type, nullptr, identifier);
//            scope->put(identifier, alloca);
//        }
//    }
//
//    return nullptr;
//}
//
//// @return std::map<std::string, llvm::Type*>
//antlrcpp::Any CodeGenVisitor::visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) {
//    // Generate LLVM IR for variable declaration
//    std::map<std::string, llvm::Type*> var_declarations;
//    if (ctx->varDeclaration() != nullptr) {
//        auto prev_var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
//        var_declarations.insert(prev_var_declarations.begin(), prev_var_declarations.end());
//    }
//
//    auto identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
//    auto type = std::any_cast<llvm::Type*>(visit(ctx->type()));
//
//    for (const auto& identifier : identifiers) {
//        if (var_declarations.find(identifier) != var_declarations.end()) {
//            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
//                "'" + identifier + "' was already declared in this scope");
//        }
//
//        var_declarations[identifier] = type;
//    }
//
//    return var_declarations;
//}
//
//// @return std::vector<std::string>
//antlrcpp::Any CodeGenVisitor::visitIdentifierList(PascalSParser::IdentifierListContext* ctx) {
//    // Generate LLVM IR for identifier list
//    std::vector<std::string> identifiers;
//    std::string identifier = ctx->ID()->getText();
//    identifiers.push_back(identifier);
//
//    if (ctx->identifierList() != nullptr) {
//        auto next_identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
//        identifiers.insert(identifiers.begin(), next_identifiers.begin(), next_identifiers.end());
//    }
//
//    return identifiers;
//}
//
//// @return llvm::Type*
//antlrcpp::Any CodeGenVisitor::visitType(PascalSParser::TypeContext* ctx) {
//    // Generate LLVM IR for type
//    llvm::Type* type = nullptr;
//    if (ctx->standardType() != nullptr) {
//        type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));
//    } else if (ctx->recordBody() != nullptr) {
//        auto record_body = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->recordBody()));
//
//        std::map<std::string, int> record_names;
//        std::vector<llvm::Type*> record_types;
//        int idx = 0;
//        for (const auto& record : record_body) {
//            record_names.insert({ record.first, idx++ });
//            record_types.push_back(record.second);
//        }
//
//        type = llvm::StructType::get(context, record_types);
//
//        scope->putRecord(type, record_names);
//    } else if (ctx->ARRAY() != nullptr) {
//        auto array_type_content = std::any_cast<llvm::Type*>(visit(ctx->type()));
//        auto array_period = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));
//
//        for (auto period = array_period.rbegin(); period != array_period.rend(); ++period) {
//            int start = period->first;
//            int end = period->second;
//            array_type_content = ArrayType::get(array_type_content, end - start + 1);
//        }
//
//        type = array_type_content;
//
//        scope->putArray(type, array_period);
//    }
//
//    return type;
//}
//
//// @return std::vector<std::pair<int, int>>
//antlrcpp::Any CodeGenVisitor::visitPeriods(PascalSParser::PeriodsContext* ctx) {
//    // Generate LLVM IR for periods
//    std::vector<std::pair<int, int>> periods;
//    if (ctx->periods() != nullptr) {
//        auto next_periods = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));
//        periods.insert(periods.begin(), next_periods.begin(), next_periods.end());
//    }
//
//    auto period = std::any_cast<std::pair<int, int>>(visit(ctx->period()));
//    periods.push_back(period);
//
//    return periods;
//}
//
//// @return std::pair<int, int>
//antlrcpp::Any CodeGenVisitor::visitPeriod(PascalSParser::PeriodContext* ctx) {
//    // Generate LLVM IR for period
//    auto start_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(0)));
//    auto end_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(1)));
//    int start = start_const->getUniqueInteger().getLimitedValue();
//    int end = end_const->getUniqueInteger().getLimitedValue();
//
//    return std::make_pair(start, end);
//}
//
//// @return llvm::Type*
//antlrcpp::Any CodeGenVisitor::visitStandardType(PascalSParser::StandardTypeContext* ctx) {
//    // Generate LLVM IR for standard type
//    llvm::Type* type = nullptr;
//    if (ctx->INTEGER() != nullptr) {
//        type = Type::getInt32Ty(context);
//    } else if (ctx->BOOLEAN() != nullptr) {
//        type = Type::getInt1Ty(context);
//    } else if (ctx->REAL() != nullptr) {
//        type = Type::getDoubleTy(context);
//    } else if (ctx->CHAR() != nullptr) {
//        type = Type::getInt8Ty(context);
//    } else {
//        type = Type::getVoidTy(context);
//    }
//
//    return type;
//}

antlrcpp::Any CodeGenVisitor::visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) {
    Value* value = nullptr;
    std::cout<< "Hello" <<std::endl;

    if (ctx->ID()) {
        std::cout<< "Hello" <<std::endl;
        std::string varName = ctx->ID()->getText();
        value = scope->get(varName);
        // 未找到标识符
        if (!value) {
            throw SemanticException("Undefined identifier: " + varName);
        }
    } else if (ctx->NUM()) {
        std::string num_text = ctx->NUM()->getText();
        if (num_text.find('.') != std::string::npos || num_text.find('E') != std::string::npos) {
            // 浮点数
            double num_value = std::stod(num_text);
            value = ConstantFP::get(context, APFloat(num_value));
        } else {
            // 整数
            int num_value = std::stoi(num_text);
            value = builder.getInt32(num_value);
        }
    } else if (ctx->CHARLITERAL()) {
        std::string char_text = ctx->CHARLITERAL()->getText();
        if (char_text.length() != 1) {
            throw SemanticException("Invalid character literal: " + char_text);
        }
        char charValue = char_text[0];
        value = builder.getInt8(charValue);
    } else {
        throw SemanticException("Unknown constant type");
    }
    return value;
}

antlrcpp::Any CodeGenVisitor::visitFactor(PascalSParser::FactorContext* ctx) {
    if (ctx->unsignConstVariable()) {
        return visit(ctx->unsignConstVariable());
    } else if (ctx->variable()) {
        return visit(ctx->variable());
    } else if (ctx->LPAREN()) {
        return visit(ctx->expression());
    } else if (ctx->NOT()) {
        Value* expr = std::any_cast<Value*>(visit(ctx->factor()));
        if (!expr) {
            throw SemanticException("Invalid expression after NOT operator.");
        }
        return builder.CreateNot(expr);
    } else if (ctx->boolean()) {
        if (ctx->boolean()->TRUE()) {
            return builder.getInt1(true);
        } else {
            return builder.getInt1(false);
        }
    } else {
        throw SemanticException("Unrecognized factor.");
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitTerm(PascalSParser::TermContext* ctx) {
    Value* result = std::any_cast<Value*>(visit(ctx->factor()));
    if (!result) {
        throw SemanticException("Failed to evaluate factor in term.");
    }

    if (ctx->term()) {

        Value* nextTerm = std::any_cast<Value*>(visit(ctx->term()));
        if (!nextTerm) {
            throw SemanticException("Failed to evaluate next term.");
        }

        std::string mulop = ctx->multiplyOperator()->getText();
        if (mulop == "*") {
            result = builder.CreateMul(result, nextTerm, "multmp");
        } else if (mulop == "/" || mulop == "div") {
            result = builder.CreateSDiv(result, nextTerm, "divtmp");
        } else if (mulop == "mod") {
            result = builder.CreateSRem(result, nextTerm, "modtmp");
        } else if (mulop == "and") {
            result = builder.CreateAnd(result, nextTerm, "andtmp");
        } else {
            throw SemanticException("Unrecognized multiplication operator: " + mulop);
        }
    }

    return result;
}

// 处理简单表达式
antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx) {
    Value* result = std::any_cast<Value*>(visit(ctx->term()));
    if (!result) {
        throw SemanticException("Failed to evaluate term in simple expression.");
    }

    if (ctx->simpleExpression()) {
        Value* nextSimpleExpr = std::any_cast<Value*>(visit(ctx->simpleExpression()));
        if (!nextSimpleExpr) {
            throw SemanticException("Failed to evaluate next simple expression.");
        }

        std::string addop = ctx->addOperator()->getText();
        if (addop == "+") {
            result = builder.CreateAdd(result, nextSimpleExpr, "addtmp");
        } else if (addop == "-") {
            result = builder.CreateSub(result, nextSimpleExpr, "subtmp");
        } else if (addop == "or") {
            result = builder.CreateOr(result, nextSimpleExpr, "ortmp");
        } else {
            throw SemanticException("Unrecognized addition operator: " + addop);
        }
    } else if (ctx->PLUS()) {
        result = builder.CreateAdd(builder.getInt32(0), result, "unaryplustmp");
    } else if (ctx->MINUS()) {
        result = builder.CreateSub(builder.getInt32(0), result, "unaryminustmp");
    }

    return result;
}

// 处理表达式
antlrcpp::Any CodeGenVisitor::visitExpression(PascalSParser::ExpressionContext* ctx) {
    Value* lhs = std::any_cast<Value*>(visit(ctx->simpleExpression(0)));
    if (!lhs) {
        throw SemanticException("Failed to evaluate left-hand side of expression.");
    }

    if (ctx->simpleExpression().size() > 1) {
        Value* rhs = std::any_cast<Value*>(visit(ctx->simpleExpression(1)));
        if (!rhs) {
            throw SemanticException("Failed to evaluate right-hand side of expression.");
        }

        std::string relop = ctx->relationalOpreator()->getText();
        if (relop == "=") {
            return builder.CreateICmpEQ(lhs, rhs, "eqtmp");
        } else if (relop == "<>") {
            return builder.CreateICmpNE(lhs, rhs, "netmp");
        } else if (relop == "<") {
            return builder.CreateICmpSLT(lhs, rhs, "lttmp");
        } else if (relop == "<=") {
            return builder.CreateICmpSLE(lhs, rhs, "letmp");
        } else if (relop == ">") {
            return builder.CreateICmpSGT(lhs, rhs, "gttmp");
        } else if (relop == ">=") {
            return builder.CreateICmpSGE(lhs, rhs, "getmp");
        } else {
            throw SemanticException("Unrecognized relational operator: " + relop);
        }
    } else {
        return lhs;
    }
}

// 处理赋值语句
antlrcpp::Any CodeGenVisitor::visitAssignmentStatement(PascalSParser::AssignmentStatementContext* ctx) {
    Value* var = std::any_cast<Value*>(visit(ctx->variable()));
    Value* expr = std::any_cast<Value*>(visit(ctx->expression()));

    if (!var) {
        throw SemanticException("Undefined variable in assignment.");
    }

    if (!expr) {
        throw SemanticException("Failed to evaluate expression in assignment.");
    }

    return builder.CreateStore(expr, var);
}

// 处理表达式列表
antlrcpp::Any CodeGenVisitor::visitExpressionList(PascalSParser::ExpressionListContext* ctx) {
    std::vector<Value*> expressions;

    // 假如有嵌套的表达式列表
    if (ctx->expressionList()) {
        auto nestedExpressions = std::any_cast<std::vector<Value*>>(visit(ctx->expressionList()));
        expressions.insert(expressions.end(), nestedExpressions.begin(), nestedExpressions.end());
    }

    Value* exprValue = std::any_cast<Value*>(visit(ctx->expression()));
    if (!exprValue) {
        throw SemanticException("Failed to evaluate expression in expression list.");
    }
    expressions.push_back(exprValue);

    return expressions;
}

// 处理函数调用
antlrcpp::Any CodeGenVisitor::visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext* ctx) {
    std::string func_name = ctx->ID()->getText();
    Value* symbol = scope->get(func_name);

    // 作用域中无该符号
    if (!symbol) {
        throw SemanticException("Undefined function: " + func_name);
    }

    // 该符号不是函数
    if (!llvm::isa<llvm::Function>(symbol)) {
        throw SemanticException(func_name + " is not a function.");
    }

    Function* func = llvm::cast<llvm::Function>(symbol);

    std::vector<Value*> args;
    if (ctx->expressionList()) {
        auto expr_list = std::any_cast<std::vector<Value*>>(visit(ctx->expressionList()));
        args.insert(args.end(), expr_list.begin(), expr_list.end());
    }

    return builder.CreateCall(func, args, "calltmp");
}

//Value* CodeGenVisitor::getArrayElement(Value* array, std::vector<Value*> index) {
//    // Generate LLVM IR for getting array element
//    Type* array_type = ((AllocaInst*)array)->getAllocatedType();
//    std::vector<std::pair<int, int>> array_info = scope->getArray(array_type);
//    // if (array_info.size() != index.size()) {
//    //     throw SemanticException(filename, 0, 0, "Array index count mismatch");
//    // }
//
//    std::vector<Value*> offsetted_indices;
//    for (int i = 0; i < array_info.size(); i++) {
//        Value* start = ConstantInt::get(context, APInt(32, array_info[i].first));
//        Value* offset = builder.CreateSub(index[i], start);
//        offsetted_indices.push_back(offset);
//    }
//
//    return builder.CreateGEP(array_type, array, offsetted_indices);
//}
//
//Value* CodeGenVisitor::getRecordElement(Value* record, std::string& field) {
//    // Generate LLVM IR for getting record element
//    Type* record_type = ((AllocaInst*)record)->getAllocatedType();
//    std::map<std::string, int> record_info = scope->getRecord(record_type);
//    int index = record_info[field];
//
//    // if (index == -1) {
//    //     throw SemanticException(filename, 0, 0, "Field '" + field + "' not found in record");
//    // }
//
//    return builder.CreateStructGEP(record_type, record, index);
//}