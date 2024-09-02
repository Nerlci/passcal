
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, RELOP = 11, EQUAL = 12, ADDOP = 13, MULOP = 14, 
    PLUS = 15, MINUS = 16, MULT = 17, DIVIDE = 18, ASSIGNOP = 19, AND = 20, 
    OR = 21, NOT = 22, INTEGER = 23, REAL = 24, BOOLEAN = 25, CHAR = 26, 
    ARRAY = 27, BEGIN = 28, CASE = 29, CONST = 30, DIV = 31, DO = 32, DOWNTO = 33, 
    ELSE = 34, END = 35, FOR = 36, FUNCTION = 37, IF = 38, MOD = 39, OF = 40, 
    PROCEDURE = 41, PROGRAM = 42, RECORD = 43, REPEAT = 44, THEN = 45, TO = 46, 
    TYPE = 47, UNTIL = 48, VAR = 49, WHILE = 50, ID = 51, LETTER = 52, NUM = 53, 
    EXPONENT = 54, FRAC = 55, DIGITS = 56, DIGIT = 57, NEWLINE = 58, WS = 59
  };

  enum {
    RuleProgram = 0, RuleProgram_head = 1, RuleProgram_body = 2, RuleIdentifier_list = 3, 
    RuleConst_declarations = 4, RuleConst_declaration = 5, RuleConst_variable = 6, 
    RuleType_declarations = 7, RuleType_declaration = 8, RuleType = 9, RuleStandard_type = 10, 
    RuleRecord_body = 11, RulePeriods = 12, RulePeriod = 13, RuleVar_declarations = 14, 
    RuleVar_declaration = 15, RuleSubprogram_declarations = 16, RuleSubprogram_declaration = 17, 
    RuleSubprogram_head = 18, RuleFormal_parameter = 19, RuleParameter_lists = 20, 
    RuleParameter_list = 21, RuleVar_parameter = 22, RuleValue_parameter = 23, 
    RuleCompound_statement = 24, RuleStatement_list = 25, RuleStatement = 26, 
    RuleVariable = 27, RuleId_varparts = 28, RuleId_varpart = 29, RuleElse_part = 30, 
    RuleCase_body = 31, RuleBranch_list = 32, RuleBranch = 33, RuleConst_list = 34, 
    RuleUpdown = 35, RuleCall_procedure_statement = 36, RuleExpression_list = 37, 
    RuleExpression = 38, RuleSimple_expression = 39, RuleTerm = 40, RuleFactor = 41, 
    RuleUnsign_const_variable = 42
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
  class Program_headContext;
  class Program_bodyContext;
  class Identifier_listContext;
  class Const_declarationsContext;
  class Const_declarationContext;
  class Const_variableContext;
  class Type_declarationsContext;
  class Type_declarationContext;
  class TypeContext;
  class Standard_typeContext;
  class Record_bodyContext;
  class PeriodsContext;
  class PeriodContext;
  class Var_declarationsContext;
  class Var_declarationContext;
  class Subprogram_declarationsContext;
  class Subprogram_declarationContext;
  class Subprogram_headContext;
  class Formal_parameterContext;
  class Parameter_listsContext;
  class Parameter_listContext;
  class Var_parameterContext;
  class Value_parameterContext;
  class Compound_statementContext;
  class Statement_listContext;
  class StatementContext;
  class VariableContext;
  class Id_varpartsContext;
  class Id_varpartContext;
  class Else_partContext;
  class Case_bodyContext;
  class Branch_listContext;
  class BranchContext;
  class Const_listContext;
  class UpdownContext;
  class Call_procedure_statementContext;
  class Expression_listContext;
  class ExpressionContext;
  class Simple_expressionContext;
  class TermContext;
  class FactorContext;
  class Unsign_const_variableContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_headContext *program_head();
    Program_bodyContext *program_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Program_headContext : public antlr4::ParserRuleContext {
  public:
    Program_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *ID();
    Identifier_listContext *identifier_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_headContext* program_head();

  class  Program_bodyContext : public antlr4::ParserRuleContext {
  public:
    Program_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Const_declarationsContext *const_declarations();
    Type_declarationsContext *type_declarations();
    Var_declarationsContext *var_declarations();
    Subprogram_declarationsContext *subprogram_declarations();
    Compound_statementContext *compound_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_bodyContext* program_body();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Identifier_listContext *identifier_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_listContext* identifier_list();
  Identifier_listContext* identifier_list(int precedence);
  class  Const_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Const_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    Const_declarationContext *const_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_declarationsContext* const_declarations();

  class  Const_declarationContext : public antlr4::ParserRuleContext {
  public:
    Const_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    Const_variableContext *const_variable();
    Const_declarationContext *const_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_declarationContext* const_declaration();
  Const_declarationContext* const_declaration(int precedence);
  class  Const_variableContext : public antlr4::ParserRuleContext {
  public:
    Const_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *LETTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_variableContext* const_variable();

  class  Type_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    Type_declarationContext *type_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationsContext* type_declarations();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    TypeContext *type();
    Type_declarationContext *type_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();
  Type_declarationContext* type_declaration(int precedence);
  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Standard_typeContext *standard_type();
    antlr4::tree::TerminalNode *RECORD();
    Record_bodyContext *record_body();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ARRAY();
    PeriodsContext *periods();
    antlr4::tree::TerminalNode *OF();
    TypeContext *type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Standard_typeContext : public antlr4::ParserRuleContext {
  public:
    Standard_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *CHAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Standard_typeContext* standard_type();

  class  Record_bodyContext : public antlr4::ParserRuleContext {
  public:
    Record_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Record_bodyContext* record_body();

  class  PeriodsContext : public antlr4::ParserRuleContext {
  public:
    PeriodsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PeriodContext *period();
    PeriodsContext *periods();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodsContext* periods();
  PeriodsContext* periods(int precedence);
  class  PeriodContext : public antlr4::ParserRuleContext {
  public:
    PeriodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Const_variableContext *> const_variable();
    Const_variableContext* const_variable(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeriodContext* period();

  class  Var_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Var_declarationContext *var_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationsContext* var_declarations();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    TypeContext *type();
    Var_declarationContext *var_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();
  Var_declarationContext* var_declaration(int precedence);
  class  Subprogram_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_declarationsContext *subprogram_declarations();
    Subprogram_declarationContext *subprogram_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_declarationsContext* subprogram_declarations();
  Subprogram_declarationsContext* subprogram_declarations(int precedence);
  class  Subprogram_declarationContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subprogram_headContext *subprogram_head();
    Program_bodyContext *program_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_declarationContext* subprogram_declaration();

  class  Subprogram_headContext : public antlr4::ParserRuleContext {
  public:
    Subprogram_headContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ID();
    Formal_parameterContext *formal_parameter();
    Standard_typeContext *standard_type();
    antlr4::tree::TerminalNode *PROCEDURE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subprogram_headContext* subprogram_head();

  class  Formal_parameterContext : public antlr4::ParserRuleContext {
  public:
    Formal_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_listsContext *parameter_lists();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formal_parameterContext* formal_parameter();

  class  Parameter_listsContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_listContext *parameter_list();
    Parameter_listsContext *parameter_lists();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listsContext* parameter_lists();
  Parameter_listsContext* parameter_lists(int precedence);
  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_parameterContext *var_parameter();
    Value_parameterContext *value_parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Var_parameterContext : public antlr4::ParserRuleContext {
  public:
    Var_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Value_parameterContext *value_parameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_parameterContext* var_parameter();

  class  Value_parameterContext : public antlr4::ParserRuleContext {
  public:
    Value_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_listContext *identifier_list();
    Standard_typeContext *standard_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_parameterContext* value_parameter();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    Statement_listContext *statement_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_listContext* statement_list();
  Statement_listContext* statement_list(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGNOP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Call_procedure_statementContext *call_procedure_statement();
    Compound_statementContext *compound_statement();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *THEN();
    StatementContext *statement();
    Else_partContext *else_part();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OF();
    Case_bodyContext *case_body();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *REPEAT();
    Statement_listContext *statement_list();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    UpdownContext *updown();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Id_varpartsContext *id_varparts();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Id_varpartsContext : public antlr4::ParserRuleContext {
  public:
    Id_varpartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_varpartsContext *id_varparts();
    Id_varpartContext *id_varpart();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_varpartsContext* id_varparts();
  Id_varpartsContext* id_varparts(int precedence);
  class  Id_varpartContext : public antlr4::ParserRuleContext {
  public:
    Id_varpartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_varpartContext* id_varpart();

  class  Else_partContext : public antlr4::ParserRuleContext {
  public:
    Else_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_partContext* else_part();

  class  Case_bodyContext : public antlr4::ParserRuleContext {
  public:
    Case_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Branch_listContext *branch_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_bodyContext* case_body();

  class  Branch_listContext : public antlr4::ParserRuleContext {
  public:
    Branch_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BranchContext *branch();
    Branch_listContext *branch_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Branch_listContext* branch_list();
  Branch_listContext* branch_list(int precedence);
  class  BranchContext : public antlr4::ParserRuleContext {
  public:
    BranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Const_listContext *const_list();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BranchContext* branch();

  class  Const_listContext : public antlr4::ParserRuleContext {
  public:
    Const_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Const_variableContext *const_variable();
    Const_listContext *const_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_listContext* const_list();
  Const_listContext* const_list(int precedence);
  class  UpdownContext : public antlr4::ParserRuleContext {
  public:
    UpdownContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdownContext* updown();

  class  Call_procedure_statementContext : public antlr4::ParserRuleContext {
  public:
    Call_procedure_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Expression_listContext *expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_procedure_statementContext* call_procedure_statement();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Expression_listContext *expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();
  Expression_listContext* expression_list(int precedence);
  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *RELOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *ADDOP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_expressionContext* simple_expression();
  Simple_expressionContext* simple_expression(int precedence);
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
  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsign_const_variableContext *unsign_const_variable();
    VariableContext *variable();
    antlr4::tree::TerminalNode *ID();
    Expression_listContext *expression_list();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  Unsign_const_variableContext : public antlr4::ParserRuleContext {
  public:
    Unsign_const_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *LETTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsign_const_variableContext* unsign_const_variable();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool identifier_listSempred(Identifier_listContext *_localctx, size_t predicateIndex);
  bool const_declarationSempred(Const_declarationContext *_localctx, size_t predicateIndex);
  bool type_declarationSempred(Type_declarationContext *_localctx, size_t predicateIndex);
  bool periodsSempred(PeriodsContext *_localctx, size_t predicateIndex);
  bool var_declarationSempred(Var_declarationContext *_localctx, size_t predicateIndex);
  bool subprogram_declarationsSempred(Subprogram_declarationsContext *_localctx, size_t predicateIndex);
  bool parameter_listsSempred(Parameter_listsContext *_localctx, size_t predicateIndex);
  bool statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex);
  bool id_varpartsSempred(Id_varpartsContext *_localctx, size_t predicateIndex);
  bool branch_listSempred(Branch_listContext *_localctx, size_t predicateIndex);
  bool const_listSempred(Const_listContext *_localctx, size_t predicateIndex);
  bool expression_listSempred(Expression_listContext *_localctx, size_t predicateIndex);
  bool simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

