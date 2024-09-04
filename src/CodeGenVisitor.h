#ifndef CODEGENVISITOR_H
#define CODEGENVISITOR_H

#include "PascalSBaseVisitor.h"
#include "Scope.h"
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

    antlrcpp::Any visitExpression(PascalSParser::ExpressionContext* ctx) override;
    antlrcpp::Any visitIfStatement(PascalSParser::IfStatementContext* ctx) override;
    antlrcpp::Any visitForStatement(PascalSParser::ForStatementContext* ctx) override;
    antlrcpp::Any visitWhileStatement(PascalSParser::WhileStatementContext* ctx) override;
    antlrcpp::Any visitRepeatStatement(PascalSParser::RepeatStatementContext* ctx) override;
    antlrcpp::Any visitStatementList(PascalSParser::StatementListContext* ctx) override;
    antlrcpp::Any visitCaseStatement(PascalSParser::CaseStatementContext* ctx) override;
    antlrcpp::Any visitConstList(PascalSParser::ConstListContext* ctx) override;
    antlrcpp::Any visitBranch(PascalSParser::BranchContext* ctx) override;
    antlrcpp::Any visitBranchList(PascalSParser::BranchListContext* ctx) override;
    Value* getArrayElement(Value* array, std::vector<Value*> index);
    Value* getRecordElement(Value* record, std::string& field);

    // Declare other visit methods as needed
};

#endif // CODEGENVISITOR_H
