
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
      "factor", "unsignConstVariable", "identifier", "relationalOpreator", 
      "addOperator", "multiplyOperator"
    },
    std::vector<std::string>{
      "", "'<>'", "'<'", "'<='", "'>'", "'>='", "'and'", "'or'", "'not'", 
      "'integer'", "'real'", "'boolean'", "'char'", "'array'", "'begin'", 
      "'case'", "'const'", "'div'", "'do'", "'downto'", "'else'", "'end'", 
      "'false'", "'for'", "'function'", "'if'", "'mod'", "'of'", "'procedure'", 
      "'program'", "'record'", "'repeat'", "'then'", "'to'", "'true'", "'type'", 
      "'until'", "'var'", "'while'", "", "", "", "", "", "", "'='", "'+'", 
      "'-'", "'*'", "'/'", "':='", "'..'", "'.'", "','", "':'", "';'", "'''", 
      "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "AND", "OR", "NOT", "INTEGER", "REAL", "BOOLEAN", 
      "CHAR", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", "DOWNTO", 
      "ELSE", "END", "FALSE", "FOR", "FUNCTION", "IF", "MOD", "OF", "PROCEDURE", 
      "PROGRAM", "RECORD", "REPEAT", "THEN", "TO", "TRUE", "TYPE", "UNTIL", 
      "VAR", "WHILE", "LETTER", "NUM", "EXPONENT", "FRAC", "DIGITS", "DIGIT", 
      "EQUAL", "PLUS", "MINUS", "MULT", "DIVIDE", "ASSIGNOP", "PERIODOP", 
      "DOT", "COMMA", "COLON", "SEMICOLON", "QUOTE", "LPAREN", "RPAREN", 
      "LBRACKET", "RBRACKET", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,62,503,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,1,0,1,0,1,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,5,3,120,8,3,10,3,12,3,123,9,3,1,4,1,4,1,4,1,4,1,4,3,4,130,8,4,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,143,8,5,10,5,12,5,146,9,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,161,8,6,1,7,
  	1,7,1,7,1,7,1,7,3,7,168,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,5,8,181,8,8,10,8,12,8,184,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,3,9,198,8,9,1,10,1,10,1,11,1,11,3,11,204,8,11,1,12,1,12,1,12,
  	1,12,1,12,1,12,5,12,212,8,12,10,12,12,12,215,9,12,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,14,1,14,1,14,3,14,226,8,14,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,5,15,239,8,15,10,15,12,15,242,9,15,1,16,1,16,
  	1,16,5,16,247,8,16,10,16,12,16,250,9,16,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,268,8,18,1,19,
  	1,19,1,19,1,19,1,19,3,19,275,8,19,1,20,1,20,1,20,1,20,1,20,1,20,5,20,
  	283,8,20,10,20,12,20,286,9,20,1,21,1,21,3,21,290,8,21,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,
  	5,25,309,8,25,10,25,12,25,312,9,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,3,26,352,8,26,1,27,1,27,1,27,1,28,1,28,1,28,5,28,360,8,
  	28,10,28,12,28,363,9,28,1,29,1,29,1,29,1,29,1,29,1,29,3,29,371,8,29,1,
  	30,1,30,1,30,3,30,376,8,30,1,31,1,31,3,31,380,8,31,1,32,1,32,1,32,1,32,
  	1,32,1,32,5,32,388,8,32,10,32,12,32,391,9,32,1,33,1,33,1,33,1,33,1,34,
  	1,34,1,34,1,34,1,34,1,34,5,34,403,8,34,10,34,12,34,406,9,34,1,35,1,35,
  	1,36,1,36,1,36,1,36,1,36,1,36,3,36,416,8,36,1,37,1,37,1,37,1,37,1,37,
  	1,37,5,37,424,8,37,10,37,12,37,427,9,37,1,38,1,38,1,38,1,38,1,38,3,38,
  	434,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,442,8,39,1,39,1,39,1,39,1,
  	39,5,39,448,8,39,10,39,12,39,451,9,39,1,40,1,40,1,40,1,40,1,40,1,40,1,
  	40,5,40,460,8,40,10,40,12,40,463,9,40,1,41,1,41,1,42,1,42,1,42,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,481,8,42,1,43,1,
  	43,1,43,1,43,1,43,3,43,488,8,43,1,44,1,44,5,44,492,8,44,10,44,12,44,495,
  	9,44,1,45,1,45,1,46,1,46,1,47,1,47,1,47,0,14,6,10,16,24,30,32,40,50,56,
  	64,68,74,78,80,48,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,
  	84,86,88,90,92,94,0,7,1,0,9,12,2,0,19,19,33,33,2,0,22,22,34,34,2,0,39,
  	39,44,44,2,0,1,5,45,45,2,0,7,7,46,47,4,0,6,6,17,17,26,26,48,49,506,0,
  	96,1,0,0,0,2,100,1,0,0,0,4,107,1,0,0,0,6,113,1,0,0,0,8,129,1,0,0,0,10,
  	131,1,0,0,0,12,160,1,0,0,0,14,167,1,0,0,0,16,169,1,0,0,0,18,197,1,0,0,
  	0,20,199,1,0,0,0,22,203,1,0,0,0,24,205,1,0,0,0,26,216,1,0,0,0,28,225,
  	1,0,0,0,30,227,1,0,0,0,32,243,1,0,0,0,34,251,1,0,0,0,36,267,1,0,0,0,38,
  	274,1,0,0,0,40,276,1,0,0,0,42,289,1,0,0,0,44,291,1,0,0,0,46,294,1,0,0,
  	0,48,298,1,0,0,0,50,302,1,0,0,0,52,351,1,0,0,0,54,353,1,0,0,0,56,356,
  	1,0,0,0,58,370,1,0,0,0,60,375,1,0,0,0,62,379,1,0,0,0,64,381,1,0,0,0,66,
  	392,1,0,0,0,68,396,1,0,0,0,70,407,1,0,0,0,72,415,1,0,0,0,74,417,1,0,0,
  	0,76,433,1,0,0,0,78,441,1,0,0,0,80,452,1,0,0,0,82,464,1,0,0,0,84,480,
  	1,0,0,0,86,487,1,0,0,0,88,489,1,0,0,0,90,496,1,0,0,0,92,498,1,0,0,0,94,
  	500,1,0,0,0,96,97,3,2,1,0,97,98,3,4,2,0,98,99,5,52,0,0,99,1,1,0,0,0,100,
  	101,5,29,0,0,101,102,3,88,44,0,102,103,5,57,0,0,103,104,3,6,3,0,104,105,
  	5,58,0,0,105,106,5,55,0,0,106,3,1,0,0,0,107,108,3,8,4,0,108,109,3,14,
  	7,0,109,110,3,28,14,0,110,111,3,32,16,0,111,112,3,48,24,0,112,5,1,0,0,
  	0,113,114,6,3,-1,0,114,115,3,88,44,0,115,121,1,0,0,0,116,117,10,2,0,0,
  	117,118,5,53,0,0,118,120,3,88,44,0,119,116,1,0,0,0,120,123,1,0,0,0,121,
  	119,1,0,0,0,121,122,1,0,0,0,122,7,1,0,0,0,123,121,1,0,0,0,124,125,5,16,
  	0,0,125,126,3,10,5,0,126,127,5,55,0,0,127,130,1,0,0,0,128,130,1,0,0,0,
  	129,124,1,0,0,0,129,128,1,0,0,0,130,9,1,0,0,0,131,132,6,5,-1,0,132,133,
  	3,88,44,0,133,134,5,45,0,0,134,135,3,12,6,0,135,144,1,0,0,0,136,137,10,
  	2,0,0,137,138,5,55,0,0,138,139,3,88,44,0,139,140,5,45,0,0,140,141,3,12,
  	6,0,141,143,1,0,0,0,142,136,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,
  	145,1,0,0,0,145,11,1,0,0,0,146,144,1,0,0,0,147,148,5,46,0,0,148,161,3,
  	88,44,0,149,150,5,47,0,0,150,161,3,88,44,0,151,161,3,88,44,0,152,153,
  	5,46,0,0,153,161,5,40,0,0,154,155,5,47,0,0,155,161,5,40,0,0,156,161,5,
  	40,0,0,157,158,5,56,0,0,158,159,5,39,0,0,159,161,5,56,0,0,160,147,1,0,
  	0,0,160,149,1,0,0,0,160,151,1,0,0,0,160,152,1,0,0,0,160,154,1,0,0,0,160,
  	156,1,0,0,0,160,157,1,0,0,0,161,13,1,0,0,0,162,163,5,35,0,0,163,164,3,
  	16,8,0,164,165,5,55,0,0,165,168,1,0,0,0,166,168,1,0,0,0,167,162,1,0,0,
  	0,167,166,1,0,0,0,168,15,1,0,0,0,169,170,6,8,-1,0,170,171,3,88,44,0,171,
  	172,5,45,0,0,172,173,3,18,9,0,173,182,1,0,0,0,174,175,10,2,0,0,175,176,
  	5,55,0,0,176,177,3,88,44,0,177,178,5,45,0,0,178,179,3,18,9,0,179,181,
  	1,0,0,0,180,174,1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,
  	0,183,17,1,0,0,0,184,182,1,0,0,0,185,198,3,20,10,0,186,187,5,30,0,0,187,
  	188,3,22,11,0,188,189,5,21,0,0,189,198,1,0,0,0,190,191,5,13,0,0,191,192,
  	5,59,0,0,192,193,3,24,12,0,193,194,5,60,0,0,194,195,5,27,0,0,195,196,
  	3,18,9,0,196,198,1,0,0,0,197,185,1,0,0,0,197,186,1,0,0,0,197,190,1,0,
  	0,0,198,19,1,0,0,0,199,200,7,0,0,0,200,21,1,0,0,0,201,204,3,30,15,0,202,
  	204,1,0,0,0,203,201,1,0,0,0,203,202,1,0,0,0,204,23,1,0,0,0,205,206,6,
  	12,-1,0,206,207,3,26,13,0,207,213,1,0,0,0,208,209,10,2,0,0,209,210,5,
  	53,0,0,210,212,3,26,13,0,211,208,1,0,0,0,212,215,1,0,0,0,213,211,1,0,
  	0,0,213,214,1,0,0,0,214,25,1,0,0,0,215,213,1,0,0,0,216,217,3,12,6,0,217,
  	218,5,51,0,0,218,219,3,12,6,0,219,27,1,0,0,0,220,221,5,37,0,0,221,222,
  	3,30,15,0,222,223,5,55,0,0,223,226,1,0,0,0,224,226,1,0,0,0,225,220,1,
  	0,0,0,225,224,1,0,0,0,226,29,1,0,0,0,227,228,6,15,-1,0,228,229,3,6,3,
  	0,229,230,5,54,0,0,230,231,3,18,9,0,231,240,1,0,0,0,232,233,10,2,0,0,
  	233,234,5,55,0,0,234,235,3,6,3,0,235,236,5,54,0,0,236,237,3,18,9,0,237,
  	239,1,0,0,0,238,232,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,
  	0,0,0,241,31,1,0,0,0,242,240,1,0,0,0,243,248,6,16,-1,0,244,245,10,2,0,
  	0,245,247,3,34,17,0,246,244,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,
  	249,1,0,0,0,249,33,1,0,0,0,250,248,1,0,0,0,251,252,3,36,18,0,252,253,
  	3,4,2,0,253,254,5,55,0,0,254,35,1,0,0,0,255,256,5,24,0,0,256,257,3,88,
  	44,0,257,258,3,38,19,0,258,259,5,54,0,0,259,260,3,20,10,0,260,261,5,55,
  	0,0,261,268,1,0,0,0,262,263,5,28,0,0,263,264,3,88,44,0,264,265,3,38,19,
  	0,265,266,5,55,0,0,266,268,1,0,0,0,267,255,1,0,0,0,267,262,1,0,0,0,268,
  	37,1,0,0,0,269,270,5,57,0,0,270,271,3,40,20,0,271,272,5,58,0,0,272,275,
  	1,0,0,0,273,275,1,0,0,0,274,269,1,0,0,0,274,273,1,0,0,0,275,39,1,0,0,
  	0,276,277,6,20,-1,0,277,278,3,42,21,0,278,284,1,0,0,0,279,280,10,2,0,
  	0,280,281,5,55,0,0,281,283,3,42,21,0,282,279,1,0,0,0,283,286,1,0,0,0,
  	284,282,1,0,0,0,284,285,1,0,0,0,285,41,1,0,0,0,286,284,1,0,0,0,287,290,
  	3,44,22,0,288,290,3,46,23,0,289,287,1,0,0,0,289,288,1,0,0,0,290,43,1,
  	0,0,0,291,292,5,37,0,0,292,293,3,46,23,0,293,45,1,0,0,0,294,295,3,6,3,
  	0,295,296,5,54,0,0,296,297,3,20,10,0,297,47,1,0,0,0,298,299,5,14,0,0,
  	299,300,3,50,25,0,300,301,5,21,0,0,301,49,1,0,0,0,302,303,6,25,-1,0,303,
  	304,3,52,26,0,304,310,1,0,0,0,305,306,10,2,0,0,306,307,5,55,0,0,307,309,
  	3,52,26,0,308,305,1,0,0,0,309,312,1,0,0,0,310,308,1,0,0,0,310,311,1,0,
  	0,0,311,51,1,0,0,0,312,310,1,0,0,0,313,314,3,54,27,0,314,315,5,50,0,0,
  	315,316,3,76,38,0,316,352,1,0,0,0,317,352,3,72,36,0,318,352,3,48,24,0,
  	319,320,5,25,0,0,320,321,3,76,38,0,321,322,5,32,0,0,322,323,3,52,26,0,
  	323,324,3,60,30,0,324,352,1,0,0,0,325,326,5,15,0,0,326,327,3,76,38,0,
  	327,328,5,27,0,0,328,329,3,62,31,0,329,330,5,21,0,0,330,352,1,0,0,0,331,
  	332,5,38,0,0,332,333,3,76,38,0,333,334,5,18,0,0,334,335,3,52,26,0,335,
  	352,1,0,0,0,336,337,5,31,0,0,337,338,3,50,25,0,338,339,5,36,0,0,339,340,
  	3,76,38,0,340,352,1,0,0,0,341,342,5,23,0,0,342,343,3,88,44,0,343,344,
  	5,50,0,0,344,345,3,76,38,0,345,346,3,70,35,0,346,347,3,76,38,0,347,348,
  	5,18,0,0,348,349,3,52,26,0,349,352,1,0,0,0,350,352,1,0,0,0,351,313,1,
  	0,0,0,351,317,1,0,0,0,351,318,1,0,0,0,351,319,1,0,0,0,351,325,1,0,0,0,
  	351,331,1,0,0,0,351,336,1,0,0,0,351,341,1,0,0,0,351,350,1,0,0,0,352,53,
  	1,0,0,0,353,354,3,88,44,0,354,355,3,56,28,0,355,55,1,0,0,0,356,361,6,
  	28,-1,0,357,358,10,2,0,0,358,360,3,58,29,0,359,357,1,0,0,0,360,363,1,
  	0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,57,1,0,0,0,363,361,1,0,0,0,
  	364,365,5,59,0,0,365,366,3,74,37,0,366,367,5,60,0,0,367,371,1,0,0,0,368,
  	369,5,52,0,0,369,371,3,88,44,0,370,364,1,0,0,0,370,368,1,0,0,0,371,59,
  	1,0,0,0,372,373,5,20,0,0,373,376,3,52,26,0,374,376,1,0,0,0,375,372,1,
  	0,0,0,375,374,1,0,0,0,376,61,1,0,0,0,377,380,3,64,32,0,378,380,1,0,0,
  	0,379,377,1,0,0,0,379,378,1,0,0,0,380,63,1,0,0,0,381,382,6,32,-1,0,382,
  	383,3,66,33,0,383,389,1,0,0,0,384,385,10,2,0,0,385,386,5,55,0,0,386,388,
  	3,66,33,0,387,384,1,0,0,0,388,391,1,0,0,0,389,387,1,0,0,0,389,390,1,0,
  	0,0,390,65,1,0,0,0,391,389,1,0,0,0,392,393,3,68,34,0,393,394,5,54,0,0,
  	394,395,3,52,26,0,395,67,1,0,0,0,396,397,6,34,-1,0,397,398,3,12,6,0,398,
  	404,1,0,0,0,399,400,10,2,0,0,400,401,5,53,0,0,401,403,3,12,6,0,402,399,
  	1,0,0,0,403,406,1,0,0,0,404,402,1,0,0,0,404,405,1,0,0,0,405,69,1,0,0,
  	0,406,404,1,0,0,0,407,408,7,1,0,0,408,71,1,0,0,0,409,416,3,88,44,0,410,
  	411,3,88,44,0,411,412,5,57,0,0,412,413,3,74,37,0,413,414,5,58,0,0,414,
  	416,1,0,0,0,415,409,1,0,0,0,415,410,1,0,0,0,416,73,1,0,0,0,417,418,6,
  	37,-1,0,418,419,3,76,38,0,419,425,1,0,0,0,420,421,10,2,0,0,421,422,5,
  	53,0,0,422,424,3,76,38,0,423,420,1,0,0,0,424,427,1,0,0,0,425,423,1,0,
  	0,0,425,426,1,0,0,0,426,75,1,0,0,0,427,425,1,0,0,0,428,429,3,78,39,0,
  	429,430,3,90,45,0,430,431,3,78,39,0,431,434,1,0,0,0,432,434,3,78,39,0,
  	433,428,1,0,0,0,433,432,1,0,0,0,434,77,1,0,0,0,435,436,6,39,-1,0,436,
  	442,3,80,40,0,437,438,5,46,0,0,438,442,3,80,40,0,439,440,5,47,0,0,440,
  	442,3,80,40,0,441,435,1,0,0,0,441,437,1,0,0,0,441,439,1,0,0,0,442,449,
  	1,0,0,0,443,444,10,1,0,0,444,445,3,92,46,0,445,446,3,80,40,0,446,448,
  	1,0,0,0,447,443,1,0,0,0,448,451,1,0,0,0,449,447,1,0,0,0,449,450,1,0,0,
  	0,450,79,1,0,0,0,451,449,1,0,0,0,452,453,6,40,-1,0,453,454,3,84,42,0,
  	454,461,1,0,0,0,455,456,10,2,0,0,456,457,3,94,47,0,457,458,3,84,42,0,
  	458,460,1,0,0,0,459,455,1,0,0,0,460,463,1,0,0,0,461,459,1,0,0,0,461,462,
  	1,0,0,0,462,81,1,0,0,0,463,461,1,0,0,0,464,465,7,2,0,0,465,83,1,0,0,0,
  	466,481,3,86,43,0,467,481,3,54,27,0,468,469,3,88,44,0,469,470,5,57,0,
  	0,470,471,3,74,37,0,471,472,5,58,0,0,472,481,1,0,0,0,473,474,5,57,0,0,
  	474,475,3,76,38,0,475,476,5,58,0,0,476,481,1,0,0,0,477,478,5,8,0,0,478,
  	481,3,84,42,0,479,481,3,82,41,0,480,466,1,0,0,0,480,467,1,0,0,0,480,468,
  	1,0,0,0,480,473,1,0,0,0,480,477,1,0,0,0,480,479,1,0,0,0,481,85,1,0,0,
  	0,482,488,3,88,44,0,483,488,5,40,0,0,484,485,5,56,0,0,485,486,5,39,0,
  	0,486,488,5,56,0,0,487,482,1,0,0,0,487,483,1,0,0,0,487,484,1,0,0,0,488,
  	87,1,0,0,0,489,493,5,39,0,0,490,492,7,3,0,0,491,490,1,0,0,0,492,495,1,
  	0,0,0,493,491,1,0,0,0,493,494,1,0,0,0,494,89,1,0,0,0,495,493,1,0,0,0,
  	496,497,7,4,0,0,497,91,1,0,0,0,498,499,7,5,0,0,499,93,1,0,0,0,500,501,
  	7,6,0,0,501,95,1,0,0,0,33,121,129,144,160,167,182,197,203,213,225,240,
  	248,267,274,284,289,310,351,361,370,375,379,389,404,415,425,433,441,449,
  	461,480,487,493
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
    setState(96);
    programHead();
    setState(97);
    programBody();
    setState(98);
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

PascalSParser::IdentifierContext* PascalSParser::ProgramHeadContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(100);
    match(PascalSParser::PROGRAM);
    setState(101);
    identifier();
    setState(102);
    match(PascalSParser::LPAREN);
    setState(103);
    identifierList(0);
    setState(104);
    match(PascalSParser::RPAREN);
    setState(105);
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
    setState(107);
    constDeclarations();
    setState(108);
    typeDeclarations();
    setState(109);
    varDeclarations();
    setState(110);
    subprogramDeclarations(0);
    setState(111);
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

PascalSParser::IdentifierContext* PascalSParser::IdentifierListContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(114);
    identifier();
    _ctx->stop = _input->LT(-1);
    setState(121);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(116);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(117);
        match(PascalSParser::COMMA);
        setState(118);
        identifier(); 
      }
      setState(123);
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
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      match(PascalSParser::CONST);
      setState(125);
      constDeclaration(0);
      setState(126);
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

PascalSParser::IdentifierContext* PascalSParser::ConstDeclarationContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(132);
    identifier();
    setState(133);
    match(PascalSParser::EQUAL);
    setState(134);
    constVariable();
    _ctx->stop = _input->LT(-1);
    setState(144);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConstDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConstDeclaration);
        setState(136);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(137);
        match(PascalSParser::SEMICOLON);
        setState(138);
        identifier();
        setState(139);
        match(PascalSParser::EQUAL);
        setState(140);
        constVariable(); 
      }
      setState(146);
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

PascalSParser::IdentifierContext* PascalSParser::ConstVariableContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      match(PascalSParser::PLUS);
      setState(148);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(PascalSParser::MINUS);
      setState(150);
      identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(151);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(152);
      match(PascalSParser::PLUS);
      setState(153);
      match(PascalSParser::NUM);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(154);
      match(PascalSParser::MINUS);
      setState(155);
      match(PascalSParser::NUM);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(156);
      match(PascalSParser::NUM);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(157);
      match(PascalSParser::QUOTE);
      setState(158);
      match(PascalSParser::LETTER);
      setState(159);
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
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(162);
      match(PascalSParser::TYPE);
      setState(163);
      typeDeclaration(0);
      setState(164);
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

PascalSParser::IdentifierContext* PascalSParser::TypeDeclarationContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(170);
    identifier();
    setState(171);
    match(PascalSParser::EQUAL);
    setState(172);
    type();
    _ctx->stop = _input->LT(-1);
    setState(182);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeDeclaration);
        setState(174);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(175);
        match(PascalSParser::SEMICOLON);
        setState(176);
        identifier();
        setState(177);
        match(PascalSParser::EQUAL);
        setState(178);
        type(); 
      }
      setState(184);
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
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::INTEGER:
      case PascalSParser::REAL:
      case PascalSParser::BOOLEAN:
      case PascalSParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        standardType();
        break;
      }

      case PascalSParser::RECORD: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        match(PascalSParser::RECORD);
        setState(187);
        recordBody();
        setState(188);
        match(PascalSParser::END);
        break;
      }

      case PascalSParser::ARRAY: {
        enterOuterAlt(_localctx, 3);
        setState(190);
        match(PascalSParser::ARRAY);
        setState(191);
        match(PascalSParser::LBRACKET);
        setState(192);
        periods(0);
        setState(193);
        match(PascalSParser::RBRACKET);
        setState(194);
        match(PascalSParser::OF);
        setState(195);
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
    setState(199);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7680) != 0))) {
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
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LETTER: {
        enterOuterAlt(_localctx, 1);
        setState(201);
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
    setState(206);
    period();
    _ctx->stop = _input->LT(-1);
    setState(213);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PeriodsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePeriods);
        setState(208);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(209);
        match(PascalSParser::COMMA);
        setState(210);
        period(); 
      }
      setState(215);
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
    setState(216);
    constVariable();
    setState(217);
    match(PascalSParser::PERIODOP);
    setState(218);
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
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(220);
      match(PascalSParser::VAR);
      setState(221);
      varDeclaration(0);
      setState(222);
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
    setState(228);
    identifierList(0);
    setState(229);
    match(PascalSParser::COLON);
    setState(230);
    type();
    _ctx->stop = _input->LT(-1);
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VarDeclarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVarDeclaration);
        setState(232);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(233);
        match(PascalSParser::SEMICOLON);
        setState(234);
        identifierList(0);
        setState(235);
        match(PascalSParser::COLON);
        setState(236);
        type(); 
      }
      setState(242);
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
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SubprogramDeclarationsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSubprogramDeclarations);
        setState(244);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(245);
        subprogramDeclaration(); 
      }
      setState(250);
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
    setState(251);
    subprogramHead();
    setState(252);
    programBody();
    setState(253);
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

PascalSParser::IdentifierContext* PascalSParser::SubprogramHeadContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(267);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(255);
        match(PascalSParser::FUNCTION);
        setState(256);
        identifier();
        setState(257);
        formalParameter();
        setState(258);
        match(PascalSParser::COLON);
        setState(259);
        standardType();
        setState(260);
        match(PascalSParser::SEMICOLON);
        break;
      }

      case PascalSParser::PROCEDURE: {
        enterOuterAlt(_localctx, 2);
        setState(262);
        match(PascalSParser::PROCEDURE);
        setState(263);
        identifier();
        setState(264);
        formalParameter();
        setState(265);
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
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(269);
        match(PascalSParser::LPAREN);
        setState(270);
        parameterLists(0);
        setState(271);
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
    setState(277);
    parameterList();
    _ctx->stop = _input->LT(-1);
    setState(284);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterListsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterLists);
        setState(279);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(280);
        match(PascalSParser::SEMICOLON);
        setState(281);
        parameterList(); 
      }
      setState(286);
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
    setState(289);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(287);
        varParameter();
        break;
      }

      case PascalSParser::LETTER: {
        enterOuterAlt(_localctx, 2);
        setState(288);
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
    setState(291);
    match(PascalSParser::VAR);
    setState(292);
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
    setState(294);
    identifierList(0);
    setState(295);
    match(PascalSParser::COLON);
    setState(296);
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
    setState(298);
    match(PascalSParser::BEGIN);
    setState(299);
    statementList(0);
    setState(300);
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
    setState(303);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementList);
        setState(305);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(306);
        match(PascalSParser::SEMICOLON);
        setState(307);
        statement(); 
      }
      setState(312);
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

PascalSParser::IdentifierContext* PascalSParser::ForStatementContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PascalSParser::AssignmentStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(313);
      variable();
      setState(314);
      match(PascalSParser::ASSIGNOP);
      setState(315);
      expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PascalSParser::StatementCallProcedureStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(317);
      callProcedureStatement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PascalSParser::StatementCompoundStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(318);
      compoundStatement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PascalSParser::IfStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(319);
      match(PascalSParser::IF);
      setState(320);
      expression();
      setState(321);
      match(PascalSParser::THEN);
      setState(322);
      statement();
      setState(323);
      elsePart();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PascalSParser::CaseStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(325);
      match(PascalSParser::CASE);
      setState(326);
      expression();
      setState(327);
      match(PascalSParser::OF);
      setState(328);
      caseBody();
      setState(329);
      match(PascalSParser::END);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PascalSParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(331);
      match(PascalSParser::WHILE);
      setState(332);
      expression();
      setState(333);
      match(PascalSParser::DO);
      setState(334);
      statement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PascalSParser::RepeatStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(336);
      match(PascalSParser::REPEAT);
      setState(337);
      statementList(0);
      setState(338);
      match(PascalSParser::UNTIL);
      setState(339);
      expression();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PascalSParser::ForStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(341);
      match(PascalSParser::FOR);
      setState(342);
      identifier();
      setState(343);
      match(PascalSParser::ASSIGNOP);
      setState(344);
      expression();
      setState(345);
      updown();
      setState(346);
      expression();
      setState(347);
      match(PascalSParser::DO);
      setState(348);
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

PascalSParser::IdentifierContext* PascalSParser::VariableContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(353);
    identifier();
    setState(354);
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
    setState(361);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdVarpartsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdVarparts);
        setState(357);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(358);
        idVarpart(); 
      }
      setState(363);
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

PascalSParser::IdentifierContext* PascalSParser::IdVarpartContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(370);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(364);
        match(PascalSParser::LBRACKET);
        setState(365);
        expressionList(0);
        setState(366);
        match(PascalSParser::RBRACKET);
        break;
      }

      case PascalSParser::DOT: {
        enterOuterAlt(_localctx, 2);
        setState(368);
        match(PascalSParser::DOT);
        setState(369);
        identifier();
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
    setState(375);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(372);
      match(PascalSParser::ELSE);
      setState(373);
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
    setState(379);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LETTER:
      case PascalSParser::NUM:
      case PascalSParser::PLUS:
      case PascalSParser::MINUS:
      case PascalSParser::QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(377);
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
    setState(382);
    branch();
    _ctx->stop = _input->LT(-1);
    setState(389);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BranchListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBranchList);
        setState(384);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(385);
        match(PascalSParser::SEMICOLON);
        setState(386);
        branch(); 
      }
      setState(391);
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
    setState(392);
    constList(0);
    setState(393);
    match(PascalSParser::COLON);
    setState(394);
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
    setState(397);
    constVariable();
    _ctx->stop = _input->LT(-1);
    setState(404);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConstListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConstList);
        setState(399);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(400);
        match(PascalSParser::COMMA);
        setState(401);
        constVariable(); 
      }
      setState(406);
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
    setState(407);
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

PascalSParser::IdentifierContext* PascalSParser::CallProcedureStatementContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(415);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(409);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(410);
      identifier();
      setState(411);
      match(PascalSParser::LPAREN);
      setState(412);
      expressionList(0);
      setState(413);
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
    setState(418);
    expression();
    _ctx->stop = _input->LT(-1);
    setState(425);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpressionList);
        setState(420);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(421);
        match(PascalSParser::COMMA);
        setState(422);
        expression(); 
      }
      setState(427);
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

PascalSParser::RelationalOpreatorContext* PascalSParser::ExpressionContext::relationalOpreator() {
  return getRuleContext<PascalSParser::RelationalOpreatorContext>(0);
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
    setState(433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(428);
      simpleExpression(0);
      setState(429);
      relationalOpreator();
      setState(430);
      simpleExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(432);
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

PascalSParser::AddOperatorContext* PascalSParser::SimpleExpressionContext::addOperator() {
  return getRuleContext<PascalSParser::AddOperatorContext>(0);
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
    setState(441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::NOT:
      case PascalSParser::FALSE:
      case PascalSParser::TRUE:
      case PascalSParser::LETTER:
      case PascalSParser::NUM:
      case PascalSParser::QUOTE:
      case PascalSParser::LPAREN: {
        setState(436);
        term(0);
        break;
      }

      case PascalSParser::PLUS: {
        setState(437);
        match(PascalSParser::PLUS);
        setState(438);
        term(0);
        break;
      }

      case PascalSParser::MINUS: {
        setState(439);
        match(PascalSParser::MINUS);
        setState(440);
        term(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(449);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SimpleExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimpleExpression);
        setState(443);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(444);
        addOperator();
        setState(445);
        term(0); 
      }
      setState(451);
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

PascalSParser::MultiplyOperatorContext* PascalSParser::TermContext::multiplyOperator() {
  return getRuleContext<PascalSParser::MultiplyOperatorContext>(0);
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
    setState(453);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(461);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(455);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(456);
        multiplyOperator();
        setState(457);
        factor(); 
      }
      setState(463);
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
    setState(464);
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

PascalSParser::IdentifierContext* PascalSParser::FactorContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(466);
      unsignConstVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(467);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
      identifier();
      setState(469);
      match(PascalSParser::LPAREN);
      setState(470);
      expressionList(0);
      setState(471);
      match(PascalSParser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(473);
      match(PascalSParser::LPAREN);
      setState(474);
      expression();
      setState(475);
      match(PascalSParser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(477);
      match(PascalSParser::NOT);
      setState(478);
      factor();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(479);
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

PascalSParser::IdentifierContext* PascalSParser::UnsignConstVariableContext::identifier() {
  return getRuleContext<PascalSParser::IdentifierContext>(0);
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
    setState(487);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::LETTER: {
        enterOuterAlt(_localctx, 1);
        setState(482);
        identifier();
        break;
      }

      case PascalSParser::NUM: {
        enterOuterAlt(_localctx, 2);
        setState(483);
        match(PascalSParser::NUM);
        break;
      }

      case PascalSParser::QUOTE: {
        enterOuterAlt(_localctx, 3);
        setState(484);
        match(PascalSParser::QUOTE);
        setState(485);
        match(PascalSParser::LETTER);
        setState(486);
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

//----------------- IdentifierContext ------------------------------------------------------------------

PascalSParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalSParser::IdentifierContext::LETTER() {
  return getTokens(PascalSParser::LETTER);
}

tree::TerminalNode* PascalSParser::IdentifierContext::LETTER(size_t i) {
  return getToken(PascalSParser::LETTER, i);
}

std::vector<tree::TerminalNode *> PascalSParser::IdentifierContext::DIGIT() {
  return getTokens(PascalSParser::DIGIT);
}

tree::TerminalNode* PascalSParser::IdentifierContext::DIGIT(size_t i) {
  return getToken(PascalSParser::DIGIT, i);
}


size_t PascalSParser::IdentifierContext::getRuleIndex() const {
  return PascalSParser::RuleIdentifier;
}


std::any PascalSParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::IdentifierContext* PascalSParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 88, PascalSParser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(PascalSParser::LETTER);
    setState(493);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(490);
        _la = _input->LA(1);
        if (!(_la == PascalSParser::LETTER

        || _la == PascalSParser::DIGIT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(495);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalOpreatorContext ------------------------------------------------------------------

PascalSParser::RelationalOpreatorContext::RelationalOpreatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::RelationalOpreatorContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}


size_t PascalSParser::RelationalOpreatorContext::getRuleIndex() const {
  return PascalSParser::RuleRelationalOpreator;
}


std::any PascalSParser::RelationalOpreatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitRelationalOpreator(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::RelationalOpreatorContext* PascalSParser::relationalOpreator() {
  RelationalOpreatorContext *_localctx = _tracker.createInstance<RelationalOpreatorContext>(_ctx, getState());
  enterRule(_localctx, 90, PascalSParser::RuleRelationalOpreator);
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
    setState(496);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184372088894) != 0))) {
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

//----------------- AddOperatorContext ------------------------------------------------------------------

PascalSParser::AddOperatorContext::AddOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::AddOperatorContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::AddOperatorContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

tree::TerminalNode* PascalSParser::AddOperatorContext::OR() {
  return getToken(PascalSParser::OR, 0);
}


size_t PascalSParser::AddOperatorContext::getRuleIndex() const {
  return PascalSParser::RuleAddOperator;
}


std::any PascalSParser::AddOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitAddOperator(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::AddOperatorContext* PascalSParser::addOperator() {
  AddOperatorContext *_localctx = _tracker.createInstance<AddOperatorContext>(_ctx, getState());
  enterRule(_localctx, 92, PascalSParser::RuleAddOperator);
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
    setState(498);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 211106232533120) != 0))) {
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

//----------------- MultiplyOperatorContext ------------------------------------------------------------------

PascalSParser::MultiplyOperatorContext::MultiplyOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::MultiplyOperatorContext::MULT() {
  return getToken(PascalSParser::MULT, 0);
}

tree::TerminalNode* PascalSParser::MultiplyOperatorContext::DIVIDE() {
  return getToken(PascalSParser::DIVIDE, 0);
}

tree::TerminalNode* PascalSParser::MultiplyOperatorContext::DIV() {
  return getToken(PascalSParser::DIV, 0);
}

tree::TerminalNode* PascalSParser::MultiplyOperatorContext::MOD() {
  return getToken(PascalSParser::MOD, 0);
}

tree::TerminalNode* PascalSParser::MultiplyOperatorContext::AND() {
  return getToken(PascalSParser::AND, 0);
}


size_t PascalSParser::MultiplyOperatorContext::getRuleIndex() const {
  return PascalSParser::RuleMultiplyOperator;
}


std::any PascalSParser::MultiplyOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitMultiplyOperator(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::MultiplyOperatorContext* PascalSParser::multiplyOperator() {
  MultiplyOperatorContext *_localctx = _tracker.createInstance<MultiplyOperatorContext>(_ctx, getState());
  enterRule(_localctx, 94, PascalSParser::RuleMultiplyOperator);
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
    setState(500);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 844424997371968) != 0))) {
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
