
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSParser : public antlr4::Parser {
public:
  enum {
    RELOP = 1, ADDOP = 2, MULOP = 3, AND = 4, OR = 5, NOT = 6, INTEGER = 7, 
    REAL = 8, BOOLEAN = 9, CHAR = 10, ARRAY = 11, BEGIN = 12, CASE = 13, 
    CONST = 14, DIV = 15, DO = 16, DOWNTO = 17, ELSE = 18, END = 19, FALSE = 20, 
    FOR = 21, FUNCTION = 22, IF = 23, MOD = 24, OF = 25, PROCEDURE = 26, 
    PROGRAM = 27, RECORD = 28, REPEAT = 29, THEN = 30, TO = 31, TRUE = 32, 
    TYPE = 33, UNTIL = 34, VAR = 35, WHILE = 36, ID = 37, LETTER = 38, NUM = 39, 
    EXPONENT = 40, FRAC = 41, DIGITS = 42, DIGIT = 43, EQUAL = 44, PLUS = 45, 
    MINUS = 46, MULT = 47, DIVIDE = 48, ASSIGNOP = 49, PERIODOP = 50, DOT = 51, 
    COMMA = 52, COLON = 53, SEMICOLON = 54, QUOTE = 55, LPAREN = 56, RPAREN = 57, 
    LBRACKET = 58, RBRACKET = 59, NEWLINE = 60, WS = 61
  };

  enum {
    RuleProgram = 0, RuleProgramHead = 1, RuleProgramBody = 2, RuleIdentifierList = 3, 
    RuleConstDeclarations = 4, RuleConstDeclaration = 5, RuleConstVariable = 6, 
    RuleTypeDeclarations = 7, RuleTypeDeclaration = 8, RuleType = 9, RuleStandardType = 10, 
    RuleRecordBody = 11, RulePeriods = 12, RulePeriod = 13, RuleVarDeclarations = 14, 
    RuleVarDeclaration = 15, RuleSubprogramDeclarations = 16, RuleSubprogramDeclaration = 17, 
    RuleSubprogramHead = 18, RuleFormalParameter = 19, RuleParameterLists = 20, 
    RuleParameterList = 21, RuleVarParameter = 22, RuleValueParameter = 23, 
    RuleCompoundStatement = 24, RuleStatementList = 25, RuleStatement = 26, 
    RuleVariable = 27, RuleIdVarparts = 28, RuleIdVarpart = 29, RuleElsePart = 30, 
    RuleCaseBody = 31, RuleBranchList = 32, RuleBranch = 33, RuleConstList = 34, 
    RuleUpdown = 35, RuleCallProcedureStatement = 36, RuleExpressionList = 37, 
    RuleExpression = 38, RuleSimpleExpression = 39, RuleTerm = 40, RuleBoolean = 41, 
    RuleFactor = 42, RuleUnsignConstVariable = 43
  };

  explicit PascalSParser(antlr4::TokenStream *input);

  PascalSParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PascalSParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class ProgramHeadContext;
  class ProgramBodyContext;
  class IdentifierListContext;
  class ConstDeclarationsContext;
  class ConstDeclarationContext;
  class ConstVariableContext;
  class TypeDeclarationsContext;
  class TypeDeclarationContext;
  class TypeContext;
  class StandardTypeContext;
  class RecordBodyContext;
  class PeriodsContext;
  class PeriodContext;
  class VarDeclarationsContext;
  class VarDeclarationContext;
  class SubprogramDeclarationsContext;
  class SubprogramDeclarationContext;
  class SubprogramHeadContext;
  class FormalParameterContext;
  class ParameterListsContext;
  class ParameterListContext;
  class VarParameterContext;
  class ValueParameterContext;
  class CompoundStatementContext;
  class StatementListContext;
  class StatementContext;
  class VariableContext;
  class IdVarpartsContext;
  class IdVarpartContext;
  class ElsePartContext;
  class CaseBodyContext;
  class BranchListContext;
  class BranchContext;
  class ConstListContext;
  class UpdownContext;
  class CallProcedureStatementContext;
  class ExpressionListContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class BooleanContext;
  class FactorContext;
  class UnsignConstVariableContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramHeadContext *programHead();
    ProgramBodyContext *programBody();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ProgramHeadContext : public antlr4::ParserRuleContext {
  public:
    ProgramHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramHeadContext* programHead();

  class  ProgramBodyContext : public antlr4::ParserRuleContext {
  public:
    ProgramBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclarationsContext *constDeclarations();
    TypeDeclarationsContext *typeDeclarations();
    VarDeclarationsContext *varDeclarations();
    SubprogramDeclarationsContext *subprogramDeclarations();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramBodyContext* programBody();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();
  IdentifierListContext* identifierList(int precedence);
  class  ConstDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstDeclarationContext *constDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclarationsContext* constDeclarations();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    ConstVariableContext *constVariable();
    ConstDeclarationContext *constDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclarationContext* constDeclaration();
  ConstDeclarationContext* constDeclaration(int precedence);
  class  ConstVariableContext : public antlr4::ParserRuleContext {
  public:
    ConstVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NUM();
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    antlr4::tree::TerminalNode *LETTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstVariableContext* constVariable();

  class  TypeDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    TypeDeclarationContext *typeDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclarationsContext* typeDeclarations();

  class  TypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    TypeContext *type();
    TypeDeclarationContext *typeDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclarationContext* typeDeclaration();
  TypeDeclarationContext* typeDeclaration(int precedence);
  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StandardTypeContext *standardType();
    antlr4::tree::TerminalNode *RECORD();
    RecordBodyContext *recordBody();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LBRACKET();
    PeriodsContext *periods();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *OF();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  StandardTypeContext : public antlr4::ParserRuleContext {
  public:
    StandardTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *CHAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandardTypeContext* standardType();

  class  RecordBodyContext : public antlr4::ParserRuleContext {
  public:
    RecordBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclarationContext *varDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordBodyContext* recordBody();

  class  PeriodsContext : public antlr4::ParserRuleContext {
  public:
    PeriodsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PeriodContext *period();
    PeriodsContext *periods();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodsContext* periods();
  PeriodsContext* periods(int precedence);
  class  PeriodContext : public antlr4::ParserRuleContext {
  public:
    PeriodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstVariableContext *> constVariable();
    ConstVariableContext* constVariable(size_t i);
    antlr4::tree::TerminalNode *PERIODOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodContext* period();

  class  VarDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    VarDeclarationContext *varDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationsContext* varDeclarations();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();
    VarDeclarationContext *varDeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationContext* varDeclaration();
  VarDeclarationContext* varDeclaration(int precedence);
  class  SubprogramDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    SubprogramDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubprogramDeclarationsContext *subprogramDeclarations();
    SubprogramDeclarationContext *subprogramDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubprogramDeclarationsContext* subprogramDeclarations();
  SubprogramDeclarationsContext* subprogramDeclarations(int precedence);
  class  SubprogramDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SubprogramDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubprogramHeadContext *subprogramHead();
    ProgramBodyContext *programBody();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubprogramDeclarationContext* subprogramDeclaration();

  class  SubprogramHeadContext : public antlr4::ParserRuleContext {
  public:
    SubprogramHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ID();
    FormalParameterContext *formalParameter();
    antlr4::tree::TerminalNode *COLON();
    StandardTypeContext *standardType();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *PROCEDURE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubprogramHeadContext* subprogramHead();

  class  FormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ParameterListsContext *parameterLists();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterContext* formalParameter();

  class  ParameterListsContext : public antlr4::ParserRuleContext {
  public:
    ParameterListsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();
    ParameterListsContext *parameterLists();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListsContext* parameterLists();
  ParameterListsContext* parameterLists(int precedence);
  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarParameterContext *varParameter();
    ValueParameterContext *valueParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  VarParameterContext : public antlr4::ParserRuleContext {
  public:
    VarParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    ValueParameterContext *valueParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarParameterContext* varParameter();

  class  ValueParameterContext : public antlr4::ParserRuleContext {
  public:
    ValueParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *COLON();
    StandardTypeContext *standardType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueParameterContext* valueParameter();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();
  StatementListContext* statementList(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileStatementContext : public StatementContext {
  public:
    WhileStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EmptyStatementContext : public StatementContext {
  public:
    EmptyStatementContext(StatementContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepeatStatementContext : public StatementContext {
  public:
    RepeatStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *REPEAT();
    StatementListContext *statementList();
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseStatementContext : public StatementContext {
  public:
    CaseStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OF();
    CaseBodyContext *caseBody();
    antlr4::tree::TerminalNode *END();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignmentStatementContext : public StatementContext {
  public:
    AssignmentStatementContext(StatementContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGNOP();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementCallProcedureStatementContext : public StatementContext {
  public:
    StatementCallProcedureStatementContext(StatementContext *ctx);

    CallProcedureStatementContext *callProcedureStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForStatementContext : public StatementContext {
  public:
    ForStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGNOP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    UpdownContext *updown();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStatementContext : public StatementContext {
  public:
    IfStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    StatementContext *statement();
    ElsePartContext *elsePart();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementCompoundStatementContext : public StatementContext {
  public:
    StatementCompoundStatementContext(StatementContext *ctx);

    CompoundStatementContext *compoundStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    IdVarpartsContext *idVarparts();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  IdVarpartsContext : public antlr4::ParserRuleContext {
  public:
    IdVarpartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdVarpartsContext *idVarparts();
    IdVarpartContext *idVarpart();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdVarpartsContext* idVarparts();
  IdVarpartsContext* idVarparts(int precedence);
  class  IdVarpartContext : public antlr4::ParserRuleContext {
  public:
    IdVarpartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdVarpartContext* idVarpart();

  class  ElsePartContext : public antlr4::ParserRuleContext {
  public:
    ElsePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElsePartContext* elsePart();

  class  CaseBodyContext : public antlr4::ParserRuleContext {
  public:
    CaseBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchListContext *branchList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseBodyContext* caseBody();

  class  BranchListContext : public antlr4::ParserRuleContext {
  public:
    BranchListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchContext *branch();
    BranchListContext *branchList();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BranchListContext* branchList();
  BranchListContext* branchList(int precedence);
  class  BranchContext : public antlr4::ParserRuleContext {
  public:
    BranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstListContext *constList();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BranchContext* branch();

  class  ConstListContext : public antlr4::ParserRuleContext {
  public:
    ConstListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstVariableContext *constVariable();
    ConstListContext *constList();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstListContext* constList();
  ConstListContext* constList(int precedence);
  class  UpdownContext : public antlr4::ParserRuleContext {
  public:
    UpdownContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdownContext* updown();

  class  CallProcedureStatementContext : public antlr4::ParserRuleContext {
  public:
    CallProcedureStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallProcedureStatementContext* callProcedureStatement();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();
  ExpressionListContext* expressionList(int precedence);
  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *RELOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *ADDOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();
  SimpleExpressionContext* simpleExpression(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    TermContext *term();
    antlr4::tree::TerminalNode *MULOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  BooleanContext : public antlr4::ParserRuleContext {
  public:
    BooleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanContext* boolean();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnsignConstVariableContext *unsignConstVariable();
    VariableContext *variable();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();
    BooleanContext *boolean();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  UnsignConstVariableContext : public antlr4::ParserRuleContext {
  public:
    UnsignConstVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUM();
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    antlr4::tree::TerminalNode *LETTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsignConstVariableContext* unsignConstVariable();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex);
  bool constDeclarationSempred(ConstDeclarationContext *_localctx, size_t predicateIndex);
  bool typeDeclarationSempred(TypeDeclarationContext *_localctx, size_t predicateIndex);
  bool periodsSempred(PeriodsContext *_localctx, size_t predicateIndex);
  bool varDeclarationSempred(VarDeclarationContext *_localctx, size_t predicateIndex);
  bool subprogramDeclarationsSempred(SubprogramDeclarationsContext *_localctx, size_t predicateIndex);
  bool parameterListsSempred(ParameterListsContext *_localctx, size_t predicateIndex);
  bool statementListSempred(StatementListContext *_localctx, size_t predicateIndex);
  bool idVarpartsSempred(IdVarpartsContext *_localctx, size_t predicateIndex);
  bool branchListSempred(BranchListContext *_localctx, size_t predicateIndex);
  bool constListSempred(ConstListContext *_localctx, size_t predicateIndex);
  bool expressionListSempred(ExpressionListContext *_localctx, size_t predicateIndex);
  bool simpleExpressionSempred(SimpleExpressionContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

