
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
      "program", "block", "varDeclaration", "variable", "statementList", 
      "statement", "assignment", "expression", "term", "factor"
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
  	4,1,19,87,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,0,1,0,1,1,3,1,28,8,1,1,1,1,1,1,
  	1,1,1,1,2,1,2,1,2,1,2,5,2,38,8,2,10,2,12,2,41,9,2,1,2,1,2,1,2,1,2,1,3,
  	1,3,1,4,1,4,1,4,5,4,52,8,4,10,4,12,4,55,9,4,1,5,1,5,1,6,1,6,1,6,1,6,1,
  	7,1,7,1,7,5,7,66,8,7,10,7,12,7,69,9,7,1,8,1,8,1,8,5,8,74,8,8,10,8,12,
  	8,77,9,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,85,8,9,1,9,0,0,10,0,2,4,6,8,10,12,
  	14,16,18,0,2,1,0,6,7,1,0,8,9,83,0,20,1,0,0,0,2,27,1,0,0,0,4,33,1,0,0,
  	0,6,46,1,0,0,0,8,53,1,0,0,0,10,56,1,0,0,0,12,58,1,0,0,0,14,62,1,0,0,0,
  	16,70,1,0,0,0,18,84,1,0,0,0,20,21,5,13,0,0,21,22,5,18,0,0,22,23,5,1,0,
  	0,23,24,3,2,1,0,24,25,5,2,0,0,25,1,1,0,0,0,26,28,3,4,2,0,27,26,1,0,0,
  	0,27,28,1,0,0,0,28,29,1,0,0,0,29,30,5,14,0,0,30,31,3,8,4,0,31,32,5,15,
  	0,0,32,3,1,0,0,0,33,34,5,16,0,0,34,39,3,6,3,0,35,36,5,3,0,0,36,38,3,6,
  	3,0,37,35,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,0,
  	0,0,41,39,1,0,0,0,42,43,5,4,0,0,43,44,5,17,0,0,44,45,5,1,0,0,45,5,1,0,
  	0,0,46,47,5,18,0,0,47,7,1,0,0,0,48,49,3,10,5,0,49,50,5,1,0,0,50,52,1,
  	0,0,0,51,48,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,9,1,
  	0,0,0,55,53,1,0,0,0,56,57,3,12,6,0,57,11,1,0,0,0,58,59,5,18,0,0,59,60,
  	5,5,0,0,60,61,3,14,7,0,61,13,1,0,0,0,62,67,3,16,8,0,63,64,7,0,0,0,64,
  	66,3,16,8,0,65,63,1,0,0,0,66,69,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,
  	15,1,0,0,0,69,67,1,0,0,0,70,75,3,18,9,0,71,72,7,1,0,0,72,74,3,18,9,0,
  	73,71,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,17,1,0,0,0,
  	77,75,1,0,0,0,78,85,5,18,0,0,79,85,5,19,0,0,80,81,5,10,0,0,81,82,3,14,
  	7,0,82,83,5,11,0,0,83,85,1,0,0,0,84,78,1,0,0,0,84,79,1,0,0,0,84,80,1,
  	0,0,0,85,19,1,0,0,0,6,27,39,53,67,75,84
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

tree::TerminalNode* PascalSParser::ProgramContext::PROGRAM() {
  return getToken(PascalSParser::PROGRAM, 0);
}

tree::TerminalNode* PascalSParser::ProgramContext::IDENTIFIER() {
  return getToken(PascalSParser::IDENTIFIER, 0);
}

PascalSParser::BlockContext* PascalSParser::ProgramContext::block() {
  return getRuleContext<PascalSParser::BlockContext>(0);
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
    setState(20);
    match(PascalSParser::PROGRAM);
    setState(21);
    match(PascalSParser::IDENTIFIER);
    setState(22);
    match(PascalSParser::T__0);
    setState(23);
    block();
    setState(24);
    match(PascalSParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PascalSParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::BlockContext::BEGIN() {
  return getToken(PascalSParser::BEGIN, 0);
}

PascalSParser::StatementListContext* PascalSParser::BlockContext::statementList() {
  return getRuleContext<PascalSParser::StatementListContext>(0);
}

tree::TerminalNode* PascalSParser::BlockContext::END() {
  return getToken(PascalSParser::END, 0);
}

PascalSParser::VarDeclarationContext* PascalSParser::BlockContext::varDeclaration() {
  return getRuleContext<PascalSParser::VarDeclarationContext>(0);
}


size_t PascalSParser::BlockContext::getRuleIndex() const {
  return PascalSParser::RuleBlock;
}


std::any PascalSParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::BlockContext* PascalSParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalSParser::RuleBlock);
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
    setState(27);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalSParser::VAR) {
      setState(26);
      varDeclaration();
    }
    setState(29);
    match(PascalSParser::BEGIN);
    setState(30);
    statementList();
    setState(31);
    match(PascalSParser::END);
   
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

tree::TerminalNode* PascalSParser::VarDeclarationContext::VAR() {
  return getToken(PascalSParser::VAR, 0);
}

std::vector<PascalSParser::VariableContext *> PascalSParser::VarDeclarationContext::variable() {
  return getRuleContexts<PascalSParser::VariableContext>();
}

PascalSParser::VariableContext* PascalSParser::VarDeclarationContext::variable(size_t i) {
  return getRuleContext<PascalSParser::VariableContext>(i);
}

tree::TerminalNode* PascalSParser::VarDeclarationContext::INTEGER() {
  return getToken(PascalSParser::INTEGER, 0);
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
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalSParser::RuleVarDeclaration);
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
    setState(33);
    match(PascalSParser::VAR);
    setState(34);
    variable();
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::T__2) {
      setState(35);
      match(PascalSParser::T__2);
      setState(36);
      variable();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
    match(PascalSParser::T__3);
    setState(43);
    match(PascalSParser::INTEGER);
    setState(44);
    match(PascalSParser::T__0);
   
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

tree::TerminalNode* PascalSParser::VariableContext::IDENTIFIER() {
  return getToken(PascalSParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 6, PascalSParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(PascalSParser::IDENTIFIER);
   
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

std::vector<PascalSParser::StatementContext *> PascalSParser::StatementListContext::statement() {
  return getRuleContexts<PascalSParser::StatementContext>();
}

PascalSParser::StatementContext* PascalSParser::StatementListContext::statement(size_t i) {
  return getRuleContext<PascalSParser::StatementContext>(i);
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
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalSParser::RuleStatementList);
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
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::IDENTIFIER) {
      setState(48);
      statement();
      setState(49);
      match(PascalSParser::T__0);
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

PascalSParser::AssignmentContext* PascalSParser::StatementContext::assignment() {
  return getRuleContext<PascalSParser::AssignmentContext>(0);
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
  enterRule(_localctx, 10, PascalSParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    assignment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

PascalSParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalSParser::AssignmentContext::IDENTIFIER() {
  return getToken(PascalSParser::IDENTIFIER, 0);
}

PascalSParser::ExpressionContext* PascalSParser::AssignmentContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
}


size_t PascalSParser::AssignmentContext::getRuleIndex() const {
  return PascalSParser::RuleAssignment;
}


std::any PascalSParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalSVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PascalSParser::AssignmentContext* PascalSParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalSParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(PascalSParser::IDENTIFIER);
    setState(59);
    match(PascalSParser::T__4);
    setState(60);
    expression();
   
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

std::vector<PascalSParser::TermContext *> PascalSParser::ExpressionContext::term() {
  return getRuleContexts<PascalSParser::TermContext>();
}

PascalSParser::TermContext* PascalSParser::ExpressionContext::term(size_t i) {
  return getRuleContext<PascalSParser::TermContext>(i);
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
  enterRule(_localctx, 14, PascalSParser::RuleExpression);
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
    setState(62);
    term();
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::T__5

    || _la == PascalSParser::T__6) {
      setState(63);
      _la = _input->LA(1);
      if (!(_la == PascalSParser::T__5

      || _la == PascalSParser::T__6)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(64);
      term();
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

std::vector<PascalSParser::FactorContext *> PascalSParser::TermContext::factor() {
  return getRuleContexts<PascalSParser::FactorContext>();
}

PascalSParser::FactorContext* PascalSParser::TermContext::factor(size_t i) {
  return getRuleContext<PascalSParser::FactorContext>(i);
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
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 16, PascalSParser::RuleTerm);
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
    setState(70);
    factor();
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalSParser::T__7

    || _la == PascalSParser::T__8) {
      setState(71);
      _la = _input->LA(1);
      if (!(_la == PascalSParser::T__7

      || _la == PascalSParser::T__8)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(72);
      factor();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

tree::TerminalNode* PascalSParser::FactorContext::IDENTIFIER() {
  return getToken(PascalSParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalSParser::FactorContext::NUMBER() {
  return getToken(PascalSParser::NUMBER, 0);
}

PascalSParser::ExpressionContext* PascalSParser::FactorContext::expression() {
  return getRuleContext<PascalSParser::ExpressionContext>(0);
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
  enterRule(_localctx, 18, PascalSParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalSParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        match(PascalSParser::IDENTIFIER);
        break;
      }

      case PascalSParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        match(PascalSParser::NUMBER);
        break;
      }

      case PascalSParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        match(PascalSParser::T__9);
        setState(81);
        expression();
        setState(82);
        match(PascalSParser::T__10);
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

void PascalSParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascalsParserInitialize();
#else
  ::antlr4::internal::call_once(pascalsParserOnceFlag, pascalsParserInitialize);
#endif
}
