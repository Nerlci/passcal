
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSLexer : public antlr4::Lexer {
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

  explicit PascalSLexer(antlr4::CharStream *input);

  ~PascalSLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

