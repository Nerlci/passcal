#include "CodeGenVisitor.h"

CodeGenVisitor::CodeGenVisitor()
        : builder(context) {
}

antlrcpp::Any CodeGenVisitor::visitProgramHead(PascalSParser::ProgramHeadContext* ctx) {
    // 创建一个新的LLVM模块
    auto program_id_node = ctx->ID();
    std::string program_name = program_id_node->getText();
    module = std::make_unique<Module>(program_name, context);
    return visitChildren(ctx);
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
    if (ctx->ID()) {
        // 处理ID
        std::string varName = ctx->ID()->getText();
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
}

antlrcpp::Any CodeGenVisitor::visitFactor(PascalSParser::FactorContext *ctx) {
    if (ctx->unsignConstVariable()) {
        return visitUnsignConstVariable(ctx->unsignConstVariable());
    } else if (ctx->variable()) {
        return visitVariable(ctx->variable());
    } else if (ctx->ID()) {
        // Handle ID case
        return ctx->ID()->getText();
    } else if (ctx->LPAREN()) {
        return visitExpression(ctx->expression());
    } else if (ctx->NOT()) {
        auto factor = visitFactor(ctx->factor());
        // Handle NOT operation
        return !std::any_cast<bool>(factor);
    } else if (ctx->boolean()) {
        return visitBoolean(ctx->boolean());
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitTerm(PascalSParser::TermContext *ctx) {
    if(!ctx->MULOP()){
        return visitFactor(ctx->factor());
    }
    auto L = visitTerm(ctx->term());
    auto R = visitFactor(ctx->factor());
    if(ctx->MULOP()->getText() == "*"){
        return builder.CreateMul(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"multmp");
    } else if(ctx->MULOP()->getText() == "/"){
        return builder.CreateSDiv(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"divtmp");
    } else if(ctx->MULOP()->getText() == "div"){
        return builder.CreateSDiv(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"divtmp");
    } else if(ctx->MULOP()->getText() == "mod"){
        return builder.CreateSRem(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"modtmp");
    } else if(ctx->MULOP()->getText() == "and"){
        return builder.CreateAnd(std::any_cast<llvm::Value *>(L),std::any_cast<llvm::Value *>(R),"andtmp");
    }
}

antlrcpp::Any CodeGenVisitor::visitSimpleExpression(PascalSParser::SimpleExpressionContext *ctx) {
    if(!ctx->ADDOP()){
        return visit(ctx->term());
    }
    else if(ctx->ADDOP()) {
        auto left = visit(ctx->simpleExpression());
        auto right = visit(ctx->term());
        Value *leftvalue = std::any_cast<llvm::Value *>(left);
        Value *rightvalue = std::any_cast<llvm::Value *>(right);
        if (ctx->ADDOP()->getText() == "+") {
            return builder.CreateAdd(leftvalue, rightvalue, "addtmp");
        } else if (ctx->ADDOP()->getText() == "-") {
            return builder.CreateSub(leftvalue, rightvalue, "subtmp");
        } else if (ctx->ADDOP()->getText() == "or") {
            return builder.CreateOr(leftvalue, rightvalue, "ortmp");
        }
    }
    else if(ctx->PLUS()||ctx->MINUS()){
        auto termValue = visit(ctx->term());
        Value* termValue1 = std::any_cast<llvm::Value *>(termValue);
        if(ctx->PLUS()) {
            return termValue1;
        } else if(ctx->MINUS()){
            return builder.CreateNeg(termValue1,"negtmp");
        }
    }
    return nullptr;
}

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
