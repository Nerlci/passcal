#ifndef CODEGENVISITOR_H
#define CODEGENVISITOR_H

#include "PascalSBaseVisitor.h"
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>

using namespace llvm;

class CodeGenVisitor : public PascalSBaseVisitor {
public:
    LLVMContext context;
    IRBuilder<> builder;
    std::unique_ptr<Module> module;

    CodeGenVisitor();

    antlrcpp::Any visitProgramHead(PascalSParser::ProgramHeadContext* ctx) override;
//    antlrcpp::Any visitVariable(PascalSParser::VariableContext* ctx) override;
    antlrcpp::Any visitExpression(PascalSParser::ExpressionContext* ctx) override;
    antlrcpp::Any visitTerm(PascalSParser::TermContext* ctx) override;
    antlrcpp::Any visitFactor(PascalSParser::FactorContext* ctx) override;
    antlrcpp::Any visitAssignmentStatement(PascalSParser::AssignmentStatementContext* ctx) override;
//    antlrcpp::Any visitExpressionList(PascalSParser::ExpressionListContext* ctx) override;
//    antlrcpp::Any visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext* ctx) override;
    antlrcpp::Any visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) override;
    antlrcpp::Any visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx) override;
//    antlrcpp::Any visitIdentifierList(PascalSParser::IdentifierListContext* ctx) override;
//    antlrcpp::Any visitParameterList(PascalSParser::ParameterListContext* ctx) override;
};

#endif // CODEGENVISITOR_H
