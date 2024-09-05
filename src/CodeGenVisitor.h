#ifndef CODEGENVISITOR_H
#define CODEGENVISITOR_H

#include "PascalSBaseVisitor.h"
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>
#include "Scope.h"

using namespace llvm;

class CodeGenVisitor : public PascalSBaseVisitor {
public:
    LLVMContext context;
    IRBuilder<> builder;
    std::unique_ptr<Module> module;
    Scope* scope = new Scope();
    std::string filename;

    CodeGenVisitor();
    CodeGenVisitor(const std::string& filename);

    antlrcpp::Any visitProgramHead(PascalSParser::ProgramHeadContext* ctx) override;
    antlrcpp::Any visitProgramBody(PascalSParser::ProgramBodyContext* ctx) override;

    antlrcpp::Any visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) override;
    antlrcpp::Any visitConstVariable(PascalSParser::ConstVariableContext* ctx) override;

    antlrcpp::Any visitTypeDeclaration(PascalSParser::TypeDeclarationContext* ctx) override;

    antlrcpp::Any visitVarDeclarations(PascalSParser::VarDeclarationsContext* ctx) override;
    antlrcpp::Any visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) override;
    antlrcpp::Any visitIdentifierList(PascalSParser::IdentifierListContext* ctx) override;

    antlrcpp::Any visitType(PascalSParser::TypeContext* ctx) override;
    // antlrcpp::Any visitRecordBody(PascalSParser::RecordBodyContext* ctx) override;
    antlrcpp::Any visitPeriods(PascalSParser::PeriodsContext* ctx) override;
    antlrcpp::Any visitPeriod(PascalSParser::PeriodContext* ctx) override;
    antlrcpp::Any visitStandardType(PascalSParser::StandardTypeContext* ctx) override;

    // Expression
    antlrcpp::Any visitExpression(PascalSParser::ExpressionContext* ctx) override;
    antlrcpp::Any visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext* ctx) override;
    antlrcpp::Any visitFactor(PascalSParser::FactorContext* ctx) override;
    antlrcpp::Any visitTerm(PascalSParser::TermContext *ctx) override;
    antlrcpp::Any visitBoolean(PascalSParser::BooleanContext* ctx) override;
    antlrcpp::Any visitSimpleExpression(PascalSParser::SimpleExpressionContext* ctx) override;

    // Variable
    antlrcpp::Any visitVariable(PascalSParser::VariableContext* ctx) override;


    Value* getArrayElement(Value* array, std::vector<Value*> index);
    Value* getRecordElement(Value* record, std::string& field);

    // Declare other visit methods as needed
    antlrcpp::Any visitAssignmentStatement(PascalSParser::AssignmentStatementContext* ctx) override;
    antlrcpp::Any visitExpressionList(PascalSParser::ExpressionListContext* ctx) override;
    antlrcpp::Any visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext* ctx) override;
};

#endif // CODEGENVISITOR_H
