
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalSListener.h"


/**
 * This class provides an empty implementation of PascalSListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PascalSBaseListener : public PascalSListener {
public:

  virtual void enterProgram(PascalSParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(PascalSParser::ProgramContext * /*ctx*/) override { }

  virtual void enterBlock(PascalSParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(PascalSParser::BlockContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(PascalSParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(PascalSParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterVariable(PascalSParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(PascalSParser::VariableContext * /*ctx*/) override { }

  virtual void enterStatementList(PascalSParser::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(PascalSParser::StatementListContext * /*ctx*/) override { }

  virtual void enterStatement(PascalSParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PascalSParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(PascalSParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(PascalSParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(PascalSParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PascalSParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerm(PascalSParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(PascalSParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(PascalSParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(PascalSParser::FactorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

