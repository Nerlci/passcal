
// Generated from src/PascalS.g4 by ANTLR 4.13.2


#include "PascalSVisitor.h"

#include "PascalSParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PascalSParserStaticData final {
  PascalSParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalSParserStaticData(const PascalSParserStaticData&) = delete;
  PascalSParserStaticData(PascalSParserStaticData&&) = delete;
  PascalSParserStaticData& operator=(const PascalSParserStaticData&) = delete;
  PascalSParserStaticData& operator=(PascalSParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascalsParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PascalSParserStaticData> pascalsParserStaticData = nullptr;

void pascalsParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascalsParserStaticData != nullptr) {
    return;
  }
#else
  assert(pascalsParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalSParserStaticData>(
    std::vector<std::string>{
      "program", "programHead", "programBody", "identifierList", "constDeclarations", 
      "constDeclaration", "constVariable", "typeDeclarations", "typeDeclaration", 
      "type", "standardType", "recordBody", "periods", "period", "varDeclarations", 
      "varDeclaration", "subprogramDeclarations", "subprogramDeclaration", 
      "subprogramHead", "formalParameter", "parameterLists", "parameterList", 
      "varParameter", "valueParameter", "compoundStatement", "statementList", 
      "statement", "variable", "idVarparts", "idVarpart", "elsePart", "caseBody", 
      "branchList", "branch", "constList", "updown", "callProcedureStatement", 
      "expressionList", "expression", "simpleExpression", "term", "boolean", 
      "factor", "unsignConstVariable"
    },
    std::vector<std::string>{
      "", "", "", "", "'and'", "'or'", "'not'", "'integer'", "'real'", "'boolean'", 
      "'char'", "'array'", "'begin'", "'case'", "'const'", "'div'", "'do'", 
      "'downto'", "'else'", "'end'", "'false'", "'for'", "'function'", "'if'", 
      "'mod'", "'of'", "'procedure'", "'program'", "'record'", "'repeat'", 
      "'then'", "'to'", "'true'", "'type'", "'until'", "'var'", "'while'", 
      "", "", "", "", "", "", "", "'='", "'+'", "'-'", "'*'", "'/'", "':='", 
      "'..'", "'.'", "','", "':'", "';'", "'''", "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "RELOP", "ADDOP", "MULOP", "AND", "OR", "NOT", "INTEGER", "REAL", 
      "BOOLEAN", "CHAR", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", 
      "DOWNTO", "ELSE", "END", "FALSE", "FOR", "FUNCTION", "IF", "MOD", 
      "OF", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "THEN", "TO", "TRUE", 
      "TYPE", "UNTIL", "VAR", "WHILE", "ID", "LETTER", "NUM", "EXPONENT", 
      "FRAC", "DIGITS", "DIGIT", "EQUAL", "PLUS", "MINUS", "MULT", "DIVIDE", 
      "ASSIGNOP", "PERIODOP", "DOT", "COMMA", "COLON", "SEMICOLON", "QUOTE", 
      "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,61,478,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,112,8,3,10,3,12,3,115,9,3,1,4,
  	1,4,1,4,1,4,1,4,3,4,122,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,
  	5,134,8,5,10,5,12,5,137,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,3,6,152,8,6,1,7,1,7,1,7,1,7,1,7,3,7,159,8,7,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,5,8,171,8,8,10,8,12,8,174,9,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,188,8,9,1,10,1,10,1,11,1,11,3,11,
  	194,8,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,202,8,12,10,12,12,12,205,
  	9,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,3,14,216,8,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,229,8,15,10,15,
  	12,15,232,9,15,1,16,1,16,1,16,5,16,237,8,16,10,16,12,16,240,9,16,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,3,18,258,8,18,1,19,1,19,1,19,1,19,1,19,3,19,265,8,19,1,20,1,20,1,
  	20,1,20,1,20,1,20,5,20,273,8,20,10,20,12,20,276,9,20,1,21,1,21,3,21,280,
  	8,21,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,
  	1,25,1,25,1,25,1,25,5,25,299,8,25,10,25,12,25,302,9,25,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,342,8,26,1,27,1,27,1,27,1,28,
  	1,28,1,28,5,28,350,8,28,10,28,12,28,353,9,28,1,29,1,29,1,29,1,29,1,29,
  	1,29,3,29,361,8,29,1,30,1,30,1,30,3,30,366,8,30,1,31,1,31,3,31,370,8,
  	31,1,32,1,32,1,32,1,32,1,32,1,32,5,32,378,8,32,10,32,12,32,381,9,32,1,
  	33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,1,34,5,34,393,8,34,10,34,12,
  	34,396,9,34,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,3,36,406,8,36,1,37,
  	1,37,1,37,1,37,1,37,1,37,5,37,414,8,37,10,37,12,37,417,9,37,1,38,1,38,
  	1,38,1,38,1,38,3,38,424,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,432,8,
  	39,1,39,1,39,1,39,5,39,437,8,39,10,39,12,39,440,9,39,1,40,1,40,1,40,1,
  	40,1,40,1,40,5,40,448,8,40,10,40,12,40,451,9,40,1,41,1,41,1,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,469,8,
  	42,1,43,1,43,1,43,1,43,1,43,3,43,476,8,43,1,43,0,14,6,10,16,24,30,32,
  	40,50,56,64,68,74,78,80,44,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,
  	78,80,82,84,86,0,3,1,0,7,10,2,0,17,17,31,31,2,0,20,20,32,32,484,0,88,
  	1,0,0,0,2,92,1,0,0,0,4,99,1,0,0,0,6,105,1,0,0,0,8,121,1,0,0,0,10,123,
  	1,0,0,0,12,151,1,0,0,0,14,158,1,0,0,0,16,160,1,0,0,0,18,187,1,0,0,0,20,
  	189,1,0,0,0,22,193,1,0,0,0,24,195,1,0,0,0,26,206,1,0,0,0,28,215,1,0,0,
  	0,30,217,1,0,0,0,32,233,1,0,0,0,34,241,1,0,0,0,36,257,1,0,0,0,38,264,
  	1,0,0,0,40,266,1,0,0,0,42,279,1,0,0,0,44,281,1,0,0,0,46,284,1,0,0,0,48,
  	288,1,0,0,0,50,292,1,0,0,0,52,341,1,0,0,0,54,343,1,0,0,0,56,346,1,0,0,
  	0,58,360,1,0,0,0,60,365,1,0,0,0,62,369,1,0,0,0,64,371,1,0,0,0,66,382,
  	1,0,0,0,68,386,1,0,0,0,70,397,1,0,0,0,72,405,1,0,0,0,74,407,1,0,0,0,76,
  	423,1,0,0,0,78,431,1,0,0,0,80,441,1,0,0,0,82,452,1,0,0,0,84,468,1,0,0,
  	0,86,475,1,0,0,0,88,89,3,2,1,0,89,90,3,4,2,0,90,91,5,51,0,0,91,1,1,0,
  	0,0,92,93,5,27,0,0,93,94,5,37,0,0,94,95,5,56,0,0,95,96,3,6,3,0,96,97,
  	5,57,0,0,97,98,5,54,0,0,98,3,1,0,0,0,99,100,3,8,4,0,100,101,3,14,7,0,
  	101,102,3,28,14,0,102,103,3,32,16,0,103,104,3,48,24,0,104,5,1,0,0,0,105,
  	106,6,3,-1,0,106,107,5,37,0,0,107,113,1,0,0,0,108,109,10,2,0,0,109,110,
  	5,52,0,0,110,112,5,37,0,0,111,108,1,0,0,0,112,115,1,0,0,0,113,111,1,0,
  	0,0,113,114,1,0,0,0,114,7,1,0,0,0,115,113,1,0,0,0,116,117,5,14,0,0,117,
  	118,3,10,5,0,118,119,5,54,0,0,119,122,1,0,0,0,120,122,1,0,0,0,121,116,
  	1,0,0,0,121,120,1,0,0,0,122,9,1,0,0,0,123,124,6,5,-1,0,124,125,5,37,0,
  	0,125,126,5,44,0,0,126,127,3,12,6,0,127,135,1,0,0,0,128,129,10,2,0,0,
  	129,130,5,54,0,0,130,131,5,37,0,0,131,132,5,44,0,0,132,134,3,12,6,0,133,
  	128,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,11,1,
  	0,0,0,137,135,1,0,0,0,138,139,5,45,0,0,139,152,5,37,0,0,140,141,5,46,
  	0,0,141,152,5,37,0,0,142,152,5,37,0,0,143,144,5,45,0,0,144,152,5,39,0,
  	0,145,146,5,46,0,0,146,152,5,39,0,0,147,152,5,39,0,0,148,149,5,55,0,0,
  	149,150,5,38,0,0,150,152,5,55,0,0,151,138,1,0,0,0,151,140,1,0,0,0,151,
  	142,1,0,0,0,151,143,1,0,0,0,151,145,1,0,0,0,151,147,1,0,0,0,151,148,1,
  	0,0,0,152,13,1,0,0,0,153,154,5,33,0,0,154,155,3,16,8,0,155,156,5,54,0,
  	0,156,159,1,0,0,0,157,159,1,0,0,0,158,153,1,0,0,0,158,157,1,0,0,0,159,
  	15,1,0,0,0,160,161,6,8,-1,0,161,162,5,37,0,0,162,163,5,44,0,0,163,164,
  	3,18,9,0,164,172,1,0,0,0,165,166,10,2,0,0,166,167,5,54,0,0,167,168,5,
  	37,0,0,168,169,5,44,0,0,169,171,3,18,9,0,170,165,1,0,0,0,171,174,1,0,
  	0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,17,1,0,0,0,174,172,1,0,0,0,175,
  	188,3,20,10,0,176,177,5,28,0,0,177,178,3,22,11,0,178,179,5,19,0,0,179,
  	188,1,0,0,0,180,181,5,11,0,0,181,182,5,58,0,0,182,183,3,24,12,0,183,184,
  	5,59,0,0,184,185,5,25,0,0,185,186,3,18,9,0,186,188,1,0,0,0,187,175,1,
  	0,0,0,187,176,1,0,0,0,187,180,1,0,0,0,188,19,1,0,0,0,189,190,7,0,0,0,
  	190,21,1,0,0,0,191,194,3,30,15,0,192,194,1,0,0,0,193,191,1,0,0,0,193,
  	192,1,0,0,0,194,23,1,0,0,0,195,196,6,12,-1,0,196,197,3,26,13,0,197,203,
  	1,0,0,0,198,199,10,2,0,0,199,200,5,52,0,0,200,202,3,26,13,0,201,198,1,
  	0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,25,1,0,0,0,
  	205,203,1,0,0,0,206,207,3,12,6,0,207,208,5,50,0,0,208,209,3,12,6,0,209,
  	27,1,0,0,0,210,211,5,35,0,0,211,212,3,30,15,0,212,213,5,54,0,0,213,216,
  	1,0,0,0,214,216,1,0,0,0,215,210,1,0,0,0,215,214,1,0,0,0,216,29,1,0,0,
  	0,217,218,6,15,-1,0,218,219,3,6,3,0,219,220,5,53,0,0,220,221,3,18,9,0,
  	221,230,1,0,0,0,222,223,10,2,0,0,223,224,5,54,0,0,224,225,3,6,3,0,225,
  	226,5,53,0,0,226,227,3,18,9,0,227,229,1,0,0,0,228,222,1,0,0,0,229,232,
  	1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,0,231,31,1,0,0,0,232,230,1,0,0,
  	0,233,238,6,16,-1,0,234,235,10,2,0,0,235,237,3,34,17,0,236,234,1,0,0,
  	0,237,240,1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,239,33,1,0,0,0,240,
  	238,1,0,0,0,241,242,3,36,18,0,242,243,3,4,2,0,243,244,5,54,0,0,244,35,
  	1,0,0,0,245,246,5,22,0,0,246,247,5,37,0,0,247,248,3,38,19,0,248,249,5,
  	53,0,0,249,250,3,20,10,0,250,251,5,54,0,0,251,258,1,0,0,0,252,253,5,26,
  	0,0,253,254,5,37,0,0,254,255,3,38,19,0,255,256,5,54,0,0,256,258,1,0,0,
  	0,257,245,1,0,0,0,257,252,1,0,0,0,258,37,1,0,0,0,259,260,5,56,0,0,260,
  	261,3,40,20,0,261,262,5,57,0,0,262,265,1,0,0,0,263,265,1,0,0,0,264,259,
  	1,0,0,0,264,263,1,0,0,0,265,39,1,0,0,0,266,267,6,20,-1,0,267,268,3,42,
  	21,0,268,274,1,0,0,0,269,270,10,2,0,0,270,271,5,54,0,0,271,273,3,42,21,
  	0,272,269,1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,275,1,0,0,0,275,
  	41,1,0,0,0,276,274,1,0,0,0,277,280,3,44,22,0,278,280,3,46,23,0,279,277,
  	1,0,0,0,279,278,1,0,0,0,280,43,1,0,0,0,281,282,5,35,0,0,282,283,3,46,
  	23,0,283,45,1,0,0,0,284,285,3,6,3,0,285,286,5,53,0,0,286,287,3,20,10,
  	0,287,47,1,0,0,0,288,289,5,12,0,0,289,290,3,50,25,0,290,291,5,19,0,0,
  	291,49,1,0,0,0,292,293,6,25,-1,0,293,294,3,52,26,0,294,300,1,0,0,0,295,
  	296,10,2,0,0,296,297,5,54,0,0,297,299,3,52,26,0,298,295,1,0,0,0,299,302,
  	1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,51,1,0,0,0,302,300,1,0,0,
  	0,303,304,3,54,27,0,304,305,5,49,0,0,305,306,3,76,38,0,306,342,1,0,0,
  	0,307,342,3,72,36,0,308,342,3,48,24,0,309,310,5,23,0,0,310,311,3,76,38,
  	0,311,312,5,30,0,0,312,313,3,52,26,0,313,314,3,60,30,0,314,342,1,0,0,
  	0,315,316,5,13,0,0,316,317,3,76,38,0,317,318,5,25,0,0,318,319,3,62,31,
  	0,319,320,5,19,0,0,320,342,1,0,0,0,321,322,5,36,0,0,322,323,3,76,38,0,
  	323,324,5,16,0,0,324,325,3,52,26,0,325,342,1,0,0,0,326,327,5,29,0,0,327,
  	328,3,50,25,0,328,329,5,34,0,0,329,330,3,76,38,0,330,342,1,0,0,0,331,
  	332,5,21,0,0,332,333,5,37,0,0,333,334,5,49,0,0,334,335,3,76,38,0,335,
  	336,3,70,35,0,336,337,3,76,38,0,337,338,5,16,0,0,338,339,3,52,26,0,339,
  	342,1,0,0,0,340,342,1,0,0,0,341,303,1,0,0,0,341,307,1,0,0,0,341,308,1,
  	0,0,0,341,309,1,0,0,0,341,315,1,0,0,0,341,321,1,0,0,0,341,326,1,0,0,0,
  	341,331,1,0,0,0,341,340,1,0,0,0,342,53,1,0,0,0,343,344,5,37,0,0,344,345,
  	3,56,28,0,345,55,1,0,0,0,346,351,6,28,-1,0,347,348,10,2,0,0,348,350,3,
  	58,29,0,349,347,1,0,0,0,350,353,1,0,0,0,351,349,1,0,0,0,351,352,1,0,0,
  	0,352,57,1,0,0,0,353,351,1,0,0,0,354,355,5,58,0,0,355,356,3,74,37,0,356,
  	357,5,59,0,0,357,361,1,0,0,0,358,359,5,51,0,0,359,361,5,37,0,0,360,354,
  	1,0,0,0,360,358,1,0,0,0,361,59,1,0,0,0,362,363,5,18,0,0,363,366,3,52,
  	26,0,364,366,1,0,0,0,365,362,1,0,0,0,365,364,1,0,0,0,366,61,1,0,0,0,367,
  	370,3,64,32,0,368,370,1,0,0,0,369,367,1,0,0,0,369,368,1,0,0,0,370,63,
  	1,0,0,0,371,372,6,32,-1,0,372,373,3,66,33,0,373,379,1,0,0,0,374,375,10,
  	2,0,0,375,376,5,54,0,0,376,378,3,66,33,0,377,374,1,0,0,0,378,381,1,0,
  	0,0,379,377,1,0,0,0,379,380,1,0,0,0,380,65,1,0,0,0,381,379,1,0,0,0,382,
  	383,3,68,34,0,383,384,5,53,0,0,384,385,3,52,26,0,385,67,1,0,0,0,386,387,
  	6,34,-1,0,387,388,3,12,6,0,388,394,1,0,0,0,389,390,10,2,0,0,390,391,5,
  	52,0,0,391,393,3,12,6,0,392,389,1,0,0,0,393,396,1,0,0,0,394,392,1,0,0,
  	0,394,395,1,0,0,0,395,69,1,0,0,0,396,394,1,0,0,0,397,398,7,1,0,0,398,
  	71,1,0,0,0,399,406,5,37,0,0,400,401,5,37,0,0,401,402,5,56,0,0,402,403,
  	3,74,37,0,403,404,5,57,0,0,404,406,1,0,0,0,405,399,1,0,0,0,405,400,1,
  	0,0,0,406,73,1,0,0,0,407,408,6,37,-1,0,408,409,3,76,38,0,409,415,1,0,
  	0,0,410,411,10,2,0,0,411,412,5,52,0,0,412,414,3,76,38,0,413,410,1,0,0,
  	0,414,417,1,0,0,0,415,413,1,0,0,0,415,416,1,0,0,0,416,75,1,0,0,0,417,
  	415,1,0,0,0,418,419,3,78,39,0,419,420,5,1,0,0,420,421,3,78,39,0,421,424,
  	1,0,0,0,422,424,3,78,39,0,423,418,1,0,0,0,423,422,1,0,0,0,424,77,1,0,
  	0,0,425,426,6,39,-1,0,426,432,3,80,40,0,427,428,5,45,0,0,428,432,3,80,
  	40,0,429,430,5,46,0,0,430,432,3,80,40,0,431,425,1,0,0,0,431,427,1,0,0,
  	0,431,429,1,0,0,0,432,438,1,0,0,0,433,434,10,1,0,0,434,435,5,2,0,0,435,
  	437,3,80,40,0,436,433,1,0,0,0,437,440,1,0,0,0,438,436,1,0,0,0,438,439,
  	1,0,0,0,439,79,1,0,0,0,440,438,1,0,0,0,441,442,6,40,-1,0,442,443,3,84,
  	42,0,443,449,1,0,0,0,444,445,10,2,0,0,445,446,5,3,0,0,446,448,3,84,42,
  	0,447,444,1,0,0,0,448,451,1,0,0,0,449,447,1,0,0,0,449,450,1,0,0,0,450,
  	81,1,0,0,0,451,449,1,0,0,0,452,453,7,2,0,0,453,83,1,0,0,0,454,469,3,86,
  	43,0,455,469,3,54,27,0,456,457,5,37,0,0,457,458,5,56,0,0,458,459,3,74,
  	37,0,459,460,5,57,0,0,460,469,1,0,0,0,461,462,5,56,0,0,462,463,3,76,38,
  	0,463,464,5,57,0,0,464,469,1,0,0,0,465,466,5,6,0,0,466,469,3,84,42,0,
  	467,469,3,82,41,0,468,454,1,0,0,0,468,455,1,0,0,0,468,456,1,0,0,0,468,
  	461,1,0,0,0,468,465,1,0,0,0,468,467,1,0,0,0,469,85,1,0,0,0,470,476,5,
  	37,0,0,471,476,5,39,0,0,472,473,5,55,0,0,473,474,5,38,0,0,474,476,5,55,
  	0,0,475,470,1,0,0,0,475,471,1,0,0,0,475,472,1,0,0,0,476,87,1,0,0,0,32,
  	113,121,135,151,158,172,187,193,203,215,230,238,257,264,274,279,300,341,
  	351,360,365,369,379,394,405,415,423,431,438,449,468,475
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascalsParserStaticData = std::move(staticData);
}

}

PascalSParser::PascalSParser(TokenStream *input) : PascalSParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PascalSParser::PascalSParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PascalSParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pascalsParserStaticData->atn, pascalsParserStaticData->decisionToDFA, pascalsParserStaticData->sharedContextCache, options);
}

PascalSParser::~PascalSParser() {
  delete _interpreter;
}

const atn::ATN& PascalSParser::getATN() const {
  return *pascalsParserStaticData->atn;
}

std::string PascalSParser::getGrammarFileName() const {
  return "PascalS.g4";
}

const std::vector<std::string>& PascalSParser::getRuleNames() const {
  return pascalsParserStaticData->ruleNames;
}

const dfa::Vocabulary& PascalSParser::getVocabulary() const {
  return pascalsParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PascalSParser::getSerializedATN() const {
  return pascalsParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalSParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ProgramHeadContext* PascalSParser::ProgramContext::programHead() {
  return getRuleContext<PascalSParser::ProgramHeadContext>(0);
}

PascalSParser::ProgramBodyContext* PascalSParser::ProgramContext::programBody() {
  return getRuleContext<PascalSParser::ProgramBodyContext>(0);
}

tree::TerminalNode* PascalSParser::ProgramContext::DOT() {
  return getToken(PascalSParser::DOT, 0);
}


size_t PascalSParser::ProgramContext::getRuleIndex() const {
  return PascalSParser::RuleProgram;
}


std::any PascalSParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProgramContext* PascalSParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalSParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    programHead();
    setState(89);
    programBody();
    setState(90);
    match(PascalSParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeadContext ------------------------------------------------------------------

PascalSParser::ProgramHeadContext::ProgramHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ProgramHeadContext::PROGRAM() {
  return getToken(PascalSParser::PROGRAM, 0);
}

tree::TerminalNode* PascalSParser::ProgramHeadContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::ProgramHeadContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::IdentifierListContext* PascalSParser::ProgramHeadContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::ProgramHeadContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}

tree::TerminalNode* PascalSParser::ProgramHeadContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::ProgramHeadContext::getRuleIndex() const {
  return PascalSParser::RuleProgramHead;
}


std::any PascalSParser::ProgramHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitProgramHead(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProgramHeadContext* PascalSParser::programHead() {
  ProgramHeadContext *_localctx = _tracker.createInstance<ProgramHeadContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalSParser::RuleProgramHead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(PascalSParser::PROGRAM);
    setState(93);
    match(PascalSParser::ID);
    setState(94);
    match(PascalSParser::LPAREN);
    setState(95);
    identifierList(0);
    setState(96);
    match(PascalSParser::RPAREN);
    setState(97);
    match(PascalSParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramBodyContext ------------------------------------------------------------------

PascalSParser::ProgramBodyContext::ProgramBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ConstDeclarationsContext* PascalSParser::ProgramBodyContext::constDeclarations() {
  return getRuleContext<PascalSParser::ConstDeclarationsContext>(0);
}

PascalSParser::TypeDeclarationsContext* PascalSParser::ProgramBodyContext::typeDeclarations() {
  return getRuleContext<PascalSParser::TypeDeclarationsContext>(0);
}

PascalSParser::VarDeclarationsContext* PascalSParser::ProgramBodyContext::varDeclarations() {
  return getRuleContext<PascalSParser::VarDeclarationsContext>(0);
}

PascalSParser::SubprogramDeclarationsContext* PascalSParser::ProgramBodyContext::subprogramDeclarations() {
  return getRuleContext<PascalSParser::SubprogramDeclarationsContext>(0);
}

PascalSParser::CompoundStatementContext* PascalSParser::ProgramBodyContext::compoundStatement() {
  return getRuleContext<PascalSParser::CompoundStatementContext>(0);
}


size_t PascalSParser::ProgramBodyContext::getRuleIndex() const {
  return PascalSParser::RuleProgramBody;
}


std::any PascalSParser::ProgramBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitProgramBody(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ProgramBodyContext* PascalSParser::programBody() {
  ProgramBodyContext *_localctx = _tracker.createInstance<ProgramBodyContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalSParser::RuleProgramBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    constDeclarations();
    setState(100);
    typeDeclarations();
    setState(101);
    varDeclarations();
    setState(102);
    subprogramDeclarations(0);
    setState(103);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

PascalSParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::IdentifierListContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::IdentifierListContext* PascalSParser::IdentifierListContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::IdentifierListContext::COMMA() {
  return getToken(PascalSParser::COMMA, 0);
}


size_t PascalSParser::IdentifierListContext::getRuleIndex() const {
  return PascalSParser::RuleIdentifierList;
}


std::any PascalSParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::IdentifierListContext* PascalSParser::identifierList() {
   return identifierList(0);
}

PascalSParser::IdentifierListContext* PascalSParser::identifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, parentState);
  PascalSParser::IdentifierListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, PascalSParser::RuleIdentifierList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(PascalSParser::ID);
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(108);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(109);
        match(PascalSParser::COMMA);
        setState(110);
        match(PascalSParser::ID); 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstDeclarationsContext ------------------------------------------------------------------

PascalSParser::ConstDeclarationsContext::ConstDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ConstDeclarationsContext::CONST() {
  return getToken(PascalSParser::CONST, 0);
}

PascalSParser::ConstDeclarationContext* PascalSParser::ConstDeclarationsContext::constDeclaration() {
  return getRuleContext<PascalSParser::ConstDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::ConstDeclarationsContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::ConstDeclarationsContext::getRuleIndex() const {
  return PascalSParser::RuleConstDeclarations;
}


std::any PascalSParser::ConstDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConstDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ConstDeclarationsContext* PascalSParser::constDeclarations() {
  ConstDeclarationsContext *_localctx = _tracker.createInstance<ConstDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalSParser::RuleConstDeclarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(PascalSParser::CONST);
      setState(117);
      constDeclaration(0);
      setState(118);
      match(PascalSParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

PascalSParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ConstDeclarationContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::ConstDeclarationContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::ConstVariableContext* PascalSParser::ConstDeclarationContext::constVariable() {
  return getRuleContext<PascalSParser::ConstVariableContext>(0);
}

PascalSParser::ConstDeclarationContext* PascalSParser::ConstDeclarationContext::constDeclaration() {
  return getRuleContext<PascalSParser::ConstDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::ConstDeclarationContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::ConstDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleConstDeclaration;
}


std::any PascalSParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::ConstDeclarationContext* PascalSParser::constDeclaration() {
   return constDeclaration(0);
}

PascalSParser::ConstDeclarationContext* PascalSParser::constDeclaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, parentState);
  PascalSParser::ConstDeclarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, PascalSParser::RuleConstDeclaration, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(124);
    match(PascalSParser::ID);
    setState(125);
    match(PascalSParser::EQUAL);
    setState(126);
    constVariable();
    _ctx->stop = _input->LT(-1);
    setState(135);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConstDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConstDeclaration);
        setState(128);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(129);
        match(PascalSParser::SEMICOLON);
        setState(130);
        match(PascalSParser::ID);
        setState(131);
        match(PascalSParser::EQUAL);
        setState(132);
        constVariable(); 
      }
      setState(137);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstVariableContext ------------------------------------------------------------------

PascalSParser::ConstVariableContext::ConstVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ConstVariableContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::ConstVariableContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::ConstVariableContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

tree::TerminalNode* PascalSParser::ConstVariableContext::NUM() {
  return getToken(PascalSParser::NUM, 0);
}

std::vector<tree::TerminalNode *> PascalSParser::ConstVariableContext::QUOTE() {
  return getTokens(PascalSParser::QUOTE);
}

tree::TerminalNode* PascalSParser::ConstVariableContext::QUOTE(size_t i) {
  return getToken(PascalSParser::QUOTE, i);
}

tree::TerminalNode* PascalSParser::ConstVariableContext::LETTER() {
  return getToken(PascalSParser::LETTER, 0);
}


size_t PascalSParser::ConstVariableContext::getRuleIndex() const {
  return PascalSParser::RuleConstVariable;
}


std::any PascalSParser::ConstVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConstVariable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ConstVariableContext* PascalSParser::constVariable() {
  ConstVariableContext *_localctx = _tracker.createInstance<ConstVariableContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalSParser::RuleConstVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      match(PascalSParser::PLUS);
      setState(139);
      match(PascalSParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(140);
      match(PascalSParser::MINUS);
      setState(141);
      match(PascalSParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(142);
      match(PascalSParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(143);
      match(PascalSParser::PLUS);
      setState(144);
      match(PascalSParser::NUM);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(145);
      match(PascalSParser::MINUS);
      setState(146);
      match(PascalSParser::NUM);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(147);
      match(PascalSParser::NUM);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(148);
      match(PascalSParser::QUOTE);
      setState(149);
      match(PascalSParser::LETTER);
      setState(150);
      match(PascalSParser::QUOTE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationsContext ------------------------------------------------------------------

PascalSParser::TypeDeclarationsContext::TypeDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::TypeDeclarationsContext::TYPE() {
  return getToken(PascalSParser::TYPE, 0);
}

PascalSParser::TypeDeclarationContext* PascalSParser::TypeDeclarationsContext::typeDeclaration() {
  return getRuleContext<PascalSParser::TypeDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::TypeDeclarationsContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::TypeDeclarationsContext::getRuleIndex() const {
  return PascalSParser::RuleTypeDeclarations;
}


std::any PascalSParser::TypeDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitTypeDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::TypeDeclarationsContext* PascalSParser::typeDeclarations() {
  TypeDeclarationsContext *_localctx = _tracker.createInstance<TypeDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalSParser::RuleTypeDeclarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      match(PascalSParser::TYPE);
      setState(154);
      typeDeclaration(0);
      setState(155);
      match(PascalSParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

PascalSParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::TypeDeclarationContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::TypeDeclarationContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::TypeContext* PascalSParser::TypeDeclarationContext::type() {
  return getRuleContext<PascalSParser::TypeContext>(0);
}

PascalSParser::TypeDeclarationContext* PascalSParser::TypeDeclarationContext::typeDeclaration() {
  return getRuleContext<PascalSParser::TypeDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::TypeDeclarationContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::TypeDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleTypeDeclaration;
}


std::any PascalSParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::TypeDeclarationContext* PascalSParser::typeDeclaration() {
   return typeDeclaration(0);
}

PascalSParser::TypeDeclarationContext* PascalSParser::typeDeclaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, parentState);
  PascalSParser::TypeDeclarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, PascalSParser::RuleTypeDeclaration, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(PascalSParser::ID);
    setState(162);
    match(PascalSParser::EQUAL);
    setState(163);
    type();
    _ctx->stop = _input->LT(-1);
    setState(172);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeDeclaration);
        setState(165);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(166);
        match(PascalSParser::SEMICOLON);
        setState(167);
        match(PascalSParser::ID);
        setState(168);
        match(PascalSParser::EQUAL);
        setState(169);
        type(); 
      }
      setState(174);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

PascalSParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::StandardTypeContext* PascalSParser::TypeContext::standardType() {
  return getRuleContext<PascalSParser::StandardTypeContext>(0);
}

tree::TerminalNode* PascalSParser::TypeContext::RECORD() {
  return getToken(PascalSParser::RECORD, 0);
}

PascalSParser::RecordBodyContext* PascalSParser::TypeContext::recordBody() {
  return getRuleContext<PascalSParser::RecordBodyContext>(0);
}

tree::TerminalNode* PascalSParser::TypeContext::END() {
  return getToken(PascalSParser::END, 0);
}

tree::TerminalNode* PascalSParser::TypeContext::ARRAY() {
  return getToken(PascalSParser::ARRAY, 0);
}

tree::TerminalNode* PascalSParser::TypeContext::LBRACKET() {
  return getToken(PascalSParser::LBRACKET, 0);
}

PascalSParser::PeriodsContext* PascalSParser::TypeContext::periods() {
  return getRuleContext<PascalSParser::PeriodsContext>(0);
}

tree::TerminalNode* PascalSParser::TypeContext::RBRACKET() {
  return getToken(PascalSParser::RBRACKET, 0);
}

tree::TerminalNode* PascalSParser::TypeContext::OF() {
  return getToken(PascalSParser::OF, 0);
}

PascalSParser::TypeContext* PascalSParser::TypeContext::type() {
  return getRuleContext<PascalSParser::TypeContext>(0);
}


size_t PascalSParser::TypeContext::getRuleIndex() const {
  return PascalSParser::RuleType;
}


std::any PascalSParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::TypeContext* PascalSParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 18, PascalSParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::INTEGER:
      case PascalSParser::REAL:
      case PascalSParser::BOOLEAN:
      case PascalSParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        standardType();
        break;
      }

      case PascalSParser::RECORD: {
        enterOuterAlt(_localctx, 2);
        setState(176);
        match(PascalSParser::RECORD);
        setState(177);
        recordBody();
        setState(178);
        match(PascalSParser::END);
        break;
      }

      case PascalSParser::ARRAY: {
        enterOuterAlt(_localctx, 3);
        setState(180);
        match(PascalSParser::ARRAY);
        setState(181);
        match(PascalSParser::LBRACKET);
        setState(182);
        periods(0);
        setState(183);
        match(PascalSParser::RBRACKET);
        setState(184);
        match(PascalSParser::OF);
        setState(185);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StandardTypeContext ------------------------------------------------------------------

PascalSParser::StandardTypeContext::StandardTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::StandardTypeContext::INTEGER() {
  return getToken(PascalSParser::INTEGER, 0);
}

tree::TerminalNode* PascalSParser::StandardTypeContext::BOOLEAN() {
  return getToken(PascalSParser::BOOLEAN, 0);
}

tree::TerminalNode* PascalSParser::StandardTypeContext::REAL() {
  return getToken(PascalSParser::REAL, 0);
}

tree::TerminalNode* PascalSParser::StandardTypeContext::CHAR() {
  return getToken(PascalSParser::CHAR, 0);
}


size_t PascalSParser::StandardTypeContext::getRuleIndex() const {
  return PascalSParser::RuleStandardType;
}


std::any PascalSParser::StandardTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStandardType(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::StandardTypeContext* PascalSParser::standardType() {
  StandardTypeContext *_localctx = _tracker.createInstance<StandardTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalSParser::RuleStandardType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1920) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordBodyContext ------------------------------------------------------------------

PascalSParser::RecordBodyContext::RecordBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::VarDeclarationContext* PascalSParser::RecordBodyContext::varDeclaration() {
  return getRuleContext<PascalSParser::VarDeclarationContext>(0);
}


size_t PascalSParser::RecordBodyContext::getRuleIndex() const {
  return PascalSParser::RuleRecordBody;
}


std::any PascalSParser::RecordBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitRecordBody(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RecordBodyContext* PascalSParser::recordBody() {
  RecordBodyContext *_localctx = _tracker.createInstance<RecordBodyContext>(_ctx, getState());
  enterRule(_localctx, 22, PascalSParser::RuleRecordBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(191);
        varDeclaration(0);
        break;
      }

      case PascalSParser::END: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PeriodsContext ------------------------------------------------------------------

PascalSParser::PeriodsContext::PeriodsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::PeriodContext* PascalSParser::PeriodsContext::period() {
  return getRuleContext<PascalSParser::PeriodContext>(0);
}

PascalSParser::PeriodsContext* PascalSParser::PeriodsContext::periods() {
  return getRuleContext<PascalSParser::PeriodsContext>(0);
}

tree::TerminalNode* PascalSParser::PeriodsContext::COMMA() {
  return getToken(PascalSParser::COMMA, 0);
}


size_t PascalSParser::PeriodsContext::getRuleIndex() const {
  return PascalSParser::RulePeriods;
}


std::any PascalSParser::PeriodsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitPeriods(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::PeriodsContext* PascalSParser::periods() {
   return periods(0);
}

PascalSParser::PeriodsContext* PascalSParser::periods(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::PeriodsContext *_localctx = _tracker.createInstance<PeriodsContext>(_ctx, parentState);
  PascalSParser::PeriodsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, PascalSParser::RulePeriods, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(196);
    period();
    _ctx->stop = _input->LT(-1);
    setState(203);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PeriodsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePeriods);
        setState(198);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(199);
        match(PascalSParser::COMMA);
        setState(200);
        period(); 
      }
      setState(205);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PeriodContext ------------------------------------------------------------------

PascalSParser::PeriodContext::PeriodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::ConstVariableContext *> PascalSParser::PeriodContext::constVariable() {
  return getRuleContexts<PascalSParser::ConstVariableContext>();
}

PascalSParser::ConstVariableContext* PascalSParser::PeriodContext::constVariable(size_t i) {
  return getRuleContext<PascalSParser::ConstVariableContext>(i);
}

tree::TerminalNode* PascalSParser::PeriodContext::PERIODOP() {
  return getToken(PascalSParser::PERIODOP, 0);
}


size_t PascalSParser::PeriodContext::getRuleIndex() const {
  return PascalSParser::RulePeriod;
}


std::any PascalSParser::PeriodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitPeriod(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::PeriodContext* PascalSParser::period() {
  PeriodContext *_localctx = _tracker.createInstance<PeriodContext>(_ctx, getState());
  enterRule(_localctx, 26, PascalSParser::RulePeriod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    constVariable();
    setState(207);
    match(PascalSParser::PERIODOP);
    setState(208);
    constVariable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationsContext ------------------------------------------------------------------

PascalSParser::VarDeclarationsContext::VarDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::VarDeclarationsContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

PascalSParser::VarDeclarationContext* PascalSParser::VarDeclarationsContext::varDeclaration() {
  return getRuleContext<PascalSParser::VarDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::VarDeclarationsContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::VarDeclarationsContext::getRuleIndex() const {
  return PascalSParser::RuleVarDeclarations;
}


std::any PascalSParser::VarDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVarDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VarDeclarationsContext* PascalSParser::varDeclarations() {
  VarDeclarationsContext *_localctx = _tracker.createInstance<VarDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalSParser::RuleVarDeclarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(210);
      match(PascalSParser::VAR);
      setState(211);
      varDeclaration(0);
      setState(212);
      match(PascalSParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

PascalSParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierListContext* PascalSParser::VarDeclarationContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::VarDeclarationContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::TypeContext* PascalSParser::VarDeclarationContext::type() {
  return getRuleContext<PascalSParser::TypeContext>(0);
}

PascalSParser::VarDeclarationContext* PascalSParser::VarDeclarationContext::varDeclaration() {
  return getRuleContext<PascalSParser::VarDeclarationContext>(0);
}

tree::TerminalNode* PascalSParser::VarDeclarationContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::VarDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleVarDeclaration;
}


std::any PascalSParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::VarDeclarationContext* PascalSParser::varDeclaration() {
   return varDeclaration(0);
}

PascalSParser::VarDeclarationContext* PascalSParser::varDeclaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, parentState);
  PascalSParser::VarDeclarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, PascalSParser::RuleVarDeclaration, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(218);
    identifierList(0);
    setState(219);
    match(PascalSParser::COLON);
    setState(220);
    type();
    _ctx->stop = _input->LT(-1);
    setState(230);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VarDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVarDeclaration);
        setState(222);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(223);
        match(PascalSParser::SEMICOLON);
        setState(224);
        identifierList(0);
        setState(225);
        match(PascalSParser::COLON);
        setState(226);
        type(); 
      }
      setState(232);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SubprogramDeclarationsContext ------------------------------------------------------------------

PascalSParser::SubprogramDeclarationsContext::SubprogramDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::SubprogramDeclarationsContext* PascalSParser::SubprogramDeclarationsContext::subprogramDeclarations() {
  return getRuleContext<PascalSParser::SubprogramDeclarationsContext>(0);
}

PascalSParser::SubprogramDeclarationContext* PascalSParser::SubprogramDeclarationsContext::subprogramDeclaration() {
  return getRuleContext<PascalSParser::SubprogramDeclarationContext>(0);
}


size_t PascalSParser::SubprogramDeclarationsContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogramDeclarations;
}


std::any PascalSParser::SubprogramDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogramDeclarations(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::SubprogramDeclarationsContext* PascalSParser::subprogramDeclarations() {
   return subprogramDeclarations(0);
}

PascalSParser::SubprogramDeclarationsContext* PascalSParser::subprogramDeclarations(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::SubprogramDeclarationsContext *_localctx = _tracker.createInstance<SubprogramDeclarationsContext>(_ctx, parentState);
  PascalSParser::SubprogramDeclarationsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, PascalSParser::RuleSubprogramDeclarations, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _ctx->stop = _input->LT(-1);
    setState(238);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SubprogramDeclarationsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSubprogramDeclarations);
        setState(234);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(235);
        subprogramDeclaration(); 
      }
      setState(240);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SubprogramDeclarationContext ------------------------------------------------------------------

PascalSParser::SubprogramDeclarationContext::SubprogramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::SubprogramHeadContext* PascalSParser::SubprogramDeclarationContext::subprogramHead() {
  return getRuleContext<PascalSParser::SubprogramHeadContext>(0);
}

PascalSParser::ProgramBodyContext* PascalSParser::SubprogramDeclarationContext::programBody() {
  return getRuleContext<PascalSParser::ProgramBodyContext>(0);
}

tree::TerminalNode* PascalSParser::SubprogramDeclarationContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::SubprogramDeclarationContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogramDeclaration;
}


std::any PascalSParser::SubprogramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::SubprogramDeclarationContext* PascalSParser::subprogramDeclaration() {
  SubprogramDeclarationContext *_localctx = _tracker.createInstance<SubprogramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, PascalSParser::RuleSubprogramDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    subprogramHead();
    setState(242);
    programBody();
    setState(243);
    match(PascalSParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubprogramHeadContext ------------------------------------------------------------------

PascalSParser::SubprogramHeadContext::SubprogramHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::SubprogramHeadContext::FUNCTION() {
  return getToken(PascalSParser::FUNCTION, 0);
}

tree::TerminalNode* PascalSParser::SubprogramHeadContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::FormalParameterContext* PascalSParser::SubprogramHeadContext::formalParameter() {
  return getRuleContext<PascalSParser::FormalParameterContext>(0);
}

tree::TerminalNode* PascalSParser::SubprogramHeadContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::StandardTypeContext* PascalSParser::SubprogramHeadContext::standardType() {
  return getRuleContext<PascalSParser::StandardTypeContext>(0);
}

tree::TerminalNode* PascalSParser::SubprogramHeadContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}

tree::TerminalNode* PascalSParser::SubprogramHeadContext::PROCEDURE() {
  return getToken(PascalSParser::PROCEDURE, 0);
}


size_t PascalSParser::SubprogramHeadContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogramHead;
}


std::any PascalSParser::SubprogramHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogramHead(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::SubprogramHeadContext* PascalSParser::subprogramHead() {
  SubprogramHeadContext *_localctx = _tracker.createInstance<SubprogramHeadContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalSParser::RuleSubprogramHead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(245);
        match(PascalSParser::FUNCTION);
        setState(246);
        match(PascalSParser::ID);
        setState(247);
        formalParameter();
        setState(248);
        match(PascalSParser::COLON);
        setState(249);
        standardType();
        setState(250);
        match(PascalSParser::SEMICOLON);
        break;
      }

      case PascalSParser::PROCEDURE: {
        enterOuterAlt(_localctx, 2);
        setState(252);
        match(PascalSParser::PROCEDURE);
        setState(253);
        match(PascalSParser::ID);
        setState(254);
        formalParameter();
        setState(255);
        match(PascalSParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

PascalSParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::FormalParameterContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ParameterListsContext* PascalSParser::FormalParameterContext::parameterLists() {
  return getRuleContext<PascalSParser::ParameterListsContext>(0);
}

tree::TerminalNode* PascalSParser::FormalParameterContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}


size_t PascalSParser::FormalParameterContext::getRuleIndex() const {
  return PascalSParser::RuleFormalParameter;
}


std::any PascalSParser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FormalParameterContext* PascalSParser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalSParser::RuleFormalParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(259);
        match(PascalSParser::LPAREN);
        setState(260);
        parameterLists(0);
        setState(261);
        match(PascalSParser::RPAREN);
        break;
      }

      case PascalSParser::COLON:
      case PascalSParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListsContext ------------------------------------------------------------------

PascalSParser::ParameterListsContext::ParameterListsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ParameterListContext* PascalSParser::ParameterListsContext::parameterList() {
  return getRuleContext<PascalSParser::ParameterListContext>(0);
}

PascalSParser::ParameterListsContext* PascalSParser::ParameterListsContext::parameterLists() {
  return getRuleContext<PascalSParser::ParameterListsContext>(0);
}

tree::TerminalNode* PascalSParser::ParameterListsContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::ParameterListsContext::getRuleIndex() const {
  return PascalSParser::RuleParameterLists;
}


std::any PascalSParser::ParameterListsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitParameterLists(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::ParameterListsContext* PascalSParser::parameterLists() {
   return parameterLists(0);
}

PascalSParser::ParameterListsContext* PascalSParser::parameterLists(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::ParameterListsContext *_localctx = _tracker.createInstance<ParameterListsContext>(_ctx, parentState);
  PascalSParser::ParameterListsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, PascalSParser::RuleParameterLists, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(267);
    parameterList();
    _ctx->stop = _input->LT(-1);
    setState(274);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterListsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterLists);
        setState(269);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(270);
        match(PascalSParser::SEMICOLON);
        setState(271);
        parameterList(); 
      }
      setState(276);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

PascalSParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::VarParameterContext* PascalSParser::ParameterListContext::varParameter() {
  return getRuleContext<PascalSParser::VarParameterContext>(0);
}

PascalSParser::ValueParameterContext* PascalSParser::ParameterListContext::valueParameter() {
  return getRuleContext<PascalSParser::ValueParameterContext>(0);
}


size_t PascalSParser::ParameterListContext::getRuleIndex() const {
  return PascalSParser::RuleParameterList;
}


std::any PascalSParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ParameterListContext* PascalSParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalSParser::RuleParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(277);
        varParameter();
        break;
      }

      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(278);
        valueParameter();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarParameterContext ------------------------------------------------------------------

PascalSParser::VarParameterContext::VarParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::VarParameterContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

PascalSParser::ValueParameterContext* PascalSParser::VarParameterContext::valueParameter() {
  return getRuleContext<PascalSParser::ValueParameterContext>(0);
}


size_t PascalSParser::VarParameterContext::getRuleIndex() const {
  return PascalSParser::RuleVarParameter;
}


std::any PascalSParser::VarParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVarParameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VarParameterContext* PascalSParser::varParameter() {
  VarParameterContext *_localctx = _tracker.createInstance<VarParameterContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalSParser::RuleVarParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(PascalSParser::VAR);
    setState(282);
    valueParameter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueParameterContext ------------------------------------------------------------------

PascalSParser::ValueParameterContext::ValueParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdentifierListContext* PascalSParser::ValueParameterContext::identifierList() {
  return getRuleContext<PascalSParser::IdentifierListContext>(0);
}

tree::TerminalNode* PascalSParser::ValueParameterContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::StandardTypeContext* PascalSParser::ValueParameterContext::standardType() {
  return getRuleContext<PascalSParser::StandardTypeContext>(0);
}


size_t PascalSParser::ValueParameterContext::getRuleIndex() const {
  return PascalSParser::RuleValueParameter;
}


std::any PascalSParser::ValueParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitValueParameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ValueParameterContext* PascalSParser::valueParameter() {
  ValueParameterContext *_localctx = _tracker.createInstance<ValueParameterContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalSParser::RuleValueParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    identifierList(0);
    setState(285);
    match(PascalSParser::COLON);
    setState(286);
    standardType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

PascalSParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::CompoundStatementContext::BEGIN() {
  return getToken(PascalSParser::BEGIN, 0);
}

PascalSParser::StatementListContext* PascalSParser::CompoundStatementContext::statementList() {
  return getRuleContext<PascalSParser::StatementListContext>(0);
}

tree::TerminalNode* PascalSParser::CompoundStatementContext::END() {
  return getToken(PascalSParser::END, 0);
}


size_t PascalSParser::CompoundStatementContext::getRuleIndex() const {
  return PascalSParser::RuleCompoundStatement;
}


std::any PascalSParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CompoundStatementContext* PascalSParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalSParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(PascalSParser::BEGIN);
    setState(289);
    statementList(0);
    setState(290);
    match(PascalSParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

PascalSParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::StatementContext* PascalSParser::StatementListContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::StatementListContext* PascalSParser::StatementListContext::statementList() {
  return getRuleContext<PascalSParser::StatementListContext>(0);
}

tree::TerminalNode* PascalSParser::StatementListContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::StatementListContext::getRuleIndex() const {
  return PascalSParser::RuleStatementList;
}


std::any PascalSParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::StatementListContext* PascalSParser::statementList() {
   return statementList(0);
}

PascalSParser::StatementListContext* PascalSParser::statementList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, parentState);
  PascalSParser::StatementListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, PascalSParser::RuleStatementList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(293);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(300);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementList);
        setState(295);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(296);
        match(PascalSParser::SEMICOLON);
        setState(297);
        statement(); 
      }
      setState(302);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PascalSParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalSParser::StatementContext::getRuleIndex() const {
  return PascalSParser::RuleStatement;
}

void PascalSParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::WhileStatementContext::WHILE() {
  return getToken(PascalSParser::WHILE, 0);
}

PascalSParser::ExpressionContext* PascalSParser::WhileStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::WhileStatementContext::DO() {
  return getToken(PascalSParser::DO, 0);
}

PascalSParser::StatementContext* PascalSParser::WhileStatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::WhileStatementContext::WhileStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EmptyStatementContext ------------------------------------------------------------------

PascalSParser::EmptyStatementContext::EmptyStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepeatStatementContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::RepeatStatementContext::REPEAT() {
  return getToken(PascalSParser::REPEAT, 0);
}

PascalSParser::StatementListContext* PascalSParser::RepeatStatementContext::statementList() {
  return getRuleContext<PascalSParser::StatementListContext>(0);
}

tree::TerminalNode* PascalSParser::RepeatStatementContext::UNTIL() {
  return getToken(PascalSParser::UNTIL, 0);
}

PascalSParser::ExpressionContext* PascalSParser::RepeatStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

PascalSParser::RepeatStatementContext::RepeatStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::RepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CaseStatementContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::CaseStatementContext::CASE() {
  return getToken(PascalSParser::CASE, 0);
}

PascalSParser::ExpressionContext* PascalSParser::CaseStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::OF() {
  return getToken(PascalSParser::OF, 0);
}

PascalSParser::CaseBodyContext* PascalSParser::CaseStatementContext::caseBody() {
  return getRuleContext<PascalSParser::CaseBodyContext>(0);
}

tree::TerminalNode* PascalSParser::CaseStatementContext::END() {
  return getToken(PascalSParser::END, 0);
}

PascalSParser::CaseStatementContext::CaseStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStatementContext ------------------------------------------------------------------

PascalSParser::VariableContext* PascalSParser::AssignmentStatementContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

tree::TerminalNode* PascalSParser::AssignmentStatementContext::ASSIGNOP() {
  return getToken(PascalSParser::ASSIGNOP, 0);
}

PascalSParser::ExpressionContext* PascalSParser::AssignmentStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

PascalSParser::AssignmentStatementContext::AssignmentStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementCallProcedureStatementContext ------------------------------------------------------------------

PascalSParser::CallProcedureStatementContext* PascalSParser::StatementCallProcedureStatementContext::callProcedureStatement() {
  return getRuleContext<PascalSParser::CallProcedureStatementContext>(0);
}

PascalSParser::StatementCallProcedureStatementContext::StatementCallProcedureStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::StatementCallProcedureStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStatementCallProcedureStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::ForStatementContext::FOR() {
  return getToken(PascalSParser::FOR, 0);
}

tree::TerminalNode* PascalSParser::ForStatementContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::ForStatementContext::ASSIGNOP() {
  return getToken(PascalSParser::ASSIGNOP, 0);
}

std::vector<PascalSParser::ExpressionContext *> PascalSParser::ForStatementContext::expression() {
  return getRuleContexts<PascalSParser::ExpressionContext>();
}

PascalSParser::ExpressionContext* PascalSParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<PascalSParser::ExpressionContext>(i);
}

PascalSParser::UpdownContext* PascalSParser::ForStatementContext::updown() {
  return getRuleContext<PascalSParser::UpdownContext>(0);
}

tree::TerminalNode* PascalSParser::ForStatementContext::DO() {
  return getToken(PascalSParser::DO, 0);
}

PascalSParser::StatementContext* PascalSParser::ForStatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::ForStatementContext::ForStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

tree::TerminalNode* PascalSParser::IfStatementContext::IF() {
  return getToken(PascalSParser::IF, 0);
}

PascalSParser::ExpressionContext* PascalSParser::IfStatementContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::IfStatementContext::THEN() {
  return getToken(PascalSParser::THEN, 0);
}

PascalSParser::StatementContext* PascalSParser::IfStatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::ElsePartContext* PascalSParser::IfStatementContext::elsePart() {
  return getRuleContext<PascalSParser::ElsePartContext>(0);
}

PascalSParser::IfStatementContext::IfStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementCompoundStatementContext ------------------------------------------------------------------

PascalSParser::CompoundStatementContext* PascalSParser::StatementCompoundStatementContext::compoundStatement() {
  return getRuleContext<PascalSParser::CompoundStatementContext>(0);
}

PascalSParser::StatementCompoundStatementContext::StatementCompoundStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any PascalSParser::StatementCompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStatementCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}
PascalSParser::StatementContext* PascalSParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 52, PascalSParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::AssignmentStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(303);
      variable();
      setState(304);
      match(PascalSParser::ASSIGNOP);
      setState(305);
      expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::StatementCallProcedureStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(307);
      callProcedureStatement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalSParser::StatementCompoundStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(308);
      compoundStatement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalSParser::IfStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(309);
      match(PascalSParser::IF);
      setState(310);
      expression();
      setState(311);
      match(PascalSParser::THEN);
      setState(312);
      statement();
      setState(313);
      elsePart();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalSParser::CaseStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(315);
      match(PascalSParser::CASE);
      setState(316);
      expression();
      setState(317);
      match(PascalSParser::OF);
      setState(318);
      caseBody();
      setState(319);
      match(PascalSParser::END);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PascalSParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(321);
      match(PascalSParser::WHILE);
      setState(322);
      expression();
      setState(323);
      match(PascalSParser::DO);
      setState(324);
      statement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PascalSParser::RepeatStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(326);
      match(PascalSParser::REPEAT);
      setState(327);
      statementList(0);
      setState(328);
      match(PascalSParser::UNTIL);
      setState(329);
      expression();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PascalSParser::ForStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(331);
      match(PascalSParser::FOR);
      setState(332);
      match(PascalSParser::ID);
      setState(333);
      match(PascalSParser::ASSIGNOP);
      setState(334);
      expression();
      setState(335);
      updown();
      setState(336);
      expression();
      setState(337);
      match(PascalSParser::DO);
      setState(338);
      statement();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<PascalSParser::EmptyStatementContext>(_localctx);
      enterOuterAlt(_localctx, 9);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

PascalSParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::VariableContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::IdVarpartsContext* PascalSParser::VariableContext::idVarparts() {
  return getRuleContext<PascalSParser::IdVarpartsContext>(0);
}


size_t PascalSParser::VariableContext::getRuleIndex() const {
  return PascalSParser::RuleVariable;
}


std::any PascalSParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::VariableContext* PascalSParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 54, PascalSParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(PascalSParser::ID);
    setState(344);
    idVarparts(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdVarpartsContext ------------------------------------------------------------------

PascalSParser::IdVarpartsContext::IdVarpartsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::IdVarpartsContext* PascalSParser::IdVarpartsContext::idVarparts() {
  return getRuleContext<PascalSParser::IdVarpartsContext>(0);
}

PascalSParser::IdVarpartContext* PascalSParser::IdVarpartsContext::idVarpart() {
  return getRuleContext<PascalSParser::IdVarpartContext>(0);
}


size_t PascalSParser::IdVarpartsContext::getRuleIndex() const {
  return PascalSParser::RuleIdVarparts;
}


std::any PascalSParser::IdVarpartsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIdVarparts(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::IdVarpartsContext* PascalSParser::idVarparts() {
   return idVarparts(0);
}

PascalSParser::IdVarpartsContext* PascalSParser::idVarparts(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::IdVarpartsContext *_localctx = _tracker.createInstance<IdVarpartsContext>(_ctx, parentState);
  PascalSParser::IdVarpartsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, PascalSParser::RuleIdVarparts, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _ctx->stop = _input->LT(-1);
    setState(351);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdVarpartsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdVarparts);
        setState(347);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(348);
        idVarpart(); 
      }
      setState(353);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdVarpartContext ------------------------------------------------------------------

PascalSParser::IdVarpartContext::IdVarpartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::IdVarpartContext::LBRACKET() {
  return getToken(PascalSParser::LBRACKET, 0);
}

PascalSParser::ExpressionListContext* PascalSParser::IdVarpartContext::expressionList() {
  return getRuleContext<PascalSParser::ExpressionListContext>(0);
}

tree::TerminalNode* PascalSParser::IdVarpartContext::RBRACKET() {
  return getToken(PascalSParser::RBRACKET, 0);
}

tree::TerminalNode* PascalSParser::IdVarpartContext::DOT() {
  return getToken(PascalSParser::DOT, 0);
}

tree::TerminalNode* PascalSParser::IdVarpartContext::ID() {
  return getToken(PascalSParser::ID, 0);
}


size_t PascalSParser::IdVarpartContext::getRuleIndex() const {
  return PascalSParser::RuleIdVarpart;
}


std::any PascalSParser::IdVarpartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIdVarpart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::IdVarpartContext* PascalSParser::idVarpart() {
  IdVarpartContext *_localctx = _tracker.createInstance<IdVarpartContext>(_ctx, getState());
  enterRule(_localctx, 58, PascalSParser::RuleIdVarpart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(354);
        match(PascalSParser::LBRACKET);
        setState(355);
        expressionList(0);
        setState(356);
        match(PascalSParser::RBRACKET);
        break;
      }

      case PascalSParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(358);
        match(PascalSParser::DOT);
        setState(359);
        match(PascalSParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElsePartContext ------------------------------------------------------------------

PascalSParser::ElsePartContext::ElsePartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::ElsePartContext::ELSE() {
  return getToken(PascalSParser::ELSE, 0);
}

PascalSParser::StatementContext* PascalSParser::ElsePartContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::ElsePartContext::getRuleIndex() const {
  return PascalSParser::RuleElsePart;
}


std::any PascalSParser::ElsePartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitElsePart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ElsePartContext* PascalSParser::elsePart() {
  ElsePartContext *_localctx = _tracker.createInstance<ElsePartContext>(_ctx, getState());
  enterRule(_localctx, 60, PascalSParser::RuleElsePart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(362);
      match(PascalSParser::ELSE);
      setState(363);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBodyContext ------------------------------------------------------------------

PascalSParser::CaseBodyContext::CaseBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::BranchListContext* PascalSParser::CaseBodyContext::branchList() {
  return getRuleContext<PascalSParser::BranchListContext>(0);
}


size_t PascalSParser::CaseBodyContext::getRuleIndex() const {
  return PascalSParser::RuleCaseBody;
}


std::any PascalSParser::CaseBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCaseBody(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CaseBodyContext* PascalSParser::caseBody() {
  CaseBodyContext *_localctx = _tracker.createInstance<CaseBodyContext>(_ctx, getState());
  enterRule(_localctx, 62, PascalSParser::RuleCaseBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ID:
      case PascalSParser::NUM:
      case PascalSParser::PLUS:
      case PascalSParser::MINUS:
      case PascalSParser::QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(367);
        branchList(0);
        break;
      }

      case PascalSParser::END: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchListContext ------------------------------------------------------------------

PascalSParser::BranchListContext::BranchListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::BranchContext* PascalSParser::BranchListContext::branch() {
  return getRuleContext<PascalSParser::BranchContext>(0);
}

PascalSParser::BranchListContext* PascalSParser::BranchListContext::branchList() {
  return getRuleContext<PascalSParser::BranchListContext>(0);
}

tree::TerminalNode* PascalSParser::BranchListContext::SEMICOLON() {
  return getToken(PascalSParser::SEMICOLON, 0);
}


size_t PascalSParser::BranchListContext::getRuleIndex() const {
  return PascalSParser::RuleBranchList;
}


std::any PascalSParser::BranchListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitBranchList(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::BranchListContext* PascalSParser::branchList() {
   return branchList(0);
}

PascalSParser::BranchListContext* PascalSParser::branchList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::BranchListContext *_localctx = _tracker.createInstance<BranchListContext>(_ctx, parentState);
  PascalSParser::BranchListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, PascalSParser::RuleBranchList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(372);
    branch();
    _ctx->stop = _input->LT(-1);
    setState(379);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BranchListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBranchList);
        setState(374);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(375);
        match(PascalSParser::SEMICOLON);
        setState(376);
        branch(); 
      }
      setState(381);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

PascalSParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ConstListContext* PascalSParser::BranchContext::constList() {
  return getRuleContext<PascalSParser::ConstListContext>(0);
}

tree::TerminalNode* PascalSParser::BranchContext::COLON() {
  return getToken(PascalSParser::COLON, 0);
}

PascalSParser::StatementContext* PascalSParser::BranchContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::BranchContext::getRuleIndex() const {
  return PascalSParser::RuleBranch;
}


std::any PascalSParser::BranchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitBranch(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::BranchContext* PascalSParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 66, PascalSParser::RuleBranch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    constList(0);
    setState(383);
    match(PascalSParser::COLON);
    setState(384);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstListContext ------------------------------------------------------------------

PascalSParser::ConstListContext::ConstListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ConstVariableContext* PascalSParser::ConstListContext::constVariable() {
  return getRuleContext<PascalSParser::ConstVariableContext>(0);
}

PascalSParser::ConstListContext* PascalSParser::ConstListContext::constList() {
  return getRuleContext<PascalSParser::ConstListContext>(0);
}

tree::TerminalNode* PascalSParser::ConstListContext::COMMA() {
  return getToken(PascalSParser::COMMA, 0);
}


size_t PascalSParser::ConstListContext::getRuleIndex() const {
  return PascalSParser::RuleConstList;
}


std::any PascalSParser::ConstListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConstList(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::ConstListContext* PascalSParser::constList() {
   return constList(0);
}

PascalSParser::ConstListContext* PascalSParser::constList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::ConstListContext *_localctx = _tracker.createInstance<ConstListContext>(_ctx, parentState);
  PascalSParser::ConstListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, PascalSParser::RuleConstList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(387);
    constVariable();
    _ctx->stop = _input->LT(-1);
    setState(394);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConstListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConstList);
        setState(389);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(390);
        match(PascalSParser::COMMA);
        setState(391);
        constVariable(); 
      }
      setState(396);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UpdownContext ------------------------------------------------------------------

PascalSParser::UpdownContext::UpdownContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::UpdownContext::TO() {
  return getToken(PascalSParser::TO, 0);
}

tree::TerminalNode* PascalSParser::UpdownContext::DOWNTO() {
  return getToken(PascalSParser::DOWNTO, 0);
}


size_t PascalSParser::UpdownContext::getRuleIndex() const {
  return PascalSParser::RuleUpdown;
}


std::any PascalSParser::UpdownContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitUpdown(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::UpdownContext* PascalSParser::updown() {
  UpdownContext *_localctx = _tracker.createInstance<UpdownContext>(_ctx, getState());
  enterRule(_localctx, 70, PascalSParser::RuleUpdown);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    _la = _input->LA(1);
    if (!(_la == PascalSParser::DOWNTO

    || _la == PascalSParser::TO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallProcedureStatementContext ------------------------------------------------------------------

PascalSParser::CallProcedureStatementContext::CallProcedureStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::CallProcedureStatementContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::CallProcedureStatementContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ExpressionListContext* PascalSParser::CallProcedureStatementContext::expressionList() {
  return getRuleContext<PascalSParser::ExpressionListContext>(0);
}

tree::TerminalNode* PascalSParser::CallProcedureStatementContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}


size_t PascalSParser::CallProcedureStatementContext::getRuleIndex() const {
  return PascalSParser::RuleCallProcedureStatement;
}


std::any PascalSParser::CallProcedureStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCallProcedureStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::CallProcedureStatementContext* PascalSParser::callProcedureStatement() {
  CallProcedureStatementContext *_localctx = _tracker.createInstance<CallProcedureStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, PascalSParser::RuleCallProcedureStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(399);
      match(PascalSParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(400);
      match(PascalSParser::ID);
      setState(401);
      match(PascalSParser::LPAREN);
      setState(402);
      expressionList(0);
      setState(403);
      match(PascalSParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

PascalSParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ExpressionContext* PascalSParser::ExpressionListContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

PascalSParser::ExpressionListContext* PascalSParser::ExpressionListContext::expressionList() {
  return getRuleContext<PascalSParser::ExpressionListContext>(0);
}

tree::TerminalNode* PascalSParser::ExpressionListContext::COMMA() {
  return getToken(PascalSParser::COMMA, 0);
}


size_t PascalSParser::ExpressionListContext::getRuleIndex() const {
  return PascalSParser::RuleExpressionList;
}


std::any PascalSParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::ExpressionListContext* PascalSParser::expressionList() {
   return expressionList(0);
}

PascalSParser::ExpressionListContext* PascalSParser::expressionList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, parentState);
  PascalSParser::ExpressionListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, PascalSParser::RuleExpressionList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(408);
    expression();
    _ctx->stop = _input->LT(-1);
    setState(415);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpressionList);
        setState(410);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(411);
        match(PascalSParser::COMMA);
        setState(412);
        expression(); 
      }
      setState(417);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PascalSParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalSParser::SimpleExpressionContext *> PascalSParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<PascalSParser::SimpleExpressionContext>();
}

PascalSParser::SimpleExpressionContext* PascalSParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<PascalSParser::SimpleExpressionContext>(i);
}

tree::TerminalNode* PascalSParser::ExpressionContext::RELOP() {
  return getToken(PascalSParser::RELOP, 0);
}


size_t PascalSParser::ExpressionContext::getRuleIndex() const {
  return PascalSParser::RuleExpression;
}


std::any PascalSParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::ExpressionContext* PascalSParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, PascalSParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(418);
      simpleExpression(0);
      setState(419);
      match(PascalSParser::RELOP);
      setState(420);
      simpleExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(422);
      simpleExpression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

PascalSParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::TermContext* PascalSParser::SimpleExpressionContext::term() {
  return getRuleContext<PascalSParser::TermContext>(0);
}

tree::TerminalNode* PascalSParser::SimpleExpressionContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::SimpleExpressionContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

PascalSParser::SimpleExpressionContext* PascalSParser::SimpleExpressionContext::simpleExpression() {
  return getRuleContext<PascalSParser::SimpleExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::SimpleExpressionContext::ADDOP() {
  return getToken(PascalSParser::ADDOP, 0);
}


size_t PascalSParser::SimpleExpressionContext::getRuleIndex() const {
  return PascalSParser::RuleSimpleExpression;
}


std::any PascalSParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::SimpleExpressionContext* PascalSParser::simpleExpression() {
   return simpleExpression(0);
}

PascalSParser::SimpleExpressionContext* PascalSParser::simpleExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, parentState);
  PascalSParser::SimpleExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, PascalSParser::RuleSimpleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::NOT:
      case PascalSParser::FALSE:
      case PascalSParser::TRUE:
      case PascalSParser::ID:
      case PascalSParser::NUM:
      case PascalSParser::QUOTE:
      case PascalSParser::LPAREN: {
        setState(426);
        term(0);
        break;
      }

      case PascalSParser::PLUS: {
        setState(427);
        match(PascalSParser::PLUS);
        setState(428);
        term(0);
        break;
      }

      case PascalSParser::MINUS: {
        setState(429);
        match(PascalSParser::MINUS);
        setState(430);
        term(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(438);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SimpleExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimpleExpression);
        setState(433);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(434);
        match(PascalSParser::ADDOP);
        setState(435);
        term(0); 
      }
      setState(440);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

PascalSParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::FactorContext* PascalSParser::TermContext::factor() {
  return getRuleContext<PascalSParser::FactorContext>(0);
}

PascalSParser::TermContext* PascalSParser::TermContext::term() {
  return getRuleContext<PascalSParser::TermContext>(0);
}

tree::TerminalNode* PascalSParser::TermContext::MULOP() {
  return getToken(PascalSParser::MULOP, 0);
}


size_t PascalSParser::TermContext::getRuleIndex() const {
  return PascalSParser::RuleTerm;
}


std::any PascalSParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::TermContext* PascalSParser::term() {
   return term(0);
}

PascalSParser::TermContext* PascalSParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  PascalSParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, PascalSParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(442);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(449);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(444);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(445);
        match(PascalSParser::MULOP);
        setState(446);
        factor(); 
      }
      setState(451);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BooleanContext ------------------------------------------------------------------

PascalSParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::BooleanContext::TRUE() {
  return getToken(PascalSParser::TRUE, 0);
}

tree::TerminalNode* PascalSParser::BooleanContext::FALSE() {
  return getToken(PascalSParser::FALSE, 0);
}


size_t PascalSParser::BooleanContext::getRuleIndex() const {
  return PascalSParser::RuleBoolean;
}


std::any PascalSParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::BooleanContext* PascalSParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 82, PascalSParser::RuleBoolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    _la = _input->LA(1);
    if (!(_la == PascalSParser::FALSE

    || _la == PascalSParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

PascalSParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::UnsignConstVariableContext* PascalSParser::FactorContext::unsignConstVariable() {
  return getRuleContext<PascalSParser::UnsignConstVariableContext>(0);
}

PascalSParser::VariableContext* PascalSParser::FactorContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

tree::TerminalNode* PascalSParser::FactorContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::FactorContext::LPAREN() {
  return getToken(PascalSParser::LPAREN, 0);
}

PascalSParser::ExpressionListContext* PascalSParser::FactorContext::expressionList() {
  return getRuleContext<PascalSParser::ExpressionListContext>(0);
}

tree::TerminalNode* PascalSParser::FactorContext::RPAREN() {
  return getToken(PascalSParser::RPAREN, 0);
}

PascalSParser::ExpressionContext* PascalSParser::FactorContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalSParser::FactorContext::NOT() {
  return getToken(PascalSParser::NOT, 0);
}

PascalSParser::FactorContext* PascalSParser::FactorContext::factor() {
  return getRuleContext<PascalSParser::FactorContext>(0);
}

PascalSParser::BooleanContext* PascalSParser::FactorContext::boolean() {
  return getRuleContext<PascalSParser::BooleanContext>(0);
}


size_t PascalSParser::FactorContext::getRuleIndex() const {
  return PascalSParser::RuleFactor;
}


std::any PascalSParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::FactorContext* PascalSParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 84, PascalSParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(454);
      unsignConstVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(455);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(456);
      match(PascalSParser::ID);
      setState(457);
      match(PascalSParser::LPAREN);
      setState(458);
      expressionList(0);
      setState(459);
      match(PascalSParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(461);
      match(PascalSParser::LPAREN);
      setState(462);
      expression();
      setState(463);
      match(PascalSParser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(465);
      match(PascalSParser::NOT);
      setState(466);
      factor();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(467);
      boolean();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignConstVariableContext ------------------------------------------------------------------

PascalSParser::UnsignConstVariableContext::UnsignConstVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::UnsignConstVariableContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::UnsignConstVariableContext::NUM() {
  return getToken(PascalSParser::NUM, 0);
}

std::vector<tree::TerminalNode *> PascalSParser::UnsignConstVariableContext::QUOTE() {
  return getTokens(PascalSParser::QUOTE);
}

tree::TerminalNode* PascalSParser::UnsignConstVariableContext::QUOTE(size_t i) {
  return getToken(PascalSParser::QUOTE, i);
}

tree::TerminalNode* PascalSParser::UnsignConstVariableContext::LETTER() {
  return getToken(PascalSParser::LETTER, 0);
}


size_t PascalSParser::UnsignConstVariableContext::getRuleIndex() const {
  return PascalSParser::RuleUnsignConstVariable;
}


std::any PascalSParser::UnsignConstVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitUnsignConstVariable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::UnsignConstVariableContext* PascalSParser::unsignConstVariable() {
  UnsignConstVariableContext *_localctx = _tracker.createInstance<UnsignConstVariableContext>(_ctx, getState());
  enterRule(_localctx, 86, PascalSParser::RuleUnsignConstVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(475);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(470);
        match(PascalSParser::ID);
        break;
      }

      case PascalSParser::NUM: {
        enterOuterAlt(_localctx, 2);
        setState(471);
        match(PascalSParser::NUM);
        break;
      }

      case PascalSParser::QUOTE: {
        enterOuterAlt(_localctx, 3);
        setState(472);
        match(PascalSParser::QUOTE);
        setState(473);
        match(PascalSParser::LETTER);
        setState(474);
        match(PascalSParser::QUOTE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PascalSParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return identifierListSempred(antlrcpp::downCast<IdentifierListContext *>(context), predicateIndex);
    case 5: return constDeclarationSempred(antlrcpp::downCast<ConstDeclarationContext *>(context), predicateIndex);
    case 8: return typeDeclarationSempred(antlrcpp::downCast<TypeDeclarationContext *>(context), predicateIndex);
    case 12: return periodsSempred(antlrcpp::downCast<PeriodsContext *>(context), predicateIndex);
    case 15: return varDeclarationSempred(antlrcpp::downCast<VarDeclarationContext *>(context), predicateIndex);
    case 16: return subprogramDeclarationsSempred(antlrcpp::downCast<SubprogramDeclarationsContext *>(context), predicateIndex);
    case 20: return parameterListsSempred(antlrcpp::downCast<ParameterListsContext *>(context), predicateIndex);
    case 25: return statementListSempred(antlrcpp::downCast<StatementListContext *>(context), predicateIndex);
    case 28: return idVarpartsSempred(antlrcpp::downCast<IdVarpartsContext *>(context), predicateIndex);
    case 32: return branchListSempred(antlrcpp::downCast<BranchListContext *>(context), predicateIndex);
    case 34: return constListSempred(antlrcpp::downCast<ConstListContext *>(context), predicateIndex);
    case 37: return expressionListSempred(antlrcpp::downCast<ExpressionListContext *>(context), predicateIndex);
    case 39: return simpleExpressionSempred(antlrcpp::downCast<SimpleExpressionContext *>(context), predicateIndex);
    case 40: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PascalSParser::identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::constDeclarationSempred(ConstDeclarationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::typeDeclarationSempred(TypeDeclarationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::periodsSempred(PeriodsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::varDeclarationSempred(VarDeclarationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::subprogramDeclarationsSempred(SubprogramDeclarationsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::parameterListsSempred(ParameterListsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::statementListSempred(StatementListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::idVarpartsSempred(IdVarpartsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::branchListSempred(BranchListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::constListSempred(ConstListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::expressionListSempred(ExpressionListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::simpleExpressionSempred(SimpleExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool PascalSParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void PascalSParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascalsParserInitialize();
#else
  ::antlr4::internal::call_once(pascalsParserOnceFlag, pascalsParserInitialize);
#endif
}
