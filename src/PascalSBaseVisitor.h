
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalSVisitor.h"


/**
 * This class provides an empty implementation of PascalSVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PascalSBaseVisitor : public PascalSVisitor {
public:

  virtual std::any visitProgram(PascalSParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramHead(PascalSParser::ProgramHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramBody(PascalSParser::ProgramBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(PascalSParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclarations(PascalSParser::ConstDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclaration(PascalSParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstVariable(PascalSParser::ConstVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDeclarations(PascalSParser::TypeDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDeclaration(PascalSParser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(PascalSParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStandardType(PascalSParser::StandardTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordBody(PascalSParser::RecordBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriods(PascalSParser::PeriodsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod(PascalSParser::PeriodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclarations(PascalSParser::VarDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(PascalSParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogramDeclarations(PascalSParser::SubprogramDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogramDeclaration(PascalSParser::SubprogramDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogramHead(PascalSParser::SubprogramHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameter(PascalSParser::FormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterLists(PascalSParser::ParameterListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(PascalSParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarParameter(PascalSParser::VarParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueParameter(PascalSParser::ValueParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(PascalSParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementList(PascalSParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(PascalSParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementCallProcedureStatement(PascalSParser::StatementCallProcedureStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementCompoundStatement(PascalSParser::StatementCompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(PascalSParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseStatement(PascalSParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(PascalSParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatStatement(PascalSParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(PascalSParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyStatement(PascalSParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(PascalSParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdVarparts(PascalSParser::IdVarpartsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdVarpart(PascalSParser::IdVarpartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElsePart(PascalSParser::ElsePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseBody(PascalSParser::CaseBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranchList(PascalSParser::BranchListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranch(PascalSParser::BranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstList(PascalSParser::ConstListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdown(PascalSParser::UpdownContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(PascalSParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(PascalSParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExpression(PascalSParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(PascalSParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(PascalSParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(PascalSParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalOpreator(PascalSParser::RelationalOpreatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOperator(PascalSParser::AddOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplyOperator(PascalSParser::MultiplyOperatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

