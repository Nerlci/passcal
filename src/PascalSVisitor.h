
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalSParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PascalSParser.
 */
class  PascalSVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PascalSParser.
   */
    virtual std::any visitProgram(PascalSParser::ProgramContext *context) = 0;

    virtual std::any visitBlock(PascalSParser::BlockContext *context) = 0;

    virtual std::any visitVarDeclaration(PascalSParser::VarDeclarationContext *context) = 0;

    virtual std::any visitVariable(PascalSParser::VariableContext *context) = 0;

    virtual std::any visitStatementList(PascalSParser::StatementListContext *context) = 0;

    virtual std::any visitStatement(PascalSParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(PascalSParser::AssignmentContext *context) = 0;

    virtual std::any visitExpression(PascalSParser::ExpressionContext *context) = 0;

    virtual std::any visitTerm(PascalSParser::TermContext *context) = 0;

    virtual std::any visitFactor(PascalSParser::FactorContext *context) = 0;


};

