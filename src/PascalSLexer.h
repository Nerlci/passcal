
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, AND = 6, OR = 7, NOT = 8, 
    INTEGER = 9, REAL = 10, BOOLEAN = 11, CHAR = 12, ARRAY = 13, BEGIN = 14, 
    CASE = 15, CONST = 16, DIV = 17, DO = 18, DOWNTO = 19, ELSE = 20, END = 21, 
    FALSE = 22, FOR = 23, FUNCTION = 24, IF = 25, MOD = 26, OF = 27, PROCEDURE = 28, 
    PROGRAM = 29, RECORD = 30, REPEAT = 31, THEN = 32, TO = 33, TRUE = 34, 
    TYPE = 35, UNTIL = 36, VAR = 37, WHILE = 38, CHARLITERAL = 39, ID = 40, 
    LETTER = 41, NUM = 42, EXPONENT = 43, FRAC = 44, DIGITS = 45, DIGIT = 46, 
    EQUAL = 47, PLUS = 48, MINUS = 49, MULT = 50, DIVIDE = 51, ASSIGNOP = 52, 
    PERIODOP = 53, DOT = 54, COMMA = 55, COLON = 56, SEMICOLON = 57, QUOTE = 58, 
    LPAREN = 59, RPAREN = 60, LBRACKET = 61, RBRACKET = 62, NEWLINE = 63, 
    WS = 64
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

