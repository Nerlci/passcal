
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, OR = 2, NOT = 3, INTEGER = 4, REAL = 5, BOOLEAN = 6, CHAR = 7, 
    ARRAY = 8, BEGIN = 9, CASE = 10, CONST = 11, DIV = 12, DO = 13, DOWNTO = 14, 
    ELSE = 15, END = 16, FALSE = 17, FOR = 18, FUNCTION = 19, IF = 20, MOD = 21, 
    OF = 22, PROCEDURE = 23, PROGRAM = 24, RECORD = 25, REPEAT = 26, THEN = 27, 
    TO = 28, TRUE = 29, TYPE = 30, UNTIL = 31, VAR = 32, WHILE = 33, CHARLITERAL = 34, 
    ID = 35, LETTER = 36, NUM = 37, EXPONENT = 38, FRAC = 39, DIGITS = 40, 
    DIGIT = 41, EQUAL = 42, NEQUAL = 43, LT = 44, LE = 45, GT = 46, GE = 47, 
    PLUS = 48, MINUS = 49, MULT = 50, DIVIDE = 51, ASSIGNOP = 52, PERIODOP = 53, 
    DOT = 54, COMMA = 55, COLON = 56, SEMICOLON = 57, QUOTE = 58, LPAREN = 59, 
    RPAREN = 60, LBRACKET = 61, RBRACKET = 62, NEWLINE = 63, WS = 64
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

