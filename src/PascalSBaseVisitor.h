
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

  virtual std::any visitProgram_head(PascalSParser::Program_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram_body(PascalSParser::Program_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier_list(PascalSParser::Identifier_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_declarations(PascalSParser::Const_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_declaration(PascalSParser::Const_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_variable(PascalSParser::Const_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_declarations(PascalSParser::Type_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_declaration(PascalSParser::Type_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(PascalSParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStandard_type(PascalSParser::Standard_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecord_body(PascalSParser::Record_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriods(PascalSParser::PeriodsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod(PascalSParser::PeriodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declarations(PascalSParser::Var_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declaration(PascalSParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogram_declarations(PascalSParser::Subprogram_declarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogram_declaration(PascalSParser::Subprogram_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogram_head(PascalSParser::Subprogram_headContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormal_parameter(PascalSParser::Formal_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_lists(PascalSParser::Parameter_listsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_list(PascalSParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_parameter(PascalSParser::Var_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_parameter(PascalSParser::Value_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_statement(PascalSParser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_list(PascalSParser::Statement_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(PascalSParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(PascalSParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_varparts(PascalSParser::Id_varpartsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_varpart(PascalSParser::Id_varpartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_part(PascalSParser::Else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_body(PascalSParser::Case_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranch_list(PascalSParser::Branch_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBranch(PascalSParser::BranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_list(PascalSParser::Const_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdown(PascalSParser::UpdownContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_procedure_statement(PascalSParser::Call_procedure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list(PascalSParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(PascalSParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_expression(PascalSParser::Simple_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(PascalSParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(PascalSParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsign_const_variable(PascalSParser::Unsign_const_variableContext *ctx) override {
    return visitChildren(ctx);
  }


};

