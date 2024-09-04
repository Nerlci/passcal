
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

    virtual std::any visitProgramHead(PascalSParser::ProgramHeadContext *context) = 0;

    virtual std::any visitProgramBody(PascalSParser::ProgramBodyContext *context) = 0;

    virtual std::any visitIdentifierList(PascalSParser::IdentifierListContext *context) = 0;

    virtual std::any visitConstDeclarations(PascalSParser::ConstDeclarationsContext *context) = 0;

    virtual std::any visitConstDeclaration(PascalSParser::ConstDeclarationContext *context) = 0;

    virtual std::any visitConstVariable(PascalSParser::ConstVariableContext *context) = 0;

    virtual std::any visitTypeDeclarations(PascalSParser::TypeDeclarationsContext *context) = 0;

    virtual std::any visitTypeDeclaration(PascalSParser::TypeDeclarationContext *context) = 0;

    virtual std::any visitType(PascalSParser::TypeContext *context) = 0;

    virtual std::any visitStandardType(PascalSParser::StandardTypeContext *context) = 0;

    virtual std::any visitRecordBody(PascalSParser::RecordBodyContext *context) = 0;

    virtual std::any visitPeriods(PascalSParser::PeriodsContext *context) = 0;

    virtual std::any visitPeriod(PascalSParser::PeriodContext *context) = 0;

    virtual std::any visitVarDeclarations(PascalSParser::VarDeclarationsContext *context) = 0;

    virtual std::any visitVarDeclaration(PascalSParser::VarDeclarationContext *context) = 0;

    virtual std::any visitSubprogramDeclarations(PascalSParser::SubprogramDeclarationsContext *context) = 0;

    virtual std::any visitSubprogramDeclaration(PascalSParser::SubprogramDeclarationContext *context) = 0;

    virtual std::any visitSubprogramHead(PascalSParser::SubprogramHeadContext *context) = 0;

    virtual std::any visitFormalParameter(PascalSParser::FormalParameterContext *context) = 0;

    virtual std::any visitParameterLists(PascalSParser::ParameterListsContext *context) = 0;

    virtual std::any visitParameterList(PascalSParser::ParameterListContext *context) = 0;

    virtual std::any visitVarParameter(PascalSParser::VarParameterContext *context) = 0;

    virtual std::any visitValueParameter(PascalSParser::ValueParameterContext *context) = 0;

    virtual std::any visitCompoundStatement(PascalSParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementList(PascalSParser::StatementListContext *context) = 0;

    virtual std::any visitAssignmentStatement(PascalSParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitStatementCallProcedureStatement(PascalSParser::StatementCallProcedureStatementContext *context) = 0;

    virtual std::any visitStatementCompoundStatement(PascalSParser::StatementCompoundStatementContext *context) = 0;

    virtual std::any visitIfStatement(PascalSParser::IfStatementContext *context) = 0;

    virtual std::any visitCaseStatement(PascalSParser::CaseStatementContext *context) = 0;

    virtual std::any visitWhileStatement(PascalSParser::WhileStatementContext *context) = 0;

    virtual std::any visitRepeatStatement(PascalSParser::RepeatStatementContext *context) = 0;

    virtual std::any visitForStatement(PascalSParser::ForStatementContext *context) = 0;

    virtual std::any visitEmptyStatement(PascalSParser::EmptyStatementContext *context) = 0;

    virtual std::any visitVariable(PascalSParser::VariableContext *context) = 0;

    virtual std::any visitIdVarparts(PascalSParser::IdVarpartsContext *context) = 0;

    virtual std::any visitIdVarpart(PascalSParser::IdVarpartContext *context) = 0;

    virtual std::any visitElsePart(PascalSParser::ElsePartContext *context) = 0;

    virtual std::any visitCaseBody(PascalSParser::CaseBodyContext *context) = 0;

    virtual std::any visitBranchList(PascalSParser::BranchListContext *context) = 0;

    virtual std::any visitBranch(PascalSParser::BranchContext *context) = 0;

    virtual std::any visitConstList(PascalSParser::ConstListContext *context) = 0;

    virtual std::any visitUpdown(PascalSParser::UpdownContext *context) = 0;

    virtual std::any visitCallProcedureStatement(PascalSParser::CallProcedureStatementContext *context) = 0;

    virtual std::any visitExpressionList(PascalSParser::ExpressionListContext *context) = 0;

    virtual std::any visitExpression(PascalSParser::ExpressionContext *context) = 0;

    virtual std::any visitSimpleExpression(PascalSParser::SimpleExpressionContext *context) = 0;

    virtual std::any visitTerm(PascalSParser::TermContext *context) = 0;

    virtual std::any visitBoolean(PascalSParser::BooleanContext *context) = 0;

    virtual std::any visitFactor(PascalSParser::FactorContext *context) = 0;

    virtual std::any visitUnsignConstVariable(PascalSParser::UnsignConstVariableContext *context) = 0;

    virtual std::any visitRelationalOpreator(PascalSParser::RelationalOpreatorContext *context) = 0;

    virtual std::any visitAddOperator(PascalSParser::AddOperatorContext *context) = 0;

    virtual std::any visitMultiplyOperator(PascalSParser::MultiplyOperatorContext *context) = 0;


};

