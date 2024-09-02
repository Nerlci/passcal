
// Generated from src/PascalS.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  PascalSLexer : public antlr4::Lexer {
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

