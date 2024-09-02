
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalSParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PascalSParser.
 */
class  PascalSListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(PascalSParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(PascalSParser::ProgramContext *ctx) = 0;

  virtual void enterBlock(PascalSParser::BlockContext *ctx) = 0;
  virtual void exitBlock(PascalSParser::BlockContext *ctx) = 0;

  virtual void enterVarDeclaration(PascalSParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(PascalSParser::VarDeclarationContext *ctx) = 0;

  virtual void enterVariable(PascalSParser::VariableContext *ctx) = 0;
  virtual void exitVariable(PascalSParser::VariableContext *ctx) = 0;

  virtual void enterStatementList(PascalSParser::StatementListContext *ctx) = 0;
  virtual void exitStatementList(PascalSParser::StatementListContext *ctx) = 0;

  virtual void enterStatement(PascalSParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PascalSParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(PascalSParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(PascalSParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(PascalSParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PascalSParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(PascalSParser::TermContext *ctx) = 0;
  virtual void exitTerm(PascalSParser::TermContext *ctx) = 0;

  virtual void enterFactor(PascalSParser::FactorContext *ctx) = 0;
  virtual void exitFactor(PascalSParser::FactorContext *ctx) = 0;


};

