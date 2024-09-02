
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

    virtual std::any visitProgram_head(PascalSParser::Program_headContext *context) = 0;

    virtual std::any visitProgram_body(PascalSParser::Program_bodyContext *context) = 0;

    virtual std::any visitIdentifier_list(PascalSParser::Identifier_listContext *context) = 0;

    virtual std::any visitConst_declarations(PascalSParser::Const_declarationsContext *context) = 0;

    virtual std::any visitConst_declaration(PascalSParser::Const_declarationContext *context) = 0;

    virtual std::any visitConst_variable(PascalSParser::Const_variableContext *context) = 0;

    virtual std::any visitType_declarations(PascalSParser::Type_declarationsContext *context) = 0;

    virtual std::any visitType_declaration(PascalSParser::Type_declarationContext *context) = 0;

    virtual std::any visitType(PascalSParser::TypeContext *context) = 0;

    virtual std::any visitStandard_type(PascalSParser::Standard_typeContext *context) = 0;

    virtual std::any visitRecord_body(PascalSParser::Record_bodyContext *context) = 0;

    virtual std::any visitPeriods(PascalSParser::PeriodsContext *context) = 0;

    virtual std::any visitPeriod(PascalSParser::PeriodContext *context) = 0;

    virtual std::any visitVar_declarations(PascalSParser::Var_declarationsContext *context) = 0;

    virtual std::any visitVar_declaration(PascalSParser::Var_declarationContext *context) = 0;

    virtual std::any visitSubprogram_declarations(PascalSParser::Subprogram_declarationsContext *context) = 0;

    virtual std::any visitSubprogram_declaration(PascalSParser::Subprogram_declarationContext *context) = 0;

    virtual std::any visitSubprogram_head(PascalSParser::Subprogram_headContext *context) = 0;

    virtual std::any visitFormal_parameter(PascalSParser::Formal_parameterContext *context) = 0;

    virtual std::any visitParameter_lists(PascalSParser::Parameter_listsContext *context) = 0;

    virtual std::any visitParameter_list(PascalSParser::Parameter_listContext *context) = 0;

    virtual std::any visitVar_parameter(PascalSParser::Var_parameterContext *context) = 0;

    virtual std::any visitValue_parameter(PascalSParser::Value_parameterContext *context) = 0;

    virtual std::any visitCompound_statement(PascalSParser::Compound_statementContext *context) = 0;

    virtual std::any visitStatement_list(PascalSParser::Statement_listContext *context) = 0;

    virtual std::any visitStatement(PascalSParser::StatementContext *context) = 0;

    virtual std::any visitVariable(PascalSParser::VariableContext *context) = 0;

    virtual std::any visitId_varparts(PascalSParser::Id_varpartsContext *context) = 0;

    virtual std::any visitId_varpart(PascalSParser::Id_varpartContext *context) = 0;

    virtual std::any visitElse_part(PascalSParser::Else_partContext *context) = 0;

    virtual std::any visitCase_body(PascalSParser::Case_bodyContext *context) = 0;

    virtual std::any visitBranch_list(PascalSParser::Branch_listContext *context) = 0;

    virtual std::any visitBranch(PascalSParser::BranchContext *context) = 0;

    virtual std::any visitConst_list(PascalSParser::Const_listContext *context) = 0;

    virtual std::any visitUpdown(PascalSParser::UpdownContext *context) = 0;

    virtual std::any visitCall_procedure_statement(PascalSParser::Call_procedure_statementContext *context) = 0;

    virtual std::any visitExpression_list(PascalSParser::Expression_listContext *context) = 0;

    virtual std::any visitExpression(PascalSParser::ExpressionContext *context) = 0;

    virtual std::any visitSimple_expression(PascalSParser::Simple_expressionContext *context) = 0;

    virtual std::any visitTerm(PascalSParser::TermContext *context) = 0;

    virtual std::any visitFactor(PascalSParser::FactorContext *context) = 0;

    virtual std::any visitUnsign_const_variable(PascalSParser::Unsign_const_variableContext *context) = 0;


};

