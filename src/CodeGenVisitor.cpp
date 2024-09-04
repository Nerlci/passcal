#include "CodeGenVisitor.h"

CodeGenVisitor::CodeGenVisitor()
    : builder(context) {
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

antlrcpp::Any CodeGenVisitor::visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) {
    // Generate LLVM IR for constant declaration
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) {
    // Generate LLVM IR for variable declaration
    auto identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
    auto type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    for (const auto& identifier : identifiers) {
        // Create an alloca instruction for the variable
        // TODO: Handle array types and record types
        auto alloca = builder.CreateAlloca(type, nullptr, identifier);
        scope->put(identifier, alloca);
    }
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitIdentifierList(PascalSParser::IdentifierListContext* ctx) {
    // Generate LLVM IR for identifier list
    std::vector<std::string> identifiers;
    std::string identifier = ctx->ID()->getText();
    identifiers.push_back(identifier);

    if (ctx->identifierList() != nullptr) {
        auto next_identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
        identifiers.insert(identifiers.begin(), next_identifiers.begin(), next_identifiers.end());
    }

    return identifiers;
}

antlrcpp::Any CodeGenVisitor::visitType(PascalSParser::TypeContext* ctx) {
    // Generate LLVM IR for type
    llvm::Type* type = nullptr;
    if (ctx->standardType() != nullptr) {
        type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));
    } else {
        type = Type::getInt32Ty(context);
    }

    return type;
}

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

antlrcpp::Any CodeGenVisitor::visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) {
    Value* value = nullptr;

    if (ctx->ID()) {
        std::string varName = ctx->ID()->getText();
        Value* var = module->getNamedGlobal(varName);
        return var;
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
    } else if (!ctx->QUOTE().empty()) {
        char char_value = ctx->LETTER()->getText()[0];
        value = builder.getInt8(char_value);
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
        return builder.CreateNot(expr);
    } else if (ctx->boolean()) {
        if (ctx->boolean()->TRUE()) {
            return builder.getInt1(true);
        } else {
            return builder.getInt1(false);
        }
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitTerm(PascalSParser::TermContext* ctx) {
    Value* result = std::any_cast<Value*>(visit(ctx->factor()));

    if (ctx->term()) {

        Value* nextTerm = std::any_cast<Value*>(visit(ctx->term()));

        if (ctx->MULOP()->getText() == "*") {
            result = builder.CreateMul(result, nextTerm, "multmp");
        } else if (ctx->MULOP()->getText() == "/") {
            result = builder.CreateSDiv(result, nextTerm, "divtmp");
        } else if (ctx->MULOP()->getText() == "div") {
            result = builder.CreateSDiv(result, nextTerm, "divtmp");
        } else if (ctx->MULOP()->getText() == "mod") {
            result = builder.CreateSRem(result, nextTerm, "modtmp");
        } else if (ctx->MULOP()->getText() == "and") {
            result = builder.CreateAnd(result, nextTerm, "andtmp");
        }
    }

    return result;
}

// 处理简单表达式
antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx) {
    Value* result = std::any_cast<Value*>(visit(ctx->term()));

    if (ctx->simpleExpression()) {
        Value* nextSimpleExpr = std::any_cast<Value*>(visit(ctx->simpleExpression()));

        if (ctx->ADDOP()->getText() == "+") {
            result = builder.CreateAdd(result, nextSimpleExpr, "addtmp");
        } else if (ctx->ADDOP()->getText() == "-") {
            result = builder.CreateSub(result, nextSimpleExpr, "subtmp");
        } else if (ctx->ADDOP()->getText() == "or") {
            result = builder.CreateOr(result, nextSimpleExpr, "ortmp");
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

    if (ctx->simpleExpression().size() > 1) {
        Value* rhs = std::any_cast<Value*>(visit(ctx->simpleExpression(1)));

        std::string relop = ctx->RELOP()->getText();

        if (relop == "=") {
            return builder.CreateICmpEQ(lhs, rhs, "eqtmp");
        } else if (relop == "<>") {
            return builder.CreateICmpNE(lhs, rhs, "netmp");
        } else if (relop == "<") {
            return builder.CreateICmpSLT(lhs, rhs, "clttmp");
        } else if (relop == "<=") {
            return builder.CreateICmpSLE(lhs, rhs, "cletmp");
        } else if (relop == ">") {
            return builder.CreateICmpSGT(lhs, rhs, "cgtmp");
        } else if (relop == ">=") {
            return builder.CreateICmpSGE(lhs, rhs, "cgemptmp");
        }
    } else {
        return lhs;
    }

    return nullptr;
}

// 处理赋值语句
antlrcpp::Any CodeGenVisitor::visitAssignmentStatement(PascalSParser::AssignmentStatementContext* ctx) {
    Value* var = std::any_cast<Value*>(visit(ctx->variable()));
    Value* expr = std::any_cast<Value*>(visit(ctx->expression()));

    if (!var) {
        // 变量未定义
        return nullptr;
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
    expressions.push_back(exprValue);

    return expressions;
}

// 处理函数调用
antlrcpp::Any CodeGenVisitor::visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext* ctx) {
    std::string func_name = ctx->ID()->getText();
    Value* symbol = scope->get(func_name);

    // 作用域中无该符号
    if (!symbol) {
        return nullptr;
    }

    // 该符号不是函数
    if (!llvm::isa<llvm::Function>(symbol)) {
        return nullptr;
    }

    Function* func = llvm::cast<llvm::Function>(symbol);

    std::vector<Value*> args;
    if (ctx->expressionList()) {
        auto expr_list = std::any_cast<std::vector<Value*>>(visit(ctx->expressionList()));
        args.insert(args.end(), expr_list.begin(), expr_list.end());
    }

    return builder.CreateCall(func, args, "calltmp");
}
