
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
      "program", "program_head", "program_body", "identifier_list", "const_declarations", 
      "const_declaration", "const_variable", "type_declarations", "type_declaration", 
      "type", "standard_type", "record_body", "periods", "period", "var_declarations", 
      "var_declaration", "subprogram_declarations", "subprogram_declaration", 
      "subprogram_head", "formal_parameter", "parameter_lists", "parameter_list", 
      "var_parameter", "value_parameter", "compound_statement", "statement_list", 
      "statement", "variable", "id_varparts", "id_varpart", "else_part", 
      "case_body", "branch_list", "branch", "const_list", "updown", "call_procedure_statement", 
      "expression_list", "expression", "simple_expression", "term", "factor", 
      "unsign_const_variable"
    },
    std::vector<std::string>{
      "", "'.'", "'('", "')'", "';'", "','", "'''", "'['", "']'", "'..'", 
      "':'", "", "'='", "", "", "'+'", "'-'", "'*'", "'/'", "':='", "'and'", 
      "'or'", "'not'", "'integer'", "'real'", "'boolean'", "'char'", "'array'", 
      "'begin'", "'case'", "'const'", "'div'", "'do'", "'downto'", "'else'", 
      "'end'", "'for'", "'function'", "'if'", "'mod'", "'of'", "'procedure'", 
      "'program'", "'record'", "'repeat'", "'then'", "'to'", "'type'", "'until'", 
      "'var'", "'while'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "RELOP", "EQUAL", "ADDOP", 
      "MULOP", "PLUS", "MINUS", "MULT", "DIVIDE", "ASSIGNOP", "AND", "OR", 
      "NOT", "INTEGER", "REAL", "BOOLEAN", "CHAR", "ARRAY", "BEGIN", "CASE", 
      "CONST", "DIV", "DO", "DOWNTO", "ELSE", "END", "FOR", "FUNCTION", 
      "IF", "MOD", "OF", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "THEN", 
      "TO", "TYPE", "UNTIL", "VAR", "WHILE", "ID", "LETTER", "NUM", "EXPONENT", 
      "FRAC", "DIGITS", "DIGIT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,59,473,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,110,8,3,10,3,12,3,113,9,3,1,4,1,4,1,4,1,
  	4,1,4,3,4,120,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,132,8,5,
  	10,5,12,5,135,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	3,6,150,8,6,1,7,1,7,1,7,1,7,1,7,3,7,157,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,5,8,169,8,8,10,8,12,8,172,9,8,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,3,9,186,8,9,1,10,1,10,1,11,1,11,3,11,192,8,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,5,12,200,8,12,10,12,12,12,203,9,12,1,13,1,
  	13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,3,14,214,8,14,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,227,8,15,10,15,12,15,230,9,
  	15,1,16,1,16,1,16,5,16,235,8,16,10,16,12,16,238,9,16,1,17,1,17,1,17,1,
  	17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,256,
  	8,18,1,19,1,19,1,19,1,19,1,19,3,19,263,8,19,1,20,1,20,1,20,1,20,1,20,
  	1,20,5,20,271,8,20,10,20,12,20,274,9,20,1,21,1,21,3,21,278,8,21,1,22,
  	1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	1,25,1,25,5,25,297,8,25,10,25,12,25,300,9,25,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,3,26,340,8,26,1,27,1,27,1,27,1,28,1,28,1,28,
  	5,28,348,8,28,10,28,12,28,351,9,28,1,29,1,29,1,29,1,29,1,29,1,29,3,29,
  	359,8,29,1,30,1,30,1,30,3,30,364,8,30,1,31,1,31,3,31,368,8,31,1,32,1,
  	32,1,32,1,32,1,32,1,32,5,32,376,8,32,10,32,12,32,379,9,32,1,33,1,33,1,
  	33,1,33,1,34,1,34,1,34,1,34,1,34,1,34,5,34,391,8,34,10,34,12,34,394,9,
  	34,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,36,3,36,404,8,36,1,37,1,37,1,
  	37,1,37,1,37,1,37,5,37,412,8,37,10,37,12,37,415,9,37,1,38,1,38,1,38,1,
  	38,1,38,3,38,422,8,38,1,39,1,39,1,39,1,39,1,39,1,39,3,39,430,8,39,1,39,
  	1,39,1,39,5,39,435,8,39,10,39,12,39,438,9,39,1,40,1,40,1,40,1,40,1,40,
  	1,40,5,40,446,8,40,10,40,12,40,449,9,40,1,41,1,41,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,1,41,1,41,3,41,464,8,41,1,42,1,42,1,42,1,42,
  	1,42,3,42,471,8,42,1,42,0,14,6,10,16,24,30,32,40,50,56,64,68,74,78,80,
  	43,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,0,2,1,0,23,26,
  	2,0,33,33,46,46,479,0,86,1,0,0,0,2,90,1,0,0,0,4,97,1,0,0,0,6,103,1,0,
  	0,0,8,119,1,0,0,0,10,121,1,0,0,0,12,149,1,0,0,0,14,156,1,0,0,0,16,158,
  	1,0,0,0,18,185,1,0,0,0,20,187,1,0,0,0,22,191,1,0,0,0,24,193,1,0,0,0,26,
  	204,1,0,0,0,28,213,1,0,0,0,30,215,1,0,0,0,32,231,1,0,0,0,34,239,1,0,0,
  	0,36,255,1,0,0,0,38,262,1,0,0,0,40,264,1,0,0,0,42,277,1,0,0,0,44,279,
  	1,0,0,0,46,282,1,0,0,0,48,286,1,0,0,0,50,290,1,0,0,0,52,339,1,0,0,0,54,
  	341,1,0,0,0,56,344,1,0,0,0,58,358,1,0,0,0,60,363,1,0,0,0,62,367,1,0,0,
  	0,64,369,1,0,0,0,66,380,1,0,0,0,68,384,1,0,0,0,70,395,1,0,0,0,72,403,
  	1,0,0,0,74,405,1,0,0,0,76,421,1,0,0,0,78,429,1,0,0,0,80,439,1,0,0,0,82,
  	463,1,0,0,0,84,470,1,0,0,0,86,87,3,2,1,0,87,88,3,4,2,0,88,89,5,1,0,0,
  	89,1,1,0,0,0,90,91,5,42,0,0,91,92,5,51,0,0,92,93,5,2,0,0,93,94,3,6,3,
  	0,94,95,5,3,0,0,95,96,5,4,0,0,96,3,1,0,0,0,97,98,3,8,4,0,98,99,3,14,7,
  	0,99,100,3,28,14,0,100,101,3,32,16,0,101,102,3,48,24,0,102,5,1,0,0,0,
  	103,104,6,3,-1,0,104,105,5,51,0,0,105,111,1,0,0,0,106,107,10,2,0,0,107,
  	108,5,5,0,0,108,110,5,51,0,0,109,106,1,0,0,0,110,113,1,0,0,0,111,109,
  	1,0,0,0,111,112,1,0,0,0,112,7,1,0,0,0,113,111,1,0,0,0,114,115,5,30,0,
  	0,115,116,3,10,5,0,116,117,5,4,0,0,117,120,1,0,0,0,118,120,1,0,0,0,119,
  	114,1,0,0,0,119,118,1,0,0,0,120,9,1,0,0,0,121,122,6,5,-1,0,122,123,5,
  	51,0,0,123,124,5,12,0,0,124,125,3,12,6,0,125,133,1,0,0,0,126,127,10,2,
  	0,0,127,128,5,4,0,0,128,129,5,51,0,0,129,130,5,12,0,0,130,132,3,12,6,
  	0,131,126,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,
  	11,1,0,0,0,135,133,1,0,0,0,136,137,5,15,0,0,137,150,5,51,0,0,138,139,
  	5,16,0,0,139,150,5,51,0,0,140,150,5,51,0,0,141,142,5,15,0,0,142,150,5,
  	53,0,0,143,144,5,16,0,0,144,150,5,53,0,0,145,150,5,53,0,0,146,147,5,6,
  	0,0,147,148,5,52,0,0,148,150,5,6,0,0,149,136,1,0,0,0,149,138,1,0,0,0,
  	149,140,1,0,0,0,149,141,1,0,0,0,149,143,1,0,0,0,149,145,1,0,0,0,149,146,
  	1,0,0,0,150,13,1,0,0,0,151,152,5,47,0,0,152,153,3,16,8,0,153,154,5,4,
  	0,0,154,157,1,0,0,0,155,157,1,0,0,0,156,151,1,0,0,0,156,155,1,0,0,0,157,
  	15,1,0,0,0,158,159,6,8,-1,0,159,160,5,51,0,0,160,161,5,12,0,0,161,162,
  	3,18,9,0,162,170,1,0,0,0,163,164,10,2,0,0,164,165,5,4,0,0,165,166,5,51,
  	0,0,166,167,5,12,0,0,167,169,3,18,9,0,168,163,1,0,0,0,169,172,1,0,0,0,
  	170,168,1,0,0,0,170,171,1,0,0,0,171,17,1,0,0,0,172,170,1,0,0,0,173,186,
  	3,20,10,0,174,175,5,43,0,0,175,176,3,22,11,0,176,177,5,35,0,0,177,186,
  	1,0,0,0,178,179,5,27,0,0,179,180,5,7,0,0,180,181,3,24,12,0,181,182,5,
  	8,0,0,182,183,5,40,0,0,183,184,3,18,9,0,184,186,1,0,0,0,185,173,1,0,0,
  	0,185,174,1,0,0,0,185,178,1,0,0,0,186,19,1,0,0,0,187,188,7,0,0,0,188,
  	21,1,0,0,0,189,192,3,30,15,0,190,192,1,0,0,0,191,189,1,0,0,0,191,190,
  	1,0,0,0,192,23,1,0,0,0,193,194,6,12,-1,0,194,195,3,26,13,0,195,201,1,
  	0,0,0,196,197,10,2,0,0,197,198,5,5,0,0,198,200,3,26,13,0,199,196,1,0,
  	0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,25,1,0,0,0,203,
  	201,1,0,0,0,204,205,3,12,6,0,205,206,5,9,0,0,206,207,3,12,6,0,207,27,
  	1,0,0,0,208,209,5,49,0,0,209,210,3,30,15,0,210,211,5,4,0,0,211,214,1,
  	0,0,0,212,214,1,0,0,0,213,208,1,0,0,0,213,212,1,0,0,0,214,29,1,0,0,0,
  	215,216,6,15,-1,0,216,217,3,6,3,0,217,218,5,10,0,0,218,219,3,18,9,0,219,
  	228,1,0,0,0,220,221,10,2,0,0,221,222,5,4,0,0,222,223,3,6,3,0,223,224,
  	5,10,0,0,224,225,3,18,9,0,225,227,1,0,0,0,226,220,1,0,0,0,227,230,1,0,
  	0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,31,1,0,0,0,230,228,1,0,0,0,231,
  	236,6,16,-1,0,232,233,10,2,0,0,233,235,3,34,17,0,234,232,1,0,0,0,235,
  	238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,33,1,0,0,0,238,236,1,
  	0,0,0,239,240,3,36,18,0,240,241,3,4,2,0,241,242,5,4,0,0,242,35,1,0,0,
  	0,243,244,5,37,0,0,244,245,5,51,0,0,245,246,3,38,19,0,246,247,5,10,0,
  	0,247,248,3,20,10,0,248,249,5,4,0,0,249,256,1,0,0,0,250,251,5,41,0,0,
  	251,252,5,51,0,0,252,253,3,38,19,0,253,254,5,4,0,0,254,256,1,0,0,0,255,
  	243,1,0,0,0,255,250,1,0,0,0,256,37,1,0,0,0,257,258,5,2,0,0,258,259,3,
  	40,20,0,259,260,5,3,0,0,260,263,1,0,0,0,261,263,1,0,0,0,262,257,1,0,0,
  	0,262,261,1,0,0,0,263,39,1,0,0,0,264,265,6,20,-1,0,265,266,3,42,21,0,
  	266,272,1,0,0,0,267,268,10,2,0,0,268,269,5,4,0,0,269,271,3,42,21,0,270,
  	267,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,1,0,0,0,273,41,1,
  	0,0,0,274,272,1,0,0,0,275,278,3,44,22,0,276,278,3,46,23,0,277,275,1,0,
  	0,0,277,276,1,0,0,0,278,43,1,0,0,0,279,280,5,49,0,0,280,281,3,46,23,0,
  	281,45,1,0,0,0,282,283,3,6,3,0,283,284,5,10,0,0,284,285,3,20,10,0,285,
  	47,1,0,0,0,286,287,5,28,0,0,287,288,3,50,25,0,288,289,5,35,0,0,289,49,
  	1,0,0,0,290,291,6,25,-1,0,291,292,3,52,26,0,292,298,1,0,0,0,293,294,10,
  	2,0,0,294,295,5,4,0,0,295,297,3,52,26,0,296,293,1,0,0,0,297,300,1,0,0,
  	0,298,296,1,0,0,0,298,299,1,0,0,0,299,51,1,0,0,0,300,298,1,0,0,0,301,
  	302,3,54,27,0,302,303,5,19,0,0,303,304,3,76,38,0,304,340,1,0,0,0,305,
  	340,3,72,36,0,306,340,3,48,24,0,307,308,5,38,0,0,308,309,3,76,38,0,309,
  	310,5,45,0,0,310,311,3,52,26,0,311,312,3,60,30,0,312,340,1,0,0,0,313,
  	314,5,29,0,0,314,315,3,76,38,0,315,316,5,40,0,0,316,317,3,62,31,0,317,
  	318,5,35,0,0,318,340,1,0,0,0,319,320,5,50,0,0,320,321,3,76,38,0,321,322,
  	5,32,0,0,322,323,3,52,26,0,323,340,1,0,0,0,324,325,5,44,0,0,325,326,3,
  	50,25,0,326,327,5,48,0,0,327,328,3,76,38,0,328,340,1,0,0,0,329,330,5,
  	36,0,0,330,331,5,51,0,0,331,332,5,19,0,0,332,333,3,76,38,0,333,334,3,
  	70,35,0,334,335,3,76,38,0,335,336,5,32,0,0,336,337,3,52,26,0,337,340,
  	1,0,0,0,338,340,1,0,0,0,339,301,1,0,0,0,339,305,1,0,0,0,339,306,1,0,0,
  	0,339,307,1,0,0,0,339,313,1,0,0,0,339,319,1,0,0,0,339,324,1,0,0,0,339,
  	329,1,0,0,0,339,338,1,0,0,0,340,53,1,0,0,0,341,342,5,51,0,0,342,343,3,
  	56,28,0,343,55,1,0,0,0,344,349,6,28,-1,0,345,346,10,2,0,0,346,348,3,58,
  	29,0,347,345,1,0,0,0,348,351,1,0,0,0,349,347,1,0,0,0,349,350,1,0,0,0,
  	350,57,1,0,0,0,351,349,1,0,0,0,352,353,5,7,0,0,353,354,3,74,37,0,354,
  	355,5,8,0,0,355,359,1,0,0,0,356,357,5,1,0,0,357,359,5,51,0,0,358,352,
  	1,0,0,0,358,356,1,0,0,0,359,59,1,0,0,0,360,361,5,34,0,0,361,364,3,52,
  	26,0,362,364,1,0,0,0,363,360,1,0,0,0,363,362,1,0,0,0,364,61,1,0,0,0,365,
  	368,3,64,32,0,366,368,1,0,0,0,367,365,1,0,0,0,367,366,1,0,0,0,368,63,
  	1,0,0,0,369,370,6,32,-1,0,370,371,3,66,33,0,371,377,1,0,0,0,372,373,10,
  	2,0,0,373,374,5,4,0,0,374,376,3,66,33,0,375,372,1,0,0,0,376,379,1,0,0,
  	0,377,375,1,0,0,0,377,378,1,0,0,0,378,65,1,0,0,0,379,377,1,0,0,0,380,
  	381,3,68,34,0,381,382,5,10,0,0,382,383,3,52,26,0,383,67,1,0,0,0,384,385,
  	6,34,-1,0,385,386,3,12,6,0,386,392,1,0,0,0,387,388,10,2,0,0,388,389,5,
  	5,0,0,389,391,3,12,6,0,390,387,1,0,0,0,391,394,1,0,0,0,392,390,1,0,0,
  	0,392,393,1,0,0,0,393,69,1,0,0,0,394,392,1,0,0,0,395,396,7,1,0,0,396,
  	71,1,0,0,0,397,404,5,51,0,0,398,399,5,51,0,0,399,400,5,2,0,0,400,401,
  	3,74,37,0,401,402,5,3,0,0,402,404,1,0,0,0,403,397,1,0,0,0,403,398,1,0,
  	0,0,404,73,1,0,0,0,405,406,6,37,-1,0,406,407,3,76,38,0,407,413,1,0,0,
  	0,408,409,10,2,0,0,409,410,5,5,0,0,410,412,3,76,38,0,411,408,1,0,0,0,
  	412,415,1,0,0,0,413,411,1,0,0,0,413,414,1,0,0,0,414,75,1,0,0,0,415,413,
  	1,0,0,0,416,417,3,78,39,0,417,418,5,11,0,0,418,419,3,78,39,0,419,422,
  	1,0,0,0,420,422,3,78,39,0,421,416,1,0,0,0,421,420,1,0,0,0,422,77,1,0,
  	0,0,423,424,6,39,-1,0,424,430,3,80,40,0,425,426,5,15,0,0,426,430,3,80,
  	40,0,427,428,5,16,0,0,428,430,3,80,40,0,429,423,1,0,0,0,429,425,1,0,0,
  	0,429,427,1,0,0,0,430,436,1,0,0,0,431,432,10,1,0,0,432,433,5,13,0,0,433,
  	435,3,80,40,0,434,431,1,0,0,0,435,438,1,0,0,0,436,434,1,0,0,0,436,437,
  	1,0,0,0,437,79,1,0,0,0,438,436,1,0,0,0,439,440,6,40,-1,0,440,441,3,82,
  	41,0,441,447,1,0,0,0,442,443,10,2,0,0,443,444,5,14,0,0,444,446,3,82,41,
  	0,445,442,1,0,0,0,446,449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,0,0,448,
  	81,1,0,0,0,449,447,1,0,0,0,450,464,3,84,42,0,451,464,3,54,27,0,452,453,
  	5,51,0,0,453,454,5,2,0,0,454,455,3,74,37,0,455,456,5,3,0,0,456,464,1,
  	0,0,0,457,458,5,2,0,0,458,459,3,76,38,0,459,460,5,3,0,0,460,464,1,0,0,
  	0,461,462,5,22,0,0,462,464,3,82,41,0,463,450,1,0,0,0,463,451,1,0,0,0,
  	463,452,1,0,0,0,463,457,1,0,0,0,463,461,1,0,0,0,464,83,1,0,0,0,465,471,
  	5,51,0,0,466,471,5,53,0,0,467,468,5,6,0,0,468,469,5,52,0,0,469,471,5,
  	6,0,0,470,465,1,0,0,0,470,466,1,0,0,0,470,467,1,0,0,0,471,85,1,0,0,0,
  	32,111,119,133,149,156,170,185,191,201,213,228,236,255,262,272,277,298,
  	339,349,358,363,367,377,392,403,413,421,429,436,447,463,470
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

PascalSParser::Program_headContext* PascalSParser::ProgramContext::program_head() {
  return getRuleContext<PascalSParser::Program_headContext>(0);
}

PascalSParser::Program_bodyContext* PascalSParser::ProgramContext::program_body() {
  return getRuleContext<PascalSParser::Program_bodyContext>(0);
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
    setState(86);
    program_head();
    setState(87);
    program_body();
    setState(88);
    match(PascalSParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_headContext ------------------------------------------------------------------

PascalSParser::Program_headContext::Program_headContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Program_headContext::PROGRAM() {
  return getToken(PascalSParser::PROGRAM, 0);
}

tree::TerminalNode* PascalSParser::Program_headContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::Identifier_listContext* PascalSParser::Program_headContext::identifier_list() {
  return getRuleContext<PascalSParser::Identifier_listContext>(0);
}


size_t PascalSParser::Program_headContext::getRuleIndex() const {
  return PascalSParser::RuleProgram_head;
}


std::any PascalSParser::Program_headContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitProgram_head(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Program_headContext* PascalSParser::program_head() {
  Program_headContext *_localctx = _tracker.createInstance<Program_headContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalSParser::RuleProgram_head);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(PascalSParser::PROGRAM);
    setState(91);
    match(PascalSParser::ID);
    setState(92);
    match(PascalSParser::T__1);
    setState(93);
    identifier_list(0);
    setState(94);
    match(PascalSParser::T__2);
    setState(95);
    match(PascalSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Program_bodyContext ------------------------------------------------------------------

PascalSParser::Program_bodyContext::Program_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Const_declarationsContext* PascalSParser::Program_bodyContext::const_declarations() {
  return getRuleContext<PascalSParser::Const_declarationsContext>(0);
}

PascalSParser::Type_declarationsContext* PascalSParser::Program_bodyContext::type_declarations() {
  return getRuleContext<PascalSParser::Type_declarationsContext>(0);
}

PascalSParser::Var_declarationsContext* PascalSParser::Program_bodyContext::var_declarations() {
  return getRuleContext<PascalSParser::Var_declarationsContext>(0);
}

PascalSParser::Subprogram_declarationsContext* PascalSParser::Program_bodyContext::subprogram_declarations() {
  return getRuleContext<PascalSParser::Subprogram_declarationsContext>(0);
}

PascalSParser::Compound_statementContext* PascalSParser::Program_bodyContext::compound_statement() {
  return getRuleContext<PascalSParser::Compound_statementContext>(0);
}


size_t PascalSParser::Program_bodyContext::getRuleIndex() const {
  return PascalSParser::RuleProgram_body;
}


std::any PascalSParser::Program_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitProgram_body(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Program_bodyContext* PascalSParser::program_body() {
  Program_bodyContext *_localctx = _tracker.createInstance<Program_bodyContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalSParser::RuleProgram_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    const_declarations();
    setState(98);
    type_declarations();
    setState(99);
    var_declarations();
    setState(100);
    subprogram_declarations(0);
    setState(101);
    compound_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Identifier_listContext ------------------------------------------------------------------

PascalSParser::Identifier_listContext::Identifier_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Identifier_listContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::Identifier_listContext* PascalSParser::Identifier_listContext::identifier_list() {
  return getRuleContext<PascalSParser::Identifier_listContext>(0);
}


size_t PascalSParser::Identifier_listContext::getRuleIndex() const {
  return PascalSParser::RuleIdentifier_list;
}


std::any PascalSParser::Identifier_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitIdentifier_list(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Identifier_listContext* PascalSParser::identifier_list() {
   return identifier_list(0);
}

PascalSParser::Identifier_listContext* PascalSParser::identifier_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Identifier_listContext *_localctx = _tracker.createInstance<Identifier_listContext>(_ctx, parentState);
  PascalSParser::Identifier_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, PascalSParser::RuleIdentifier_list, precedence);

    

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
    setState(104);
    match(PascalSParser::ID);
    _ctx->stop = _input->LT(-1);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Identifier_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifier_list);
        setState(106);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(107);
        match(PascalSParser::T__4);
        setState(108);
        match(PascalSParser::ID); 
      }
      setState(113);
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

//----------------- Const_declarationsContext ------------------------------------------------------------------

PascalSParser::Const_declarationsContext::Const_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Const_declarationsContext::CONST() {
  return getToken(PascalSParser::CONST, 0);
}

PascalSParser::Const_declarationContext* PascalSParser::Const_declarationsContext::const_declaration() {
  return getRuleContext<PascalSParser::Const_declarationContext>(0);
}


size_t PascalSParser::Const_declarationsContext::getRuleIndex() const {
  return PascalSParser::RuleConst_declarations;
}


std::any PascalSParser::Const_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConst_declarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Const_declarationsContext* PascalSParser::const_declarations() {
  Const_declarationsContext *_localctx = _tracker.createInstance<Const_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalSParser::RuleConst_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      match(PascalSParser::CONST);
      setState(115);
      const_declaration(0);
      setState(116);
      match(PascalSParser::T__3);
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

//----------------- Const_declarationContext ------------------------------------------------------------------

PascalSParser::Const_declarationContext::Const_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Const_declarationContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::Const_declarationContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::Const_variableContext* PascalSParser::Const_declarationContext::const_variable() {
  return getRuleContext<PascalSParser::Const_variableContext>(0);
}

PascalSParser::Const_declarationContext* PascalSParser::Const_declarationContext::const_declaration() {
  return getRuleContext<PascalSParser::Const_declarationContext>(0);
}


size_t PascalSParser::Const_declarationContext::getRuleIndex() const {
  return PascalSParser::RuleConst_declaration;
}


std::any PascalSParser::Const_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConst_declaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Const_declarationContext* PascalSParser::const_declaration() {
   return const_declaration(0);
}

PascalSParser::Const_declarationContext* PascalSParser::const_declaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Const_declarationContext *_localctx = _tracker.createInstance<Const_declarationContext>(_ctx, parentState);
  PascalSParser::Const_declarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, PascalSParser::RuleConst_declaration, precedence);

    

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
    setState(122);
    match(PascalSParser::ID);
    setState(123);
    match(PascalSParser::EQUAL);
    setState(124);
    const_variable();
    _ctx->stop = _input->LT(-1);
    setState(133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Const_declarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConst_declaration);
        setState(126);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(127);
        match(PascalSParser::T__3);
        setState(128);
        match(PascalSParser::ID);
        setState(129);
        match(PascalSParser::EQUAL);
        setState(130);
        const_variable(); 
      }
      setState(135);
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

//----------------- Const_variableContext ------------------------------------------------------------------

PascalSParser::Const_variableContext::Const_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Const_variableContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::Const_variableContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::Const_variableContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

tree::TerminalNode* PascalSParser::Const_variableContext::NUM() {
  return getToken(PascalSParser::NUM, 0);
}

tree::TerminalNode* PascalSParser::Const_variableContext::LETTER() {
  return getToken(PascalSParser::LETTER, 0);
}


size_t PascalSParser::Const_variableContext::getRuleIndex() const {
  return PascalSParser::RuleConst_variable;
}


std::any PascalSParser::Const_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConst_variable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Const_variableContext* PascalSParser::const_variable() {
  Const_variableContext *_localctx = _tracker.createInstance<Const_variableContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalSParser::RuleConst_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      match(PascalSParser::PLUS);
      setState(137);
      match(PascalSParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(PascalSParser::MINUS);
      setState(139);
      match(PascalSParser::ID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(140);
      match(PascalSParser::ID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(141);
      match(PascalSParser::PLUS);
      setState(142);
      match(PascalSParser::NUM);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(143);
      match(PascalSParser::MINUS);
      setState(144);
      match(PascalSParser::NUM);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(145);
      match(PascalSParser::NUM);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(146);
      match(PascalSParser::T__5);
      setState(147);
      match(PascalSParser::LETTER);
      setState(148);
      match(PascalSParser::T__5);
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

//----------------- Type_declarationsContext ------------------------------------------------------------------

PascalSParser::Type_declarationsContext::Type_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Type_declarationsContext::TYPE() {
  return getToken(PascalSParser::TYPE, 0);
}

PascalSParser::Type_declarationContext* PascalSParser::Type_declarationsContext::type_declaration() {
  return getRuleContext<PascalSParser::Type_declarationContext>(0);
}


size_t PascalSParser::Type_declarationsContext::getRuleIndex() const {
  return PascalSParser::RuleType_declarations;
}


std::any PascalSParser::Type_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitType_declarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Type_declarationsContext* PascalSParser::type_declarations() {
  Type_declarationsContext *_localctx = _tracker.createInstance<Type_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalSParser::RuleType_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(151);
      match(PascalSParser::TYPE);
      setState(152);
      type_declaration(0);
      setState(153);
      match(PascalSParser::T__3);
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

//----------------- Type_declarationContext ------------------------------------------------------------------

PascalSParser::Type_declarationContext::Type_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Type_declarationContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::Type_declarationContext::EQUAL() {
  return getToken(PascalSParser::EQUAL, 0);
}

PascalSParser::TypeContext* PascalSParser::Type_declarationContext::type() {
  return getRuleContext<PascalSParser::TypeContext>(0);
}

PascalSParser::Type_declarationContext* PascalSParser::Type_declarationContext::type_declaration() {
  return getRuleContext<PascalSParser::Type_declarationContext>(0);
}


size_t PascalSParser::Type_declarationContext::getRuleIndex() const {
  return PascalSParser::RuleType_declaration;
}


std::any PascalSParser::Type_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitType_declaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Type_declarationContext* PascalSParser::type_declaration() {
   return type_declaration(0);
}

PascalSParser::Type_declarationContext* PascalSParser::type_declaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Type_declarationContext *_localctx = _tracker.createInstance<Type_declarationContext>(_ctx, parentState);
  PascalSParser::Type_declarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, PascalSParser::RuleType_declaration, precedence);

    

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
    setState(159);
    match(PascalSParser::ID);
    setState(160);
    match(PascalSParser::EQUAL);
    setState(161);
    type();
    _ctx->stop = _input->LT(-1);
    setState(170);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Type_declarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleType_declaration);
        setState(163);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(164);
        match(PascalSParser::T__3);
        setState(165);
        match(PascalSParser::ID);
        setState(166);
        match(PascalSParser::EQUAL);
        setState(167);
        type(); 
      }
      setState(172);
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

PascalSParser::Standard_typeContext* PascalSParser::TypeContext::standard_type() {
  return getRuleContext<PascalSParser::Standard_typeContext>(0);
}

tree::TerminalNode* PascalSParser::TypeContext::RECORD() {
  return getToken(PascalSParser::RECORD, 0);
}

PascalSParser::Record_bodyContext* PascalSParser::TypeContext::record_body() {
  return getRuleContext<PascalSParser::Record_bodyContext>(0);
}

tree::TerminalNode* PascalSParser::TypeContext::END() {
  return getToken(PascalSParser::END, 0);
}

tree::TerminalNode* PascalSParser::TypeContext::ARRAY() {
  return getToken(PascalSParser::ARRAY, 0);
}

PascalSParser::PeriodsContext* PascalSParser::TypeContext::periods() {
  return getRuleContext<PascalSParser::PeriodsContext>(0);
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
    setState(185);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::INTEGER:
      case PascalSParser::REAL:
      case PascalSParser::BOOLEAN:
      case PascalSParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        standard_type();
        break;
      }

      case PascalSParser::RECORD: {
        enterOuterAlt(_localctx, 2);
        setState(174);
        match(PascalSParser::RECORD);
        setState(175);
        record_body();
        setState(176);
        match(PascalSParser::END);
        break;
      }

      case PascalSParser::ARRAY: {
        enterOuterAlt(_localctx, 3);
        setState(178);
        match(PascalSParser::ARRAY);
        setState(179);
        match(PascalSParser::T__6);
        setState(180);
        periods(0);
        setState(181);
        match(PascalSParser::T__7);
        setState(182);
        match(PascalSParser::OF);
        setState(183);
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

//----------------- Standard_typeContext ------------------------------------------------------------------

PascalSParser::Standard_typeContext::Standard_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Standard_typeContext::INTEGER() {
  return getToken(PascalSParser::INTEGER, 0);
}

tree::TerminalNode* PascalSParser::Standard_typeContext::BOOLEAN() {
  return getToken(PascalSParser::BOOLEAN, 0);
}

tree::TerminalNode* PascalSParser::Standard_typeContext::REAL() {
  return getToken(PascalSParser::REAL, 0);
}

tree::TerminalNode* PascalSParser::Standard_typeContext::CHAR() {
  return getToken(PascalSParser::CHAR, 0);
}


size_t PascalSParser::Standard_typeContext::getRuleIndex() const {
  return PascalSParser::RuleStandard_type;
}


std::any PascalSParser::Standard_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStandard_type(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Standard_typeContext* PascalSParser::standard_type() {
  Standard_typeContext *_localctx = _tracker.createInstance<Standard_typeContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalSParser::RuleStandard_type);
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
    setState(187);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
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

//----------------- Record_bodyContext ------------------------------------------------------------------

PascalSParser::Record_bodyContext::Record_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Var_declarationContext* PascalSParser::Record_bodyContext::var_declaration() {
  return getRuleContext<PascalSParser::Var_declarationContext>(0);
}


size_t PascalSParser::Record_bodyContext::getRuleIndex() const {
  return PascalSParser::RuleRecord_body;
}


std::any PascalSParser::Record_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitRecord_body(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Record_bodyContext* PascalSParser::record_body() {
  Record_bodyContext *_localctx = _tracker.createInstance<Record_bodyContext>(_ctx, getState());
  enterRule(_localctx, 22, PascalSParser::RuleRecord_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(189);
        var_declaration(0);
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
    setState(194);
    period();
    _ctx->stop = _input->LT(-1);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PeriodsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePeriods);
        setState(196);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(197);
        match(PascalSParser::T__4);
        setState(198);
        period(); 
      }
      setState(203);
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

std::vector<PascalSParser::Const_variableContext *> PascalSParser::PeriodContext::const_variable() {
  return getRuleContexts<PascalSParser::Const_variableContext>();
}

PascalSParser::Const_variableContext* PascalSParser::PeriodContext::const_variable(size_t i) {
  return getRuleContext<PascalSParser::Const_variableContext>(i);
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
    setState(204);
    const_variable();
    setState(205);
    match(PascalSParser::T__8);
    setState(206);
    const_variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationsContext ------------------------------------------------------------------

PascalSParser::Var_declarationsContext::Var_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Var_declarationsContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

PascalSParser::Var_declarationContext* PascalSParser::Var_declarationsContext::var_declaration() {
  return getRuleContext<PascalSParser::Var_declarationContext>(0);
}


size_t PascalSParser::Var_declarationsContext::getRuleIndex() const {
  return PascalSParser::RuleVar_declarations;
}


std::any PascalSParser::Var_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVar_declarations(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Var_declarationsContext* PascalSParser::var_declarations() {
  Var_declarationsContext *_localctx = _tracker.createInstance<Var_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalSParser::RuleVar_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(208);
      match(PascalSParser::VAR);
      setState(209);
      var_declaration(0);
      setState(210);
      match(PascalSParser::T__3);
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

//----------------- Var_declarationContext ------------------------------------------------------------------

PascalSParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Identifier_listContext* PascalSParser::Var_declarationContext::identifier_list() {
  return getRuleContext<PascalSParser::Identifier_listContext>(0);
}

PascalSParser::TypeContext* PascalSParser::Var_declarationContext::type() {
  return getRuleContext<PascalSParser::TypeContext>(0);
}

PascalSParser::Var_declarationContext* PascalSParser::Var_declarationContext::var_declaration() {
  return getRuleContext<PascalSParser::Var_declarationContext>(0);
}


size_t PascalSParser::Var_declarationContext::getRuleIndex() const {
  return PascalSParser::RuleVar_declaration;
}


std::any PascalSParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Var_declarationContext* PascalSParser::var_declaration() {
   return var_declaration(0);
}

PascalSParser::Var_declarationContext* PascalSParser::var_declaration(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, parentState);
  PascalSParser::Var_declarationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, PascalSParser::RuleVar_declaration, precedence);

    

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
    setState(216);
    identifier_list(0);
    setState(217);
    match(PascalSParser::T__9);
    setState(218);
    type();
    _ctx->stop = _input->LT(-1);
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Var_declarationContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVar_declaration);
        setState(220);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(221);
        match(PascalSParser::T__3);
        setState(222);
        identifier_list(0);
        setState(223);
        match(PascalSParser::T__9);
        setState(224);
        type(); 
      }
      setState(230);
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

//----------------- Subprogram_declarationsContext ------------------------------------------------------------------

PascalSParser::Subprogram_declarationsContext::Subprogram_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Subprogram_declarationsContext* PascalSParser::Subprogram_declarationsContext::subprogram_declarations() {
  return getRuleContext<PascalSParser::Subprogram_declarationsContext>(0);
}

PascalSParser::Subprogram_declarationContext* PascalSParser::Subprogram_declarationsContext::subprogram_declaration() {
  return getRuleContext<PascalSParser::Subprogram_declarationContext>(0);
}


size_t PascalSParser::Subprogram_declarationsContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogram_declarations;
}


std::any PascalSParser::Subprogram_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogram_declarations(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Subprogram_declarationsContext* PascalSParser::subprogram_declarations() {
   return subprogram_declarations(0);
}

PascalSParser::Subprogram_declarationsContext* PascalSParser::subprogram_declarations(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Subprogram_declarationsContext *_localctx = _tracker.createInstance<Subprogram_declarationsContext>(_ctx, parentState);
  PascalSParser::Subprogram_declarationsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, PascalSParser::RuleSubprogram_declarations, precedence);

    

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
    setState(236);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Subprogram_declarationsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSubprogram_declarations);
        setState(232);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(233);
        subprogram_declaration(); 
      }
      setState(238);
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

//----------------- Subprogram_declarationContext ------------------------------------------------------------------

PascalSParser::Subprogram_declarationContext::Subprogram_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Subprogram_headContext* PascalSParser::Subprogram_declarationContext::subprogram_head() {
  return getRuleContext<PascalSParser::Subprogram_headContext>(0);
}

PascalSParser::Program_bodyContext* PascalSParser::Subprogram_declarationContext::program_body() {
  return getRuleContext<PascalSParser::Program_bodyContext>(0);
}


size_t PascalSParser::Subprogram_declarationContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogram_declaration;
}


std::any PascalSParser::Subprogram_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogram_declaration(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Subprogram_declarationContext* PascalSParser::subprogram_declaration() {
  Subprogram_declarationContext *_localctx = _tracker.createInstance<Subprogram_declarationContext>(_ctx, getState());
  enterRule(_localctx, 34, PascalSParser::RuleSubprogram_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    subprogram_head();
    setState(240);
    program_body();
    setState(241);
    match(PascalSParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Subprogram_headContext ------------------------------------------------------------------

PascalSParser::Subprogram_headContext::Subprogram_headContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Subprogram_headContext::FUNCTION() {
  return getToken(PascalSParser::FUNCTION, 0);
}

tree::TerminalNode* PascalSParser::Subprogram_headContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::Formal_parameterContext* PascalSParser::Subprogram_headContext::formal_parameter() {
  return getRuleContext<PascalSParser::Formal_parameterContext>(0);
}

PascalSParser::Standard_typeContext* PascalSParser::Subprogram_headContext::standard_type() {
  return getRuleContext<PascalSParser::Standard_typeContext>(0);
}

tree::TerminalNode* PascalSParser::Subprogram_headContext::PROCEDURE() {
  return getToken(PascalSParser::PROCEDURE, 0);
}


size_t PascalSParser::Subprogram_headContext::getRuleIndex() const {
  return PascalSParser::RuleSubprogram_head;
}


std::any PascalSParser::Subprogram_headContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSubprogram_head(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Subprogram_headContext* PascalSParser::subprogram_head() {
  Subprogram_headContext *_localctx = _tracker.createInstance<Subprogram_headContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalSParser::RuleSubprogram_head);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(255);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(243);
        match(PascalSParser::FUNCTION);
        setState(244);
        match(PascalSParser::ID);
        setState(245);
        formal_parameter();
        setState(246);
        match(PascalSParser::T__9);
        setState(247);
        standard_type();
        setState(248);
        match(PascalSParser::T__3);
        break;
      }

      case PascalSParser::PROCEDURE: {
        enterOuterAlt(_localctx, 2);
        setState(250);
        match(PascalSParser::PROCEDURE);
        setState(251);
        match(PascalSParser::ID);
        setState(252);
        formal_parameter();
        setState(253);
        match(PascalSParser::T__3);
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

//----------------- Formal_parameterContext ------------------------------------------------------------------

PascalSParser::Formal_parameterContext::Formal_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Parameter_listsContext* PascalSParser::Formal_parameterContext::parameter_lists() {
  return getRuleContext<PascalSParser::Parameter_listsContext>(0);
}


size_t PascalSParser::Formal_parameterContext::getRuleIndex() const {
  return PascalSParser::RuleFormal_parameter;
}


std::any PascalSParser::Formal_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitFormal_parameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Formal_parameterContext* PascalSParser::formal_parameter() {
  Formal_parameterContext *_localctx = _tracker.createInstance<Formal_parameterContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalSParser::RuleFormal_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(257);
        match(PascalSParser::T__1);
        setState(258);
        parameter_lists(0);
        setState(259);
        match(PascalSParser::T__2);
        break;
      }

      case PascalSParser::T__3:
      case PascalSParser::T__9: {
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

//----------------- Parameter_listsContext ------------------------------------------------------------------

PascalSParser::Parameter_listsContext::Parameter_listsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Parameter_listContext* PascalSParser::Parameter_listsContext::parameter_list() {
  return getRuleContext<PascalSParser::Parameter_listContext>(0);
}

PascalSParser::Parameter_listsContext* PascalSParser::Parameter_listsContext::parameter_lists() {
  return getRuleContext<PascalSParser::Parameter_listsContext>(0);
}


size_t PascalSParser::Parameter_listsContext::getRuleIndex() const {
  return PascalSParser::RuleParameter_lists;
}


std::any PascalSParser::Parameter_listsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitParameter_lists(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Parameter_listsContext* PascalSParser::parameter_lists() {
   return parameter_lists(0);
}

PascalSParser::Parameter_listsContext* PascalSParser::parameter_lists(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Parameter_listsContext *_localctx = _tracker.createInstance<Parameter_listsContext>(_ctx, parentState);
  PascalSParser::Parameter_listsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, PascalSParser::RuleParameter_lists, precedence);

    

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
    setState(265);
    parameter_list();
    _ctx->stop = _input->LT(-1);
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Parameter_listsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameter_lists);
        setState(267);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(268);
        match(PascalSParser::T__3);
        setState(269);
        parameter_list(); 
      }
      setState(274);
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

//----------------- Parameter_listContext ------------------------------------------------------------------

PascalSParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Var_parameterContext* PascalSParser::Parameter_listContext::var_parameter() {
  return getRuleContext<PascalSParser::Var_parameterContext>(0);
}

PascalSParser::Value_parameterContext* PascalSParser::Parameter_listContext::value_parameter() {
  return getRuleContext<PascalSParser::Value_parameterContext>(0);
}


size_t PascalSParser::Parameter_listContext::getRuleIndex() const {
  return PascalSParser::RuleParameter_list;
}


std::any PascalSParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Parameter_listContext* PascalSParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalSParser::RuleParameter_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(275);
        var_parameter();
        break;
      }

      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(276);
        value_parameter();
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

//----------------- Var_parameterContext ------------------------------------------------------------------

PascalSParser::Var_parameterContext::Var_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Var_parameterContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

PascalSParser::Value_parameterContext* PascalSParser::Var_parameterContext::value_parameter() {
  return getRuleContext<PascalSParser::Value_parameterContext>(0);
}


size_t PascalSParser::Var_parameterContext::getRuleIndex() const {
  return PascalSParser::RuleVar_parameter;
}


std::any PascalSParser::Var_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitVar_parameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Var_parameterContext* PascalSParser::var_parameter() {
  Var_parameterContext *_localctx = _tracker.createInstance<Var_parameterContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalSParser::RuleVar_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(PascalSParser::VAR);
    setState(280);
    value_parameter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_parameterContext ------------------------------------------------------------------

PascalSParser::Value_parameterContext::Value_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Identifier_listContext* PascalSParser::Value_parameterContext::identifier_list() {
  return getRuleContext<PascalSParser::Identifier_listContext>(0);
}

PascalSParser::Standard_typeContext* PascalSParser::Value_parameterContext::standard_type() {
  return getRuleContext<PascalSParser::Standard_typeContext>(0);
}


size_t PascalSParser::Value_parameterContext::getRuleIndex() const {
  return PascalSParser::RuleValue_parameter;
}


std::any PascalSParser::Value_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitValue_parameter(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Value_parameterContext* PascalSParser::value_parameter() {
  Value_parameterContext *_localctx = _tracker.createInstance<Value_parameterContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalSParser::RuleValue_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    identifier_list(0);
    setState(283);
    match(PascalSParser::T__9);
    setState(284);
    standard_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

PascalSParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Compound_statementContext::BEGIN() {
  return getToken(PascalSParser::BEGIN, 0);
}

PascalSParser::Statement_listContext* PascalSParser::Compound_statementContext::statement_list() {
  return getRuleContext<PascalSParser::Statement_listContext>(0);
}

tree::TerminalNode* PascalSParser::Compound_statementContext::END() {
  return getToken(PascalSParser::END, 0);
}


size_t PascalSParser::Compound_statementContext::getRuleIndex() const {
  return PascalSParser::RuleCompound_statement;
}


std::any PascalSParser::Compound_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCompound_statement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Compound_statementContext* PascalSParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalSParser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(PascalSParser::BEGIN);
    setState(287);
    statement_list(0);
    setState(288);
    match(PascalSParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

PascalSParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::StatementContext* PascalSParser::Statement_listContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::Statement_listContext* PascalSParser::Statement_listContext::statement_list() {
  return getRuleContext<PascalSParser::Statement_listContext>(0);
}


size_t PascalSParser::Statement_listContext::getRuleIndex() const {
  return PascalSParser::RuleStatement_list;
}


std::any PascalSParser::Statement_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStatement_list(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Statement_listContext* PascalSParser::statement_list() {
   return statement_list(0);
}

PascalSParser::Statement_listContext* PascalSParser::statement_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, parentState);
  PascalSParser::Statement_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, PascalSParser::RuleStatement_list, precedence);

    

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
    setState(291);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(298);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(293);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(294);
        match(PascalSParser::T__3);
        setState(295);
        statement(); 
      }
      setState(300);
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

PascalSParser::VariableContext* PascalSParser::StatementContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

tree::TerminalNode* PascalSParser::StatementContext::ASSIGNOP() {
  return getToken(PascalSParser::ASSIGNOP, 0);
}

std::vector<PascalSParser::ExpressionContext *> PascalSParser::StatementContext::expression() {
  return getRuleContexts<PascalSParser::ExpressionContext>();
}

PascalSParser::ExpressionContext* PascalSParser::StatementContext::expression(size_t i) {
  return getRuleContext<PascalSParser::ExpressionContext>(i);
}

PascalSParser::Call_procedure_statementContext* PascalSParser::StatementContext::call_procedure_statement() {
  return getRuleContext<PascalSParser::Call_procedure_statementContext>(0);
}

PascalSParser::Compound_statementContext* PascalSParser::StatementContext::compound_statement() {
  return getRuleContext<PascalSParser::Compound_statementContext>(0);
}

tree::TerminalNode* PascalSParser::StatementContext::IF() {
  return getToken(PascalSParser::IF, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::THEN() {
  return getToken(PascalSParser::THEN, 0);
}

PascalSParser::StatementContext* PascalSParser::StatementContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}

PascalSParser::Else_partContext* PascalSParser::StatementContext::else_part() {
  return getRuleContext<PascalSParser::Else_partContext>(0);
}

tree::TerminalNode* PascalSParser::StatementContext::CASE() {
  return getToken(PascalSParser::CASE, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::OF() {
  return getToken(PascalSParser::OF, 0);
}

PascalSParser::Case_bodyContext* PascalSParser::StatementContext::case_body() {
  return getRuleContext<PascalSParser::Case_bodyContext>(0);
}

tree::TerminalNode* PascalSParser::StatementContext::END() {
  return getToken(PascalSParser::END, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::WHILE() {
  return getToken(PascalSParser::WHILE, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::DO() {
  return getToken(PascalSParser::DO, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::REPEAT() {
  return getToken(PascalSParser::REPEAT, 0);
}

PascalSParser::Statement_listContext* PascalSParser::StatementContext::statement_list() {
  return getRuleContext<PascalSParser::Statement_listContext>(0);
}

tree::TerminalNode* PascalSParser::StatementContext::UNTIL() {
  return getToken(PascalSParser::UNTIL, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::FOR() {
  return getToken(PascalSParser::FOR, 0);
}

tree::TerminalNode* PascalSParser::StatementContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::UpdownContext* PascalSParser::StatementContext::updown() {
  return getRuleContext<PascalSParser::UpdownContext>(0);
}


size_t PascalSParser::StatementContext::getRuleIndex() const {
  return PascalSParser::RuleStatement;
}


std::any PascalSParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
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
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(301);
      variable();
      setState(302);
      match(PascalSParser::ASSIGNOP);
      setState(303);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(305);
      call_procedure_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(306);
      compound_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(307);
      match(PascalSParser::IF);
      setState(308);
      expression();
      setState(309);
      match(PascalSParser::THEN);
      setState(310);
      statement();
      setState(311);
      else_part();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(313);
      match(PascalSParser::CASE);
      setState(314);
      expression();
      setState(315);
      match(PascalSParser::OF);
      setState(316);
      case_body();
      setState(317);
      match(PascalSParser::END);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(319);
      match(PascalSParser::WHILE);
      setState(320);
      expression();
      setState(321);
      match(PascalSParser::DO);
      setState(322);
      statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(324);
      match(PascalSParser::REPEAT);
      setState(325);
      statement_list(0);
      setState(326);
      match(PascalSParser::UNTIL);
      setState(327);
      expression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(329);
      match(PascalSParser::FOR);
      setState(330);
      match(PascalSParser::ID);
      setState(331);
      match(PascalSParser::ASSIGNOP);
      setState(332);
      expression();
      setState(333);
      updown();
      setState(334);
      expression();
      setState(335);
      match(PascalSParser::DO);
      setState(336);
      statement();
      break;
    }

    case 9: {
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

PascalSParser::Id_varpartsContext* PascalSParser::VariableContext::id_varparts() {
  return getRuleContext<PascalSParser::Id_varpartsContext>(0);
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
    setState(341);
    match(PascalSParser::ID);
    setState(342);
    id_varparts(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_varpartsContext ------------------------------------------------------------------

PascalSParser::Id_varpartsContext::Id_varpartsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Id_varpartsContext* PascalSParser::Id_varpartsContext::id_varparts() {
  return getRuleContext<PascalSParser::Id_varpartsContext>(0);
}

PascalSParser::Id_varpartContext* PascalSParser::Id_varpartsContext::id_varpart() {
  return getRuleContext<PascalSParser::Id_varpartContext>(0);
}


size_t PascalSParser::Id_varpartsContext::getRuleIndex() const {
  return PascalSParser::RuleId_varparts;
}


std::any PascalSParser::Id_varpartsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitId_varparts(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Id_varpartsContext* PascalSParser::id_varparts() {
   return id_varparts(0);
}

PascalSParser::Id_varpartsContext* PascalSParser::id_varparts(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Id_varpartsContext *_localctx = _tracker.createInstance<Id_varpartsContext>(_ctx, parentState);
  PascalSParser::Id_varpartsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, PascalSParser::RuleId_varparts, precedence);

    

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
    setState(349);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Id_varpartsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleId_varparts);
        setState(345);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(346);
        id_varpart(); 
      }
      setState(351);
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

//----------------- Id_varpartContext ------------------------------------------------------------------

PascalSParser::Id_varpartContext::Id_varpartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Expression_listContext* PascalSParser::Id_varpartContext::expression_list() {
  return getRuleContext<PascalSParser::Expression_listContext>(0);
}

tree::TerminalNode* PascalSParser::Id_varpartContext::ID() {
  return getToken(PascalSParser::ID, 0);
}


size_t PascalSParser::Id_varpartContext::getRuleIndex() const {
  return PascalSParser::RuleId_varpart;
}


std::any PascalSParser::Id_varpartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitId_varpart(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Id_varpartContext* PascalSParser::id_varpart() {
  Id_varpartContext *_localctx = _tracker.createInstance<Id_varpartContext>(_ctx, getState());
  enterRule(_localctx, 58, PascalSParser::RuleId_varpart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(352);
        match(PascalSParser::T__6);
        setState(353);
        expression_list(0);
        setState(354);
        match(PascalSParser::T__7);
        break;
      }

      case PascalSParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        match(PascalSParser::T__0);
        setState(357);
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

//----------------- Else_partContext ------------------------------------------------------------------

PascalSParser::Else_partContext::Else_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Else_partContext::ELSE() {
  return getToken(PascalSParser::ELSE, 0);
}

PascalSParser::StatementContext* PascalSParser::Else_partContext::statement() {
  return getRuleContext<PascalSParser::StatementContext>(0);
}


size_t PascalSParser::Else_partContext::getRuleIndex() const {
  return PascalSParser::RuleElse_part;
}


std::any PascalSParser::Else_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitElse_part(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Else_partContext* PascalSParser::else_part() {
  Else_partContext *_localctx = _tracker.createInstance<Else_partContext>(_ctx, getState());
  enterRule(_localctx, 60, PascalSParser::RuleElse_part);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      match(PascalSParser::ELSE);
      setState(361);
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

//----------------- Case_bodyContext ------------------------------------------------------------------

PascalSParser::Case_bodyContext::Case_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Branch_listContext* PascalSParser::Case_bodyContext::branch_list() {
  return getRuleContext<PascalSParser::Branch_listContext>(0);
}


size_t PascalSParser::Case_bodyContext::getRuleIndex() const {
  return PascalSParser::RuleCase_body;
}


std::any PascalSParser::Case_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCase_body(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Case_bodyContext* PascalSParser::case_body() {
  Case_bodyContext *_localctx = _tracker.createInstance<Case_bodyContext>(_ctx, getState());
  enterRule(_localctx, 62, PascalSParser::RuleCase_body);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::T__5:
      case PascalSParser::PLUS:
      case PascalSParser::MINUS:
      case PascalSParser::ID:
      case PascalSParser::NUM: {
        enterOuterAlt(_localctx, 1);
        setState(365);
        branch_list(0);
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

//----------------- Branch_listContext ------------------------------------------------------------------

PascalSParser::Branch_listContext::Branch_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::BranchContext* PascalSParser::Branch_listContext::branch() {
  return getRuleContext<PascalSParser::BranchContext>(0);
}

PascalSParser::Branch_listContext* PascalSParser::Branch_listContext::branch_list() {
  return getRuleContext<PascalSParser::Branch_listContext>(0);
}


size_t PascalSParser::Branch_listContext::getRuleIndex() const {
  return PascalSParser::RuleBranch_list;
}


std::any PascalSParser::Branch_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitBranch_list(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Branch_listContext* PascalSParser::branch_list() {
   return branch_list(0);
}

PascalSParser::Branch_listContext* PascalSParser::branch_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Branch_listContext *_localctx = _tracker.createInstance<Branch_listContext>(_ctx, parentState);
  PascalSParser::Branch_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, PascalSParser::RuleBranch_list, precedence);

    

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
    setState(370);
    branch();
    _ctx->stop = _input->LT(-1);
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Branch_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBranch_list);
        setState(372);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(373);
        match(PascalSParser::T__3);
        setState(374);
        branch(); 
      }
      setState(379);
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

PascalSParser::Const_listContext* PascalSParser::BranchContext::const_list() {
  return getRuleContext<PascalSParser::Const_listContext>(0);
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
    setState(380);
    const_list(0);
    setState(381);
    match(PascalSParser::T__9);
    setState(382);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_listContext ------------------------------------------------------------------

PascalSParser::Const_listContext::Const_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Const_variableContext* PascalSParser::Const_listContext::const_variable() {
  return getRuleContext<PascalSParser::Const_variableContext>(0);
}

PascalSParser::Const_listContext* PascalSParser::Const_listContext::const_list() {
  return getRuleContext<PascalSParser::Const_listContext>(0);
}


size_t PascalSParser::Const_listContext::getRuleIndex() const {
  return PascalSParser::RuleConst_list;
}


std::any PascalSParser::Const_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitConst_list(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Const_listContext* PascalSParser::const_list() {
   return const_list(0);
}

PascalSParser::Const_listContext* PascalSParser::const_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Const_listContext *_localctx = _tracker.createInstance<Const_listContext>(_ctx, parentState);
  PascalSParser::Const_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, PascalSParser::RuleConst_list, precedence);

    

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
    setState(385);
    const_variable();
    _ctx->stop = _input->LT(-1);
    setState(392);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Const_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConst_list);
        setState(387);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(388);
        match(PascalSParser::T__4);
        setState(389);
        const_variable(); 
      }
      setState(394);
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
    setState(395);
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

//----------------- Call_procedure_statementContext ------------------------------------------------------------------

PascalSParser::Call_procedure_statementContext::Call_procedure_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Call_procedure_statementContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::Expression_listContext* PascalSParser::Call_procedure_statementContext::expression_list() {
  return getRuleContext<PascalSParser::Expression_listContext>(0);
}


size_t PascalSParser::Call_procedure_statementContext::getRuleIndex() const {
  return PascalSParser::RuleCall_procedure_statement;
}


std::any PascalSParser::Call_procedure_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitCall_procedure_statement(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Call_procedure_statementContext* PascalSParser::call_procedure_statement() {
  Call_procedure_statementContext *_localctx = _tracker.createInstance<Call_procedure_statementContext>(_ctx, getState());
  enterRule(_localctx, 72, PascalSParser::RuleCall_procedure_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(397);
      match(PascalSParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(398);
      match(PascalSParser::ID);
      setState(399);
      match(PascalSParser::T__1);
      setState(400);
      expression_list(0);
      setState(401);
      match(PascalSParser::T__2);
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

//----------------- Expression_listContext ------------------------------------------------------------------

PascalSParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::ExpressionContext* PascalSParser::Expression_listContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}

PascalSParser::Expression_listContext* PascalSParser::Expression_listContext::expression_list() {
  return getRuleContext<PascalSParser::Expression_listContext>(0);
}


size_t PascalSParser::Expression_listContext::getRuleIndex() const {
  return PascalSParser::RuleExpression_list;
}


std::any PascalSParser::Expression_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitExpression_list(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Expression_listContext* PascalSParser::expression_list() {
   return expression_list(0);
}

PascalSParser::Expression_listContext* PascalSParser::expression_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, parentState);
  PascalSParser::Expression_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, PascalSParser::RuleExpression_list, precedence);

    

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
    setState(406);
    expression();
    _ctx->stop = _input->LT(-1);
    setState(413);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Expression_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression_list);
        setState(408);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(409);
        match(PascalSParser::T__4);
        setState(410);
        expression(); 
      }
      setState(415);
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

std::vector<PascalSParser::Simple_expressionContext *> PascalSParser::ExpressionContext::simple_expression() {
  return getRuleContexts<PascalSParser::Simple_expressionContext>();
}

PascalSParser::Simple_expressionContext* PascalSParser::ExpressionContext::simple_expression(size_t i) {
  return getRuleContext<PascalSParser::Simple_expressionContext>(i);
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
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(416);
      simple_expression(0);
      setState(417);
      match(PascalSParser::RELOP);
      setState(418);
      simple_expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(420);
      simple_expression(0);
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

//----------------- Simple_expressionContext ------------------------------------------------------------------

PascalSParser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::TermContext* PascalSParser::Simple_expressionContext::term() {
  return getRuleContext<PascalSParser::TermContext>(0);
}

tree::TerminalNode* PascalSParser::Simple_expressionContext::PLUS() {
  return getToken(PascalSParser::PLUS, 0);
}

tree::TerminalNode* PascalSParser::Simple_expressionContext::MINUS() {
  return getToken(PascalSParser::MINUS, 0);
}

PascalSParser::Simple_expressionContext* PascalSParser::Simple_expressionContext::simple_expression() {
  return getRuleContext<PascalSParser::Simple_expressionContext>(0);
}

tree::TerminalNode* PascalSParser::Simple_expressionContext::ADDOP() {
  return getToken(PascalSParser::ADDOP, 0);
}


size_t PascalSParser::Simple_expressionContext::getRuleIndex() const {
  return PascalSParser::RuleSimple_expression;
}


std::any PascalSParser::Simple_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitSimple_expression(this);
  else
    return visitor->visitChildren(this);
}


PascalSParser::Simple_expressionContext* PascalSParser::simple_expression() {
   return simple_expression(0);
}

PascalSParser::Simple_expressionContext* PascalSParser::simple_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalSParser::Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, parentState);
  PascalSParser::Simple_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, PascalSParser::RuleSimple_expression, precedence);

    

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
    setState(429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::T__1:
      case PascalSParser::T__5:
      case PascalSParser::NOT:
      case PascalSParser::ID:
      case PascalSParser::NUM: {
        setState(424);
        term(0);
        break;
      }

      case PascalSParser::PLUS: {
        setState(425);
        match(PascalSParser::PLUS);
        setState(426);
        term(0);
        break;
      }

      case PascalSParser::MINUS: {
        setState(427);
        match(PascalSParser::MINUS);
        setState(428);
        term(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(436);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Simple_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimple_expression);
        setState(431);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(432);
        match(PascalSParser::ADDOP);
        setState(433);
        term(0); 
      }
      setState(438);
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
    setState(440);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(447);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(442);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(443);
        match(PascalSParser::MULOP);
        setState(444);
        factor(); 
      }
      setState(449);
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

//----------------- FactorContext ------------------------------------------------------------------

PascalSParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalSParser::Unsign_const_variableContext* PascalSParser::FactorContext::unsign_const_variable() {
  return getRuleContext<PascalSParser::Unsign_const_variableContext>(0);
}

PascalSParser::VariableContext* PascalSParser::FactorContext::variable() {
  return getRuleContext<PascalSParser::VariableContext>(0);
}

tree::TerminalNode* PascalSParser::FactorContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

PascalSParser::Expression_listContext* PascalSParser::FactorContext::expression_list() {
  return getRuleContext<PascalSParser::Expression_listContext>(0);
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
  enterRule(_localctx, 82, PascalSParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(450);
      unsign_const_variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(451);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(452);
      match(PascalSParser::ID);
      setState(453);
      match(PascalSParser::T__1);
      setState(454);
      expression_list(0);
      setState(455);
      match(PascalSParser::T__2);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(457);
      match(PascalSParser::T__1);
      setState(458);
      expression();
      setState(459);
      match(PascalSParser::T__2);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(461);
      match(PascalSParser::NOT);
      setState(462);
      factor();
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

//----------------- Unsign_const_variableContext ------------------------------------------------------------------

PascalSParser::Unsign_const_variableContext::Unsign_const_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::Unsign_const_variableContext::ID() {
  return getToken(PascalSParser::ID, 0);
}

tree::TerminalNode* PascalSParser::Unsign_const_variableContext::NUM() {
  return getToken(PascalSParser::NUM, 0);
}

tree::TerminalNode* PascalSParser::Unsign_const_variableContext::LETTER() {
  return getToken(PascalSParser::LETTER, 0);
}


size_t PascalSParser::Unsign_const_variableContext::getRuleIndex() const {
  return PascalSParser::RuleUnsign_const_variable;
}


std::any PascalSParser::Unsign_const_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitUnsign_const_variable(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::Unsign_const_variableContext* PascalSParser::unsign_const_variable() {
  Unsign_const_variableContext *_localctx = _tracker.createInstance<Unsign_const_variableContext>(_ctx, getState());
  enterRule(_localctx, 84, PascalSParser::RuleUnsign_const_variable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(470);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(465);
        match(PascalSParser::ID);
        break;
      }

      case PascalSParser::NUM: {
        enterOuterAlt(_localctx, 2);
        setState(466);
        match(PascalSParser::NUM);
        break;
      }

      case PascalSParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(467);
        match(PascalSParser::T__5);
        setState(468);
        match(PascalSParser::LETTER);
        setState(469);
        match(PascalSParser::T__5);
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
    case 3: return identifier_listSempred(antlrcpp::downCast<Identifier_listContext *>(context), predicateIndex);
    case 5: return const_declarationSempred(antlrcpp::downCast<Const_declarationContext *>(context), predicateIndex);
    case 8: return type_declarationSempred(antlrcpp::downCast<Type_declarationContext *>(context), predicateIndex);
    case 12: return periodsSempred(antlrcpp::downCast<PeriodsContext *>(context), predicateIndex);
    case 15: return var_declarationSempred(antlrcpp::downCast<Var_declarationContext *>(context), predicateIndex);
    case 16: return subprogram_declarationsSempred(antlrcpp::downCast<Subprogram_declarationsContext *>(context), predicateIndex);
    case 20: return parameter_listsSempred(antlrcpp::downCast<Parameter_listsContext *>(context), predicateIndex);
    case 25: return statement_listSempred(antlrcpp::downCast<Statement_listContext *>(context), predicateIndex);
    case 28: return id_varpartsSempred(antlrcpp::downCast<Id_varpartsContext *>(context), predicateIndex);
    case 32: return branch_listSempred(antlrcpp::downCast<Branch_listContext *>(context), predicateIndex);
    case 34: return const_listSempred(antlrcpp::downCast<Const_listContext *>(context), predicateIndex);
    case 37: return expression_listSempred(antlrcpp::downCast<Expression_listContext *>(context), predicateIndex);
    case 39: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 40: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PascalSParser::identifier_listSempred(Identifier_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::const_declarationSempred(Const_declarationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::type_declarationSempred(Type_declarationContext *_localctx, size_t predicateIndex) {
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

bool PascalSParser::var_declarationSempred(Var_declarationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::subprogram_declarationsSempred(Subprogram_declarationsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::parameter_listsSempred(Parameter_listsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::id_varpartsSempred(Id_varpartsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::branch_listSempred(Branch_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::const_listSempred(Const_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::expression_listSempred(Expression_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PascalSParser::simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex) {
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
