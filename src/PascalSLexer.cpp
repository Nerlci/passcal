
// Generated from src/PascalS.g4 by ANTLR 4.13.2


#include "PascalSLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PascalSLexerStaticData final {
  PascalSLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalSLexerStaticData(const PascalSLexerStaticData&) = delete;
  PascalSLexerStaticData(PascalSLexerStaticData&&) = delete;
  PascalSLexerStaticData& operator=(const PascalSLexerStaticData&) = delete;
  PascalSLexerStaticData& operator=(PascalSLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascalslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PascalSLexerStaticData> pascalslexerLexerStaticData = nullptr;

void pascalslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascalslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pascalslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalSLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "WS", "PROGRAM", "BEGIN", "END", "VAR", "INTEGER", 
      "IDENTIFIER", "NUMBER"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'.'", "','", "':'", "':='", "'+'", "'-'", "'*'", "'/'", 
      "'('", "')'", "", "'program'", "'begin'", "'end'", "'var'", "'integer'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "WS", "PROGRAM", "BEGIN", 
      "END", "VAR", "INTEGER", "IDENTIFIER", "NUMBER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,19,111,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,
  	1,11,4,11,64,8,11,11,11,12,11,65,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,
  	15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,5,17,102,
  	8,17,10,17,12,17,105,9,17,1,18,4,18,108,8,18,11,18,12,18,109,0,0,19,1,
  	1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,1,0,4,3,0,9,10,13,13,32,32,3,0,65,90,95,95,
  	97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,113,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,1,39,1,0,0,0,3,41,1,0,0,0,5,43,1,0,0,0,7,45,1,0,0,0,9,47,
  	1,0,0,0,11,50,1,0,0,0,13,52,1,0,0,0,15,54,1,0,0,0,17,56,1,0,0,0,19,58,
  	1,0,0,0,21,60,1,0,0,0,23,63,1,0,0,0,25,69,1,0,0,0,27,77,1,0,0,0,29,83,
  	1,0,0,0,31,87,1,0,0,0,33,91,1,0,0,0,35,99,1,0,0,0,37,107,1,0,0,0,39,40,
  	5,59,0,0,40,2,1,0,0,0,41,42,5,46,0,0,42,4,1,0,0,0,43,44,5,44,0,0,44,6,
  	1,0,0,0,45,46,5,58,0,0,46,8,1,0,0,0,47,48,5,58,0,0,48,49,5,61,0,0,49,
  	10,1,0,0,0,50,51,5,43,0,0,51,12,1,0,0,0,52,53,5,45,0,0,53,14,1,0,0,0,
  	54,55,5,42,0,0,55,16,1,0,0,0,56,57,5,47,0,0,57,18,1,0,0,0,58,59,5,40,
  	0,0,59,20,1,0,0,0,60,61,5,41,0,0,61,22,1,0,0,0,62,64,7,0,0,0,63,62,1,
  	0,0,0,64,65,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,67,1,0,0,0,67,68,6,
  	11,0,0,68,24,1,0,0,0,69,70,5,112,0,0,70,71,5,114,0,0,71,72,5,111,0,0,
  	72,73,5,103,0,0,73,74,5,114,0,0,74,75,5,97,0,0,75,76,5,109,0,0,76,26,
  	1,0,0,0,77,78,5,98,0,0,78,79,5,101,0,0,79,80,5,103,0,0,80,81,5,105,0,
  	0,81,82,5,110,0,0,82,28,1,0,0,0,83,84,5,101,0,0,84,85,5,110,0,0,85,86,
  	5,100,0,0,86,30,1,0,0,0,87,88,5,118,0,0,88,89,5,97,0,0,89,90,5,114,0,
  	0,90,32,1,0,0,0,91,92,5,105,0,0,92,93,5,110,0,0,93,94,5,116,0,0,94,95,
  	5,101,0,0,95,96,5,103,0,0,96,97,5,101,0,0,97,98,5,114,0,0,98,34,1,0,0,
  	0,99,103,7,1,0,0,100,102,7,2,0,0,101,100,1,0,0,0,102,105,1,0,0,0,103,
  	101,1,0,0,0,103,104,1,0,0,0,104,36,1,0,0,0,105,103,1,0,0,0,106,108,7,
  	3,0,0,107,106,1,0,0,0,108,109,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,
  	110,38,1,0,0,0,4,0,65,103,109,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascalslexerLexerStaticData = std::move(staticData);
}

}

PascalSLexer::PascalSLexer(CharStream *input) : Lexer(input) {
  PascalSLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pascalslexerLexerStaticData->atn, pascalslexerLexerStaticData->decisionToDFA, pascalslexerLexerStaticData->sharedContextCache);
}

PascalSLexer::~PascalSLexer() {
  delete _interpreter;
}

std::string PascalSLexer::getGrammarFileName() const {
  return "PascalS.g4";
}

const std::vector<std::string>& PascalSLexer::getRuleNames() const {
  return pascalslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PascalSLexer::getChannelNames() const {
  return pascalslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PascalSLexer::getModeNames() const {
  return pascalslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PascalSLexer::getVocabulary() const {
  return pascalslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PascalSLexer::getSerializedATN() const {
  return pascalslexerLexerStaticData->serializedATN;
}

const atn::ATN& PascalSLexer::getATN() const {
  return *pascalslexerLexerStaticData->atn;
}




void PascalSLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascalslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pascalslexerLexerOnceFlag, pascalslexerLexerInitialize);
#endif
}
