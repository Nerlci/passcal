// Generated from /mnt/c/Workspace/CXX/compiler_principle/passcal/src/PascalS.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class PascalSParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		RELOP=1, ADDOP=2, MULOP=3, AND=4, OR=5, NOT=6, INTEGER=7, REAL=8, BOOLEAN=9, 
		CHAR=10, ARRAY=11, BEGIN=12, CASE=13, CONST=14, DIV=15, DO=16, DOWNTO=17, 
		ELSE=18, END=19, FALSE=20, FOR=21, FUNCTION=22, IF=23, MOD=24, OF=25, 
		PROCEDURE=26, PROGRAM=27, RECORD=28, REPEAT=29, THEN=30, TO=31, TRUE=32, 
		TYPE=33, UNTIL=34, VAR=35, WHILE=36, ID=37, LETTER=38, NUM=39, EXPONENT=40, 
		FRAC=41, DIGITS=42, DIGIT=43, EQUAL=44, PLUS=45, MINUS=46, MULT=47, DIVIDE=48, 
		ASSIGNOP=49, PERIODOP=50, DOT=51, COMMA=52, COLON=53, SEMICOLON=54, QUOTE=55, 
		LPAREN=56, RPAREN=57, LBRACKET=58, RBRACKET=59, NEWLINE=60, WS=61;
	public static final int
		RULE_program = 0, RULE_programHead = 1, RULE_programBody = 2, RULE_identifierList = 3, 
		RULE_constDeclarations = 4, RULE_constDeclaration = 5, RULE_constVariable = 6, 
		RULE_typeDeclarations = 7, RULE_typeDeclaration = 8, RULE_type = 9, RULE_standardType = 10, 
		RULE_recordBody = 11, RULE_periods = 12, RULE_period = 13, RULE_varDeclarations = 14, 
		RULE_varDeclaration = 15, RULE_subprogramDeclarations = 16, RULE_subprogramDeclaration = 17, 
		RULE_subprogramHead = 18, RULE_formalParameter = 19, RULE_parameterLists = 20, 
		RULE_parameterList = 21, RULE_varParameter = 22, RULE_valueParameter = 23, 
		RULE_compoundStatement = 24, RULE_statementList = 25, RULE_statement = 26, 
		RULE_variable = 27, RULE_idVarparts = 28, RULE_idVarpart = 29, RULE_elsePart = 30, 
		RULE_caseBody = 31, RULE_branchList = 32, RULE_branch = 33, RULE_constList = 34, 
		RULE_updown = 35, RULE_callProcedureStatement = 36, RULE_expressionList = 37, 
		RULE_expression = 38, RULE_simpleExpression = 39, RULE_term = 40, RULE_boolean = 41, 
		RULE_factor = 42, RULE_unsignConstVariable = 43;
	private static String[] makeRuleNames() {
		return new String[] {
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
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'and'", "'or'", "'not'", "'integer'", "'real'", 
			"'boolean'", "'char'", "'array'", "'begin'", "'case'", "'const'", "'div'", 
			"'do'", "'downto'", "'else'", "'end'", "'false'", "'for'", "'function'", 
			"'if'", "'mod'", "'of'", "'procedure'", "'program'", "'record'", "'repeat'", 
			"'then'", "'to'", "'true'", "'type'", "'until'", "'var'", "'while'", 
			null, null, null, null, null, null, null, "'='", "'+'", "'-'", "'*'", 
			"'/'", "':='", "'..'", "'.'", "','", "':'", "';'", "'''", "'('", "')'", 
			"'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "RELOP", "ADDOP", "MULOP", "AND", "OR", "NOT", "INTEGER", "REAL", 
			"BOOLEAN", "CHAR", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", "DOWNTO", 
			"ELSE", "END", "FALSE", "FOR", "FUNCTION", "IF", "MOD", "OF", "PROCEDURE", 
			"PROGRAM", "RECORD", "REPEAT", "THEN", "TO", "TRUE", "TYPE", "UNTIL", 
			"VAR", "WHILE", "ID", "LETTER", "NUM", "EXPONENT", "FRAC", "DIGITS", 
			"DIGIT", "EQUAL", "PLUS", "MINUS", "MULT", "DIVIDE", "ASSIGNOP", "PERIODOP", 
			"DOT", "COMMA", "COLON", "SEMICOLON", "QUOTE", "LPAREN", "RPAREN", "LBRACKET", 
			"RBRACKET", "NEWLINE", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "PascalS.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PascalSParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public ProgramHeadContext programHead() {
			return getRuleContext(ProgramHeadContext.class,0);
		}
		public ProgramBodyContext programBody() {
			return getRuleContext(ProgramBodyContext.class,0);
		}
		public TerminalNode DOT() { return getToken(PascalSParser.DOT, 0); }
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			programHead();
			setState(89);
			programBody();
			setState(90);
			match(DOT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramHeadContext extends ParserRuleContext {
		public TerminalNode PROGRAM() { return getToken(PascalSParser.PROGRAM, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalSParser.LPAREN, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalSParser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public ProgramHeadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programHead; }
	}

	public final ProgramHeadContext programHead() throws RecognitionException {
		ProgramHeadContext _localctx = new ProgramHeadContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_programHead);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			match(PROGRAM);
			setState(93);
			match(ID);
			setState(94);
			match(LPAREN);
			setState(95);
			identifierList(0);
			setState(96);
			match(RPAREN);
			setState(97);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramBodyContext extends ParserRuleContext {
		public ConstDeclarationsContext constDeclarations() {
			return getRuleContext(ConstDeclarationsContext.class,0);
		}
		public TypeDeclarationsContext typeDeclarations() {
			return getRuleContext(TypeDeclarationsContext.class,0);
		}
		public VarDeclarationsContext varDeclarations() {
			return getRuleContext(VarDeclarationsContext.class,0);
		}
		public SubprogramDeclarationsContext subprogramDeclarations() {
			return getRuleContext(SubprogramDeclarationsContext.class,0);
		}
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public ProgramBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programBody; }
	}

	public final ProgramBodyContext programBody() throws RecognitionException {
		ProgramBodyContext _localctx = new ProgramBodyContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_programBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
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
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierListContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(PascalSParser.COMMA, 0); }
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		return identifierList(0);
	}

	private IdentifierListContext identifierList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, _parentState);
		IdentifierListContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(106);
			match(ID);
			}
			_ctx.stop = _input.LT(-1);
			setState(113);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(108);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(109);
					match(COMMA);
					setState(110);
					match(ID);
					}
					} 
				}
				setState(115);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstDeclarationsContext extends ParserRuleContext {
		public TerminalNode CONST() { return getToken(PascalSParser.CONST, 0); }
		public ConstDeclarationContext constDeclaration() {
			return getRuleContext(ConstDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public ConstDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constDeclarations; }
	}

	public final ConstDeclarationsContext constDeclarations() throws RecognitionException {
		ConstDeclarationsContext _localctx = new ConstDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_constDeclarations);
		try {
			setState(121);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(116);
				match(CONST);
				setState(117);
				constDeclaration(0);
				setState(118);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstDeclarationContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalSParser.EQUAL, 0); }
		public ConstVariableContext constVariable() {
			return getRuleContext(ConstVariableContext.class,0);
		}
		public ConstDeclarationContext constDeclaration() {
			return getRuleContext(ConstDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public ConstDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constDeclaration; }
	}

	public final ConstDeclarationContext constDeclaration() throws RecognitionException {
		return constDeclaration(0);
	}

	private ConstDeclarationContext constDeclaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ConstDeclarationContext _localctx = new ConstDeclarationContext(_ctx, _parentState);
		ConstDeclarationContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_constDeclaration, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(124);
			match(ID);
			setState(125);
			match(EQUAL);
			setState(126);
			constVariable();
			}
			_ctx.stop = _input.LT(-1);
			setState(135);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ConstDeclarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_constDeclaration);
					setState(128);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(129);
					match(SEMICOLON);
					setState(130);
					match(ID);
					setState(131);
					match(EQUAL);
					setState(132);
					constVariable();
					}
					} 
				}
				setState(137);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstVariableContext extends ParserRuleContext {
		public TerminalNode PLUS() { return getToken(PascalSParser.PLUS, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode MINUS() { return getToken(PascalSParser.MINUS, 0); }
		public TerminalNode NUM() { return getToken(PascalSParser.NUM, 0); }
		public List<TerminalNode> QUOTE() { return getTokens(PascalSParser.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(PascalSParser.QUOTE, i);
		}
		public TerminalNode LETTER() { return getToken(PascalSParser.LETTER, 0); }
		public ConstVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constVariable; }
	}

	public final ConstVariableContext constVariable() throws RecognitionException {
		ConstVariableContext _localctx = new ConstVariableContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_constVariable);
		try {
			setState(151);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(138);
				match(PLUS);
				setState(139);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(140);
				match(MINUS);
				setState(141);
				match(ID);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(142);
				match(ID);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(143);
				match(PLUS);
				setState(144);
				match(NUM);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(145);
				match(MINUS);
				setState(146);
				match(NUM);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(147);
				match(NUM);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(148);
				match(QUOTE);
				setState(149);
				match(LETTER);
				setState(150);
				match(QUOTE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeDeclarationsContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(PascalSParser.TYPE, 0); }
		public TypeDeclarationContext typeDeclaration() {
			return getRuleContext(TypeDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public TypeDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclarations; }
	}

	public final TypeDeclarationsContext typeDeclarations() throws RecognitionException {
		TypeDeclarationsContext _localctx = new TypeDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_typeDeclarations);
		try {
			setState(158);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(153);
				match(TYPE);
				setState(154);
				typeDeclaration(0);
				setState(155);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeDeclarationContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalSParser.EQUAL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeDeclarationContext typeDeclaration() {
			return getRuleContext(TypeDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public TypeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclaration; }
	}

	public final TypeDeclarationContext typeDeclaration() throws RecognitionException {
		return typeDeclaration(0);
	}

	private TypeDeclarationContext typeDeclaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TypeDeclarationContext _localctx = new TypeDeclarationContext(_ctx, _parentState);
		TypeDeclarationContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_typeDeclaration, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(161);
			match(ID);
			setState(162);
			match(EQUAL);
			setState(163);
			type();
			}
			_ctx.stop = _input.LT(-1);
			setState(172);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TypeDeclarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_typeDeclaration);
					setState(165);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(166);
					match(SEMICOLON);
					setState(167);
					match(ID);
					setState(168);
					match(EQUAL);
					setState(169);
					type();
					}
					} 
				}
				setState(174);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public StandardTypeContext standardType() {
			return getRuleContext(StandardTypeContext.class,0);
		}
		public TerminalNode RECORD() { return getToken(PascalSParser.RECORD, 0); }
		public RecordBodyContext recordBody() {
			return getRuleContext(RecordBodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public TerminalNode ARRAY() { return getToken(PascalSParser.ARRAY, 0); }
		public TerminalNode LBRACKET() { return getToken(PascalSParser.LBRACKET, 0); }
		public PeriodsContext periods() {
			return getRuleContext(PeriodsContext.class,0);
		}
		public TerminalNode RBRACKET() { return getToken(PascalSParser.RBRACKET, 0); }
		public TerminalNode OF() { return getToken(PascalSParser.OF, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_type);
		try {
			setState(187);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
			case REAL:
			case BOOLEAN:
			case CHAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(175);
				standardType();
				}
				break;
			case RECORD:
				enterOuterAlt(_localctx, 2);
				{
				setState(176);
				match(RECORD);
				setState(177);
				recordBody();
				setState(178);
				match(END);
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 3);
				{
				setState(180);
				match(ARRAY);
				setState(181);
				match(LBRACKET);
				setState(182);
				periods(0);
				setState(183);
				match(RBRACKET);
				setState(184);
				match(OF);
				setState(185);
				type();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StandardTypeContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(PascalSParser.INTEGER, 0); }
		public TerminalNode BOOLEAN() { return getToken(PascalSParser.BOOLEAN, 0); }
		public TerminalNode REAL() { return getToken(PascalSParser.REAL, 0); }
		public TerminalNode CHAR() { return getToken(PascalSParser.CHAR, 0); }
		public StandardTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_standardType; }
	}

	public final StandardTypeContext standardType() throws RecognitionException {
		StandardTypeContext _localctx = new StandardTypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_standardType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1920L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RecordBodyContext extends ParserRuleContext {
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public RecordBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_recordBody; }
	}

	public final RecordBodyContext recordBody() throws RecognitionException {
		RecordBodyContext _localctx = new RecordBodyContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_recordBody);
		try {
			setState(193);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(191);
				varDeclaration(0);
				}
				break;
			case END:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PeriodsContext extends ParserRuleContext {
		public PeriodContext period() {
			return getRuleContext(PeriodContext.class,0);
		}
		public PeriodsContext periods() {
			return getRuleContext(PeriodsContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(PascalSParser.COMMA, 0); }
		public PeriodsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_periods; }
	}

	public final PeriodsContext periods() throws RecognitionException {
		return periods(0);
	}

	private PeriodsContext periods(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PeriodsContext _localctx = new PeriodsContext(_ctx, _parentState);
		PeriodsContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_periods, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(196);
			period();
			}
			_ctx.stop = _input.LT(-1);
			setState(203);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new PeriodsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_periods);
					setState(198);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(199);
					match(COMMA);
					setState(200);
					period();
					}
					} 
				}
				setState(205);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PeriodContext extends ParserRuleContext {
		public List<ConstVariableContext> constVariable() {
			return getRuleContexts(ConstVariableContext.class);
		}
		public ConstVariableContext constVariable(int i) {
			return getRuleContext(ConstVariableContext.class,i);
		}
		public TerminalNode PERIODOP() { return getToken(PascalSParser.PERIODOP, 0); }
		public PeriodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_period; }
	}

	public final PeriodContext period() throws RecognitionException {
		PeriodContext _localctx = new PeriodContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_period);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
			constVariable();
			setState(207);
			match(PERIODOP);
			setState(208);
			constVariable();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarDeclarationsContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(PascalSParser.VAR, 0); }
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public VarDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclarations; }
	}

	public final VarDeclarationsContext varDeclarations() throws RecognitionException {
		VarDeclarationsContext _localctx = new VarDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_varDeclarations);
		try {
			setState(215);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(210);
				match(VAR);
				setState(211);
				varDeclaration(0);
				setState(212);
				match(SEMICOLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarDeclarationContext extends ParserRuleContext {
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalSParser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public VarDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclaration; }
	}

	public final VarDeclarationContext varDeclaration() throws RecognitionException {
		return varDeclaration(0);
	}

	private VarDeclarationContext varDeclaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		VarDeclarationContext _localctx = new VarDeclarationContext(_ctx, _parentState);
		VarDeclarationContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_varDeclaration, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(218);
			identifierList(0);
			setState(219);
			match(COLON);
			setState(220);
			type();
			}
			_ctx.stop = _input.LT(-1);
			setState(230);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VarDeclarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_varDeclaration);
					setState(222);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(223);
					match(SEMICOLON);
					setState(224);
					identifierList(0);
					setState(225);
					match(COLON);
					setState(226);
					type();
					}
					} 
				}
				setState(232);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubprogramDeclarationsContext extends ParserRuleContext {
		public SubprogramDeclarationsContext subprogramDeclarations() {
			return getRuleContext(SubprogramDeclarationsContext.class,0);
		}
		public SubprogramDeclarationContext subprogramDeclaration() {
			return getRuleContext(SubprogramDeclarationContext.class,0);
		}
		public SubprogramDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogramDeclarations; }
	}

	public final SubprogramDeclarationsContext subprogramDeclarations() throws RecognitionException {
		return subprogramDeclarations(0);
	}

	private SubprogramDeclarationsContext subprogramDeclarations(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		SubprogramDeclarationsContext _localctx = new SubprogramDeclarationsContext(_ctx, _parentState);
		SubprogramDeclarationsContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_subprogramDeclarations, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			}
			_ctx.stop = _input.LT(-1);
			setState(238);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new SubprogramDeclarationsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_subprogramDeclarations);
					setState(234);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(235);
					subprogramDeclaration();
					}
					} 
				}
				setState(240);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubprogramDeclarationContext extends ParserRuleContext {
		public SubprogramHeadContext subprogramHead() {
			return getRuleContext(SubprogramHeadContext.class,0);
		}
		public ProgramBodyContext programBody() {
			return getRuleContext(ProgramBodyContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public SubprogramDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogramDeclaration; }
	}

	public final SubprogramDeclarationContext subprogramDeclaration() throws RecognitionException {
		SubprogramDeclarationContext _localctx = new SubprogramDeclarationContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_subprogramDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			subprogramHead();
			setState(242);
			programBody();
			setState(243);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubprogramHeadContext extends ParserRuleContext {
		public TerminalNode FUNCTION() { return getToken(PascalSParser.FUNCTION, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public FormalParameterContext formalParameter() {
			return getRuleContext(FormalParameterContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalSParser.COLON, 0); }
		public StandardTypeContext standardType() {
			return getRuleContext(StandardTypeContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public TerminalNode PROCEDURE() { return getToken(PascalSParser.PROCEDURE, 0); }
		public SubprogramHeadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogramHead; }
	}

	public final SubprogramHeadContext subprogramHead() throws RecognitionException {
		SubprogramHeadContext _localctx = new SubprogramHeadContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_subprogramHead);
		try {
			setState(257);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FUNCTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(245);
				match(FUNCTION);
				setState(246);
				match(ID);
				setState(247);
				formalParameter();
				setState(248);
				match(COLON);
				setState(249);
				standardType();
				setState(250);
				match(SEMICOLON);
				}
				break;
			case PROCEDURE:
				enterOuterAlt(_localctx, 2);
				{
				setState(252);
				match(PROCEDURE);
				setState(253);
				match(ID);
				setState(254);
				formalParameter();
				setState(255);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FormalParameterContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(PascalSParser.LPAREN, 0); }
		public ParameterListsContext parameterLists() {
			return getRuleContext(ParameterListsContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalSParser.RPAREN, 0); }
		public FormalParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formalParameter; }
	}

	public final FormalParameterContext formalParameter() throws RecognitionException {
		FormalParameterContext _localctx = new FormalParameterContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_formalParameter);
		try {
			setState(264);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				enterOuterAlt(_localctx, 1);
				{
				setState(259);
				match(LPAREN);
				setState(260);
				parameterLists(0);
				setState(261);
				match(RPAREN);
				}
				break;
			case COLON:
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterListsContext extends ParserRuleContext {
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public ParameterListsContext parameterLists() {
			return getRuleContext(ParameterListsContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public ParameterListsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterLists; }
	}

	public final ParameterListsContext parameterLists() throws RecognitionException {
		return parameterLists(0);
	}

	private ParameterListsContext parameterLists(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ParameterListsContext _localctx = new ParameterListsContext(_ctx, _parentState);
		ParameterListsContext _prevctx = _localctx;
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_parameterLists, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(267);
			parameterList();
			}
			_ctx.stop = _input.LT(-1);
			setState(274);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterListsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterLists);
					setState(269);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(270);
					match(SEMICOLON);
					setState(271);
					parameterList();
					}
					} 
				}
				setState(276);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterListContext extends ParserRuleContext {
		public VarParameterContext varParameter() {
			return getRuleContext(VarParameterContext.class,0);
		}
		public ValueParameterContext valueParameter() {
			return getRuleContext(ValueParameterContext.class,0);
		}
		public ParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterList; }
	}

	public final ParameterListContext parameterList() throws RecognitionException {
		ParameterListContext _localctx = new ParameterListContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_parameterList);
		try {
			setState(279);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(277);
				varParameter();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(278);
				valueParameter();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarParameterContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(PascalSParser.VAR, 0); }
		public ValueParameterContext valueParameter() {
			return getRuleContext(ValueParameterContext.class,0);
		}
		public VarParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varParameter; }
	}

	public final VarParameterContext varParameter() throws RecognitionException {
		VarParameterContext _localctx = new VarParameterContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_varParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(281);
			match(VAR);
			setState(282);
			valueParameter();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueParameterContext extends ParserRuleContext {
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalSParser.COLON, 0); }
		public StandardTypeContext standardType() {
			return getRuleContext(StandardTypeContext.class,0);
		}
		public ValueParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueParameter; }
	}

	public final ValueParameterContext valueParameter() throws RecognitionException {
		ValueParameterContext _localctx = new ValueParameterContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_valueParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
			identifierList(0);
			setState(285);
			match(COLON);
			setState(286);
			standardType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CompoundStatementContext extends ParserRuleContext {
		public TerminalNode BEGIN() { return getToken(PascalSParser.BEGIN, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public CompoundStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundStatement; }
	}

	public final CompoundStatementContext compoundStatement() throws RecognitionException {
		CompoundStatementContext _localctx = new CompoundStatementContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_compoundStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			match(BEGIN);
			setState(289);
			statementList(0);
			setState(290);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementListContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public StatementListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementList; }
	}

	public final StatementListContext statementList() throws RecognitionException {
		return statementList(0);
	}

	private StatementListContext statementList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementListContext _localctx = new StatementListContext(_ctx, _parentState);
		StatementListContext _prevctx = _localctx;
		int _startState = 50;
		enterRecursionRule(_localctx, 50, RULE_statementList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(293);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(300);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementList);
					setState(295);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(296);
					match(SEMICOLON);
					setState(297);
					statement();
					}
					} 
				}
				setState(302);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class WhileStatementContext extends StatementContext {
		public TerminalNode WHILE() { return getToken(PascalSParser.WHILE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode DO() { return getToken(PascalSParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public WhileStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class EmptyStatementContext extends StatementContext {
		public EmptyStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RepeatStatementContext extends StatementContext {
		public TerminalNode REPEAT() { return getToken(PascalSParser.REPEAT, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(PascalSParser.UNTIL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public RepeatStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CaseStatementContext extends StatementContext {
		public TerminalNode CASE() { return getToken(PascalSParser.CASE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode OF() { return getToken(PascalSParser.OF, 0); }
		public CaseBodyContext caseBody() {
			return getRuleContext(CaseBodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public CaseStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentStatementContext extends StatementContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ASSIGNOP() { return getToken(PascalSParser.ASSIGNOP, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AssignmentStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementCallProcedureStatementContext extends StatementContext {
		public CallProcedureStatementContext callProcedureStatement() {
			return getRuleContext(CallProcedureStatementContext.class,0);
		}
		public StatementCallProcedureStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ForStatementContext extends StatementContext {
		public TerminalNode FOR() { return getToken(PascalSParser.FOR, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode ASSIGNOP() { return getToken(PascalSParser.ASSIGNOP, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public UpdownContext updown() {
			return getRuleContext(UpdownContext.class,0);
		}
		public TerminalNode DO() { return getToken(PascalSParser.DO, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ForStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IfStatementContext extends StatementContext {
		public TerminalNode IF() { return getToken(PascalSParser.IF, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode THEN() { return getToken(PascalSParser.THEN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ElsePartContext elsePart() {
			return getRuleContext(ElsePartContext.class,0);
		}
		public IfStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementCompoundStatementContext extends StatementContext {
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public StatementCompoundStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_statement);
		try {
			setState(341);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				_localctx = new AssignmentStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(303);
				variable();
				setState(304);
				match(ASSIGNOP);
				setState(305);
				expression();
				}
				break;
			case 2:
				_localctx = new StatementCallProcedureStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(307);
				callProcedureStatement();
				}
				break;
			case 3:
				_localctx = new StatementCompoundStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(308);
				compoundStatement();
				}
				break;
			case 4:
				_localctx = new IfStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(309);
				match(IF);
				setState(310);
				expression();
				setState(311);
				match(THEN);
				setState(312);
				statement();
				setState(313);
				elsePart();
				}
				break;
			case 5:
				_localctx = new CaseStatementContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(315);
				match(CASE);
				setState(316);
				expression();
				setState(317);
				match(OF);
				setState(318);
				caseBody();
				setState(319);
				match(END);
				}
				break;
			case 6:
				_localctx = new WhileStatementContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(321);
				match(WHILE);
				setState(322);
				expression();
				setState(323);
				match(DO);
				setState(324);
				statement();
				}
				break;
			case 7:
				_localctx = new RepeatStatementContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(326);
				match(REPEAT);
				setState(327);
				statementList(0);
				setState(328);
				match(UNTIL);
				setState(329);
				expression();
				}
				break;
			case 8:
				_localctx = new ForStatementContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(331);
				match(FOR);
				setState(332);
				match(ID);
				setState(333);
				match(ASSIGNOP);
				setState(334);
				expression();
				setState(335);
				updown();
				setState(336);
				expression();
				setState(337);
				match(DO);
				setState(338);
				statement();
				}
				break;
			case 9:
				_localctx = new EmptyStatementContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public IdVarpartsContext idVarparts() {
			return getRuleContext(IdVarpartsContext.class,0);
		}
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(343);
			match(ID);
			setState(344);
			idVarparts(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdVarpartsContext extends ParserRuleContext {
		public IdVarpartsContext idVarparts() {
			return getRuleContext(IdVarpartsContext.class,0);
		}
		public IdVarpartContext idVarpart() {
			return getRuleContext(IdVarpartContext.class,0);
		}
		public IdVarpartsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idVarparts; }
	}

	public final IdVarpartsContext idVarparts() throws RecognitionException {
		return idVarparts(0);
	}

	private IdVarpartsContext idVarparts(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		IdVarpartsContext _localctx = new IdVarpartsContext(_ctx, _parentState);
		IdVarpartsContext _prevctx = _localctx;
		int _startState = 56;
		enterRecursionRule(_localctx, 56, RULE_idVarparts, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			}
			_ctx.stop = _input.LT(-1);
			setState(351);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdVarpartsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_idVarparts);
					setState(347);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(348);
					idVarpart();
					}
					} 
				}
				setState(353);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdVarpartContext extends ParserRuleContext {
		public TerminalNode LBRACKET() { return getToken(PascalSParser.LBRACKET, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RBRACKET() { return getToken(PascalSParser.RBRACKET, 0); }
		public TerminalNode DOT() { return getToken(PascalSParser.DOT, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public IdVarpartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idVarpart; }
	}

	public final IdVarpartContext idVarpart() throws RecognitionException {
		IdVarpartContext _localctx = new IdVarpartContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_idVarpart);
		try {
			setState(360);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(354);
				match(LBRACKET);
				setState(355);
				expressionList(0);
				setState(356);
				match(RBRACKET);
				}
				break;
			case DOT:
				enterOuterAlt(_localctx, 2);
				{
				setState(358);
				match(DOT);
				setState(359);
				match(ID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElsePartContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(PascalSParser.ELSE, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ElsePartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elsePart; }
	}

	public final ElsePartContext elsePart() throws RecognitionException {
		ElsePartContext _localctx = new ElsePartContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_elsePart);
		try {
			setState(365);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(362);
				match(ELSE);
				setState(363);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CaseBodyContext extends ParserRuleContext {
		public BranchListContext branchList() {
			return getRuleContext(BranchListContext.class,0);
		}
		public CaseBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caseBody; }
	}

	public final CaseBodyContext caseBody() throws RecognitionException {
		CaseBodyContext _localctx = new CaseBodyContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_caseBody);
		try {
			setState(369);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case NUM:
			case PLUS:
			case MINUS:
			case QUOTE:
				enterOuterAlt(_localctx, 1);
				{
				setState(367);
				branchList(0);
				}
				break;
			case END:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BranchListContext extends ParserRuleContext {
		public BranchContext branch() {
			return getRuleContext(BranchContext.class,0);
		}
		public BranchListContext branchList() {
			return getRuleContext(BranchListContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalSParser.SEMICOLON, 0); }
		public BranchListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branchList; }
	}

	public final BranchListContext branchList() throws RecognitionException {
		return branchList(0);
	}

	private BranchListContext branchList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BranchListContext _localctx = new BranchListContext(_ctx, _parentState);
		BranchListContext _prevctx = _localctx;
		int _startState = 64;
		enterRecursionRule(_localctx, 64, RULE_branchList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(372);
			branch();
			}
			_ctx.stop = _input.LT(-1);
			setState(379);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BranchListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_branchList);
					setState(374);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(375);
					match(SEMICOLON);
					setState(376);
					branch();
					}
					} 
				}
				setState(381);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BranchContext extends ParserRuleContext {
		public ConstListContext constList() {
			return getRuleContext(ConstListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalSParser.COLON, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public BranchContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branch; }
	}

	public final BranchContext branch() throws RecognitionException {
		BranchContext _localctx = new BranchContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_branch);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(382);
			constList(0);
			setState(383);
			match(COLON);
			setState(384);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstListContext extends ParserRuleContext {
		public ConstVariableContext constVariable() {
			return getRuleContext(ConstVariableContext.class,0);
		}
		public ConstListContext constList() {
			return getRuleContext(ConstListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(PascalSParser.COMMA, 0); }
		public ConstListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constList; }
	}

	public final ConstListContext constList() throws RecognitionException {
		return constList(0);
	}

	private ConstListContext constList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ConstListContext _localctx = new ConstListContext(_ctx, _parentState);
		ConstListContext _prevctx = _localctx;
		int _startState = 68;
		enterRecursionRule(_localctx, 68, RULE_constList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(387);
			constVariable();
			}
			_ctx.stop = _input.LT(-1);
			setState(394);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ConstListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_constList);
					setState(389);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(390);
					match(COMMA);
					setState(391);
					constVariable();
					}
					} 
				}
				setState(396);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UpdownContext extends ParserRuleContext {
		public TerminalNode TO() { return getToken(PascalSParser.TO, 0); }
		public TerminalNode DOWNTO() { return getToken(PascalSParser.DOWNTO, 0); }
		public UpdownContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_updown; }
	}

	public final UpdownContext updown() throws RecognitionException {
		UpdownContext _localctx = new UpdownContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_updown);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(397);
			_la = _input.LA(1);
			if ( !(_la==DOWNTO || _la==TO) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CallProcedureStatementContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalSParser.LPAREN, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalSParser.RPAREN, 0); }
		public CallProcedureStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callProcedureStatement; }
	}

	public final CallProcedureStatementContext callProcedureStatement() throws RecognitionException {
		CallProcedureStatementContext _localctx = new CallProcedureStatementContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_callProcedureStatement);
		try {
			setState(405);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(399);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(400);
				match(ID);
				setState(401);
				match(LPAREN);
				setState(402);
				expressionList(0);
				setState(403);
				match(RPAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionListContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(PascalSParser.COMMA, 0); }
		public ExpressionListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionList; }
	}

	public final ExpressionListContext expressionList() throws RecognitionException {
		return expressionList(0);
	}

	private ExpressionListContext expressionList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionListContext _localctx = new ExpressionListContext(_ctx, _parentState);
		ExpressionListContext _prevctx = _localctx;
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_expressionList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(408);
			expression();
			}
			_ctx.stop = _input.LT(-1);
			setState(415);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expressionList);
					setState(410);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(411);
					match(COMMA);
					setState(412);
					expression();
					}
					} 
				}
				setState(417);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public List<SimpleExpressionContext> simpleExpression() {
			return getRuleContexts(SimpleExpressionContext.class);
		}
		public SimpleExpressionContext simpleExpression(int i) {
			return getRuleContext(SimpleExpressionContext.class,i);
		}
		public TerminalNode RELOP() { return getToken(PascalSParser.RELOP, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_expression);
		try {
			setState(423);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(418);
				simpleExpression(0);
				setState(419);
				match(RELOP);
				setState(420);
				simpleExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(422);
				simpleExpression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SimpleExpressionContext extends ParserRuleContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(PascalSParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(PascalSParser.MINUS, 0); }
		public SimpleExpressionContext simpleExpression() {
			return getRuleContext(SimpleExpressionContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(PascalSParser.ADDOP, 0); }
		public SimpleExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleExpression; }
	}

	public final SimpleExpressionContext simpleExpression() throws RecognitionException {
		return simpleExpression(0);
	}

	private SimpleExpressionContext simpleExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		SimpleExpressionContext _localctx = new SimpleExpressionContext(_ctx, _parentState);
		SimpleExpressionContext _prevctx = _localctx;
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_simpleExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(431);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOT:
			case FALSE:
			case TRUE:
			case ID:
			case NUM:
			case QUOTE:
			case LPAREN:
				{
				setState(426);
				term(0);
				}
				break;
			case PLUS:
				{
				setState(427);
				match(PLUS);
				setState(428);
				term(0);
				}
				break;
			case MINUS:
				{
				setState(429);
				match(MINUS);
				setState(430);
				term(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(438);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new SimpleExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_simpleExpression);
					setState(433);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(434);
					match(ADDOP);
					setState(435);
					term(0);
					}
					} 
				}
				setState(440);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermContext extends ParserRuleContext {
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode MULOP() { return getToken(PascalSParser.MULOP, 0); }
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		return term(0);
	}

	private TermContext term(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermContext _localctx = new TermContext(_ctx, _parentState);
		TermContext _prevctx = _localctx;
		int _startState = 80;
		enterRecursionRule(_localctx, 80, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(442);
			factor();
			}
			_ctx.stop = _input.LT(-1);
			setState(449);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TermContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_term);
					setState(444);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(445);
					match(MULOP);
					setState(446);
					factor();
					}
					} 
				}
				setState(451);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BooleanContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(PascalSParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(PascalSParser.FALSE, 0); }
		public BooleanContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean; }
	}

	public final BooleanContext boolean_() throws RecognitionException {
		BooleanContext _localctx = new BooleanContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_boolean);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(452);
			_la = _input.LA(1);
			if ( !(_la==FALSE || _la==TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FactorContext extends ParserRuleContext {
		public UnsignConstVariableContext unsignConstVariable() {
			return getRuleContext(UnsignConstVariableContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalSParser.LPAREN, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalSParser.RPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(PascalSParser.NOT, 0); }
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public BooleanContext boolean_() {
			return getRuleContext(BooleanContext.class,0);
		}
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_factor);
		try {
			setState(468);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(454);
				unsignConstVariable();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(455);
				variable();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(456);
				match(ID);
				setState(457);
				match(LPAREN);
				setState(458);
				expressionList(0);
				setState(459);
				match(RPAREN);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(461);
				match(LPAREN);
				setState(462);
				expression();
				setState(463);
				match(RPAREN);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(465);
				match(NOT);
				setState(466);
				factor();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(467);
				boolean_();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnsignConstVariableContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode NUM() { return getToken(PascalSParser.NUM, 0); }
		public List<TerminalNode> QUOTE() { return getTokens(PascalSParser.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(PascalSParser.QUOTE, i);
		}
		public TerminalNode LETTER() { return getToken(PascalSParser.LETTER, 0); }
		public UnsignConstVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignConstVariable; }
	}

	public final UnsignConstVariableContext unsignConstVariable() throws RecognitionException {
		UnsignConstVariableContext _localctx = new UnsignConstVariableContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_unsignConstVariable);
		try {
			setState(475);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(470);
				match(ID);
				}
				break;
			case NUM:
				enterOuterAlt(_localctx, 2);
				{
				setState(471);
				match(NUM);
				}
				break;
			case QUOTE:
				enterOuterAlt(_localctx, 3);
				{
				setState(472);
				match(QUOTE);
				setState(473);
				match(LETTER);
				setState(474);
				match(QUOTE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 3:
			return identifierList_sempred((IdentifierListContext)_localctx, predIndex);
		case 5:
			return constDeclaration_sempred((ConstDeclarationContext)_localctx, predIndex);
		case 8:
			return typeDeclaration_sempred((TypeDeclarationContext)_localctx, predIndex);
		case 12:
			return periods_sempred((PeriodsContext)_localctx, predIndex);
		case 15:
			return varDeclaration_sempred((VarDeclarationContext)_localctx, predIndex);
		case 16:
			return subprogramDeclarations_sempred((SubprogramDeclarationsContext)_localctx, predIndex);
		case 20:
			return parameterLists_sempred((ParameterListsContext)_localctx, predIndex);
		case 25:
			return statementList_sempred((StatementListContext)_localctx, predIndex);
		case 28:
			return idVarparts_sempred((IdVarpartsContext)_localctx, predIndex);
		case 32:
			return branchList_sempred((BranchListContext)_localctx, predIndex);
		case 34:
			return constList_sempred((ConstListContext)_localctx, predIndex);
		case 37:
			return expressionList_sempred((ExpressionListContext)_localctx, predIndex);
		case 39:
			return simpleExpression_sempred((SimpleExpressionContext)_localctx, predIndex);
		case 40:
			return term_sempred((TermContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean constDeclaration_sempred(ConstDeclarationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean typeDeclaration_sempred(TypeDeclarationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean periods_sempred(PeriodsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean varDeclaration_sempred(VarDeclarationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean subprogramDeclarations_sempred(SubprogramDeclarationsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterLists_sempred(ParameterListsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean statementList_sempred(StatementListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean idVarparts_sempred(IdVarpartsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean branchList_sempred(BranchListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean constList_sempred(ConstListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean expressionList_sempred(ExpressionListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean simpleExpression_sempred(SimpleExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean term_sempred(TermContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001=\u01de\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007\"\u0002"+
		"#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007\'\u0002"+
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003p\b\u0003\n\u0003\f\u0003"+
		"s\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u0004z\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0005\u0005\u0086\b\u0005\n\u0005\f\u0005\u0089\t\u0005\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003"+
		"\u0006\u0098\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0003\u0007\u009f\b\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0005\b\u00ab\b\b\n\b\f\b\u00ae"+
		"\t\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0003\t\u00bc\b\t\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0003\u000b\u00c2\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f"+
		"\u0001\f\u0001\f\u0005\f\u00ca\b\f\n\f\f\f\u00cd\t\f\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0003\u000e\u00d8\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0005\u000f\u00e5\b\u000f\n\u000f\f\u000f\u00e8\t\u000f\u0001"+
		"\u0010\u0001\u0010\u0001\u0010\u0005\u0010\u00ed\b\u0010\n\u0010\f\u0010"+
		"\u00f0\t\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012"+
		"\u0102\b\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0003\u0013\u0109\b\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0005\u0014\u0111\b\u0014\n\u0014\f\u0014\u0114"+
		"\t\u0014\u0001\u0015\u0001\u0015\u0003\u0015\u0118\b\u0015\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0005\u0019\u012b\b\u0019"+
		"\n\u0019\f\u0019\u012e\t\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0003\u001a\u0156"+
		"\b\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0005\u001c\u015e\b\u001c\n\u001c\f\u001c\u0161\t\u001c\u0001\u001d"+
		"\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0003\u001d"+
		"\u0169\b\u001d\u0001\u001e\u0001\u001e\u0001\u001e\u0003\u001e\u016e\b"+
		"\u001e\u0001\u001f\u0001\u001f\u0003\u001f\u0172\b\u001f\u0001 \u0001"+
		" \u0001 \u0001 \u0001 \u0001 \u0005 \u017a\b \n \f \u017d\t \u0001!\u0001"+
		"!\u0001!\u0001!\u0001\"\u0001\"\u0001\"\u0001\"\u0001\"\u0001\"\u0005"+
		"\"\u0189\b\"\n\"\f\"\u018c\t\"\u0001#\u0001#\u0001$\u0001$\u0001$\u0001"+
		"$\u0001$\u0001$\u0003$\u0196\b$\u0001%\u0001%\u0001%\u0001%\u0001%\u0001"+
		"%\u0005%\u019e\b%\n%\f%\u01a1\t%\u0001&\u0001&\u0001&\u0001&\u0001&\u0003"+
		"&\u01a8\b&\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0003\'\u01b0"+
		"\b\'\u0001\'\u0001\'\u0001\'\u0005\'\u01b5\b\'\n\'\f\'\u01b8\t\'\u0001"+
		"(\u0001(\u0001(\u0001(\u0001(\u0001(\u0005(\u01c0\b(\n(\f(\u01c3\t(\u0001"+
		")\u0001)\u0001*\u0001*\u0001*\u0001*\u0001*\u0001*\u0001*\u0001*\u0001"+
		"*\u0001*\u0001*\u0001*\u0001*\u0001*\u0003*\u01d5\b*\u0001+\u0001+\u0001"+
		"+\u0001+\u0001+\u0003+\u01dc\b+\u0001+\u0000\u000e\u0006\n\u0010\u0018"+
		"\u001e (28@DJNP,\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014"+
		"\u0016\u0018\u001a\u001c\u001e \"$&(*,.02468:<>@BDFHJLNPRTV\u0000\u0003"+
		"\u0001\u0000\u0007\n\u0002\u0000\u0011\u0011\u001f\u001f\u0002\u0000\u0014"+
		"\u0014  \u01e4\u0000X\u0001\u0000\u0000\u0000\u0002\\\u0001\u0000\u0000"+
		"\u0000\u0004c\u0001\u0000\u0000\u0000\u0006i\u0001\u0000\u0000\u0000\b"+
		"y\u0001\u0000\u0000\u0000\n{\u0001\u0000\u0000\u0000\f\u0097\u0001\u0000"+
		"\u0000\u0000\u000e\u009e\u0001\u0000\u0000\u0000\u0010\u00a0\u0001\u0000"+
		"\u0000\u0000\u0012\u00bb\u0001\u0000\u0000\u0000\u0014\u00bd\u0001\u0000"+
		"\u0000\u0000\u0016\u00c1\u0001\u0000\u0000\u0000\u0018\u00c3\u0001\u0000"+
		"\u0000\u0000\u001a\u00ce\u0001\u0000\u0000\u0000\u001c\u00d7\u0001\u0000"+
		"\u0000\u0000\u001e\u00d9\u0001\u0000\u0000\u0000 \u00e9\u0001\u0000\u0000"+
		"\u0000\"\u00f1\u0001\u0000\u0000\u0000$\u0101\u0001\u0000\u0000\u0000"+
		"&\u0108\u0001\u0000\u0000\u0000(\u010a\u0001\u0000\u0000\u0000*\u0117"+
		"\u0001\u0000\u0000\u0000,\u0119\u0001\u0000\u0000\u0000.\u011c\u0001\u0000"+
		"\u0000\u00000\u0120\u0001\u0000\u0000\u00002\u0124\u0001\u0000\u0000\u0000"+
		"4\u0155\u0001\u0000\u0000\u00006\u0157\u0001\u0000\u0000\u00008\u015a"+
		"\u0001\u0000\u0000\u0000:\u0168\u0001\u0000\u0000\u0000<\u016d\u0001\u0000"+
		"\u0000\u0000>\u0171\u0001\u0000\u0000\u0000@\u0173\u0001\u0000\u0000\u0000"+
		"B\u017e\u0001\u0000\u0000\u0000D\u0182\u0001\u0000\u0000\u0000F\u018d"+
		"\u0001\u0000\u0000\u0000H\u0195\u0001\u0000\u0000\u0000J\u0197\u0001\u0000"+
		"\u0000\u0000L\u01a7\u0001\u0000\u0000\u0000N\u01af\u0001\u0000\u0000\u0000"+
		"P\u01b9\u0001\u0000\u0000\u0000R\u01c4\u0001\u0000\u0000\u0000T\u01d4"+
		"\u0001\u0000\u0000\u0000V\u01db\u0001\u0000\u0000\u0000XY\u0003\u0002"+
		"\u0001\u0000YZ\u0003\u0004\u0002\u0000Z[\u00053\u0000\u0000[\u0001\u0001"+
		"\u0000\u0000\u0000\\]\u0005\u001b\u0000\u0000]^\u0005%\u0000\u0000^_\u0005"+
		"8\u0000\u0000_`\u0003\u0006\u0003\u0000`a\u00059\u0000\u0000ab\u00056"+
		"\u0000\u0000b\u0003\u0001\u0000\u0000\u0000cd\u0003\b\u0004\u0000de\u0003"+
		"\u000e\u0007\u0000ef\u0003\u001c\u000e\u0000fg\u0003 \u0010\u0000gh\u0003"+
		"0\u0018\u0000h\u0005\u0001\u0000\u0000\u0000ij\u0006\u0003\uffff\uffff"+
		"\u0000jk\u0005%\u0000\u0000kq\u0001\u0000\u0000\u0000lm\n\u0002\u0000"+
		"\u0000mn\u00054\u0000\u0000np\u0005%\u0000\u0000ol\u0001\u0000\u0000\u0000"+
		"ps\u0001\u0000\u0000\u0000qo\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000"+
		"\u0000r\u0007\u0001\u0000\u0000\u0000sq\u0001\u0000\u0000\u0000tu\u0005"+
		"\u000e\u0000\u0000uv\u0003\n\u0005\u0000vw\u00056\u0000\u0000wz\u0001"+
		"\u0000\u0000\u0000xz\u0001\u0000\u0000\u0000yt\u0001\u0000\u0000\u0000"+
		"yx\u0001\u0000\u0000\u0000z\t\u0001\u0000\u0000\u0000{|\u0006\u0005\uffff"+
		"\uffff\u0000|}\u0005%\u0000\u0000}~\u0005,\u0000\u0000~\u007f\u0003\f"+
		"\u0006\u0000\u007f\u0087\u0001\u0000\u0000\u0000\u0080\u0081\n\u0002\u0000"+
		"\u0000\u0081\u0082\u00056\u0000\u0000\u0082\u0083\u0005%\u0000\u0000\u0083"+
		"\u0084\u0005,\u0000\u0000\u0084\u0086\u0003\f\u0006\u0000\u0085\u0080"+
		"\u0001\u0000\u0000\u0000\u0086\u0089\u0001\u0000\u0000\u0000\u0087\u0085"+
		"\u0001\u0000\u0000\u0000\u0087\u0088\u0001\u0000\u0000\u0000\u0088\u000b"+
		"\u0001\u0000\u0000\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u008a\u008b"+
		"\u0005-\u0000\u0000\u008b\u0098\u0005%\u0000\u0000\u008c\u008d\u0005."+
		"\u0000\u0000\u008d\u0098\u0005%\u0000\u0000\u008e\u0098\u0005%\u0000\u0000"+
		"\u008f\u0090\u0005-\u0000\u0000\u0090\u0098\u0005\'\u0000\u0000\u0091"+
		"\u0092\u0005.\u0000\u0000\u0092\u0098\u0005\'\u0000\u0000\u0093\u0098"+
		"\u0005\'\u0000\u0000\u0094\u0095\u00057\u0000\u0000\u0095\u0096\u0005"+
		"&\u0000\u0000\u0096\u0098\u00057\u0000\u0000\u0097\u008a\u0001\u0000\u0000"+
		"\u0000\u0097\u008c\u0001\u0000\u0000\u0000\u0097\u008e\u0001\u0000\u0000"+
		"\u0000\u0097\u008f\u0001\u0000\u0000\u0000\u0097\u0091\u0001\u0000\u0000"+
		"\u0000\u0097\u0093\u0001\u0000\u0000\u0000\u0097\u0094\u0001\u0000\u0000"+
		"\u0000\u0098\r\u0001\u0000\u0000\u0000\u0099\u009a\u0005!\u0000\u0000"+
		"\u009a\u009b\u0003\u0010\b\u0000\u009b\u009c\u00056\u0000\u0000\u009c"+
		"\u009f\u0001\u0000\u0000\u0000\u009d\u009f\u0001\u0000\u0000\u0000\u009e"+
		"\u0099\u0001\u0000\u0000\u0000\u009e\u009d\u0001\u0000\u0000\u0000\u009f"+
		"\u000f\u0001\u0000\u0000\u0000\u00a0\u00a1\u0006\b\uffff\uffff\u0000\u00a1"+
		"\u00a2\u0005%\u0000\u0000\u00a2\u00a3\u0005,\u0000\u0000\u00a3\u00a4\u0003"+
		"\u0012\t\u0000\u00a4\u00ac\u0001\u0000\u0000\u0000\u00a5\u00a6\n\u0002"+
		"\u0000\u0000\u00a6\u00a7\u00056\u0000\u0000\u00a7\u00a8\u0005%\u0000\u0000"+
		"\u00a8\u00a9\u0005,\u0000\u0000\u00a9\u00ab\u0003\u0012\t\u0000\u00aa"+
		"\u00a5\u0001\u0000\u0000\u0000\u00ab\u00ae\u0001\u0000\u0000\u0000\u00ac"+
		"\u00aa\u0001\u0000\u0000\u0000\u00ac\u00ad\u0001\u0000\u0000\u0000\u00ad"+
		"\u0011\u0001\u0000\u0000\u0000\u00ae\u00ac\u0001\u0000\u0000\u0000\u00af"+
		"\u00bc\u0003\u0014\n\u0000\u00b0\u00b1\u0005\u001c\u0000\u0000\u00b1\u00b2"+
		"\u0003\u0016\u000b\u0000\u00b2\u00b3\u0005\u0013\u0000\u0000\u00b3\u00bc"+
		"\u0001\u0000\u0000\u0000\u00b4\u00b5\u0005\u000b\u0000\u0000\u00b5\u00b6"+
		"\u0005:\u0000\u0000\u00b6\u00b7\u0003\u0018\f\u0000\u00b7\u00b8\u0005"+
		";\u0000\u0000\u00b8\u00b9\u0005\u0019\u0000\u0000\u00b9\u00ba\u0003\u0012"+
		"\t\u0000\u00ba\u00bc\u0001\u0000\u0000\u0000\u00bb\u00af\u0001\u0000\u0000"+
		"\u0000\u00bb\u00b0\u0001\u0000\u0000\u0000\u00bb\u00b4\u0001\u0000\u0000"+
		"\u0000\u00bc\u0013\u0001\u0000\u0000\u0000\u00bd\u00be\u0007\u0000\u0000"+
		"\u0000\u00be\u0015\u0001\u0000\u0000\u0000\u00bf\u00c2\u0003\u001e\u000f"+
		"\u0000\u00c0\u00c2\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001\u0000\u0000"+
		"\u0000\u00c1\u00c0\u0001\u0000\u0000\u0000\u00c2\u0017\u0001\u0000\u0000"+
		"\u0000\u00c3\u00c4\u0006\f\uffff\uffff\u0000\u00c4\u00c5\u0003\u001a\r"+
		"\u0000\u00c5\u00cb\u0001\u0000\u0000\u0000\u00c6\u00c7\n\u0002\u0000\u0000"+
		"\u00c7\u00c8\u00054\u0000\u0000\u00c8\u00ca\u0003\u001a\r\u0000\u00c9"+
		"\u00c6\u0001\u0000\u0000\u0000\u00ca\u00cd\u0001\u0000\u0000\u0000\u00cb"+
		"\u00c9\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000\u0000\u0000\u00cc"+
		"\u0019\u0001\u0000\u0000\u0000\u00cd\u00cb\u0001\u0000\u0000\u0000\u00ce"+
		"\u00cf\u0003\f\u0006\u0000\u00cf\u00d0\u00052\u0000\u0000\u00d0\u00d1"+
		"\u0003\f\u0006\u0000\u00d1\u001b\u0001\u0000\u0000\u0000\u00d2\u00d3\u0005"+
		"#\u0000\u0000\u00d3\u00d4\u0003\u001e\u000f\u0000\u00d4\u00d5\u00056\u0000"+
		"\u0000\u00d5\u00d8\u0001\u0000\u0000\u0000\u00d6\u00d8\u0001\u0000\u0000"+
		"\u0000\u00d7\u00d2\u0001\u0000\u0000\u0000\u00d7\u00d6\u0001\u0000\u0000"+
		"\u0000\u00d8\u001d\u0001\u0000\u0000\u0000\u00d9\u00da\u0006\u000f\uffff"+
		"\uffff\u0000\u00da\u00db\u0003\u0006\u0003\u0000\u00db\u00dc\u00055\u0000"+
		"\u0000\u00dc\u00dd\u0003\u0012\t\u0000\u00dd\u00e6\u0001\u0000\u0000\u0000"+
		"\u00de\u00df\n\u0002\u0000\u0000\u00df\u00e0\u00056\u0000\u0000\u00e0"+
		"\u00e1\u0003\u0006\u0003\u0000\u00e1\u00e2\u00055\u0000\u0000\u00e2\u00e3"+
		"\u0003\u0012\t\u0000\u00e3\u00e5\u0001\u0000\u0000\u0000\u00e4\u00de\u0001"+
		"\u0000\u0000\u0000\u00e5\u00e8\u0001\u0000\u0000\u0000\u00e6\u00e4\u0001"+
		"\u0000\u0000\u0000\u00e6\u00e7\u0001\u0000\u0000\u0000\u00e7\u001f\u0001"+
		"\u0000\u0000\u0000\u00e8\u00e6\u0001\u0000\u0000\u0000\u00e9\u00ee\u0006"+
		"\u0010\uffff\uffff\u0000\u00ea\u00eb\n\u0002\u0000\u0000\u00eb\u00ed\u0003"+
		"\"\u0011\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ed\u00f0\u0001\u0000"+
		"\u0000\u0000\u00ee\u00ec\u0001\u0000\u0000\u0000\u00ee\u00ef\u0001\u0000"+
		"\u0000\u0000\u00ef!\u0001\u0000\u0000\u0000\u00f0\u00ee\u0001\u0000\u0000"+
		"\u0000\u00f1\u00f2\u0003$\u0012\u0000\u00f2\u00f3\u0003\u0004\u0002\u0000"+
		"\u00f3\u00f4\u00056\u0000\u0000\u00f4#\u0001\u0000\u0000\u0000\u00f5\u00f6"+
		"\u0005\u0016\u0000\u0000\u00f6\u00f7\u0005%\u0000\u0000\u00f7\u00f8\u0003"+
		"&\u0013\u0000\u00f8\u00f9\u00055\u0000\u0000\u00f9\u00fa\u0003\u0014\n"+
		"\u0000\u00fa\u00fb\u00056\u0000\u0000\u00fb\u0102\u0001\u0000\u0000\u0000"+
		"\u00fc\u00fd\u0005\u001a\u0000\u0000\u00fd\u00fe\u0005%\u0000\u0000\u00fe"+
		"\u00ff\u0003&\u0013\u0000\u00ff\u0100\u00056\u0000\u0000\u0100\u0102\u0001"+
		"\u0000\u0000\u0000\u0101\u00f5\u0001\u0000\u0000\u0000\u0101\u00fc\u0001"+
		"\u0000\u0000\u0000\u0102%\u0001\u0000\u0000\u0000\u0103\u0104\u00058\u0000"+
		"\u0000\u0104\u0105\u0003(\u0014\u0000\u0105\u0106\u00059\u0000\u0000\u0106"+
		"\u0109\u0001\u0000\u0000\u0000\u0107\u0109\u0001\u0000\u0000\u0000\u0108"+
		"\u0103\u0001\u0000\u0000\u0000\u0108\u0107\u0001\u0000\u0000\u0000\u0109"+
		"\'\u0001\u0000\u0000\u0000\u010a\u010b\u0006\u0014\uffff\uffff\u0000\u010b"+
		"\u010c\u0003*\u0015\u0000\u010c\u0112\u0001\u0000\u0000\u0000\u010d\u010e"+
		"\n\u0002\u0000\u0000\u010e\u010f\u00056\u0000\u0000\u010f\u0111\u0003"+
		"*\u0015\u0000\u0110\u010d\u0001\u0000\u0000\u0000\u0111\u0114\u0001\u0000"+
		"\u0000\u0000\u0112\u0110\u0001\u0000\u0000\u0000\u0112\u0113\u0001\u0000"+
		"\u0000\u0000\u0113)\u0001\u0000\u0000\u0000\u0114\u0112\u0001\u0000\u0000"+
		"\u0000\u0115\u0118\u0003,\u0016\u0000\u0116\u0118\u0003.\u0017\u0000\u0117"+
		"\u0115\u0001\u0000\u0000\u0000\u0117\u0116\u0001\u0000\u0000\u0000\u0118"+
		"+\u0001\u0000\u0000\u0000\u0119\u011a\u0005#\u0000\u0000\u011a\u011b\u0003"+
		".\u0017\u0000\u011b-\u0001\u0000\u0000\u0000\u011c\u011d\u0003\u0006\u0003"+
		"\u0000\u011d\u011e\u00055\u0000\u0000\u011e\u011f\u0003\u0014\n\u0000"+
		"\u011f/\u0001\u0000\u0000\u0000\u0120\u0121\u0005\f\u0000\u0000\u0121"+
		"\u0122\u00032\u0019\u0000\u0122\u0123\u0005\u0013\u0000\u0000\u01231\u0001"+
		"\u0000\u0000\u0000\u0124\u0125\u0006\u0019\uffff\uffff\u0000\u0125\u0126"+
		"\u00034\u001a\u0000\u0126\u012c\u0001\u0000\u0000\u0000\u0127\u0128\n"+
		"\u0002\u0000\u0000\u0128\u0129\u00056\u0000\u0000\u0129\u012b\u00034\u001a"+
		"\u0000\u012a\u0127\u0001\u0000\u0000\u0000\u012b\u012e\u0001\u0000\u0000"+
		"\u0000\u012c\u012a\u0001\u0000\u0000\u0000\u012c\u012d\u0001\u0000\u0000"+
		"\u0000\u012d3\u0001\u0000\u0000\u0000\u012e\u012c\u0001\u0000\u0000\u0000"+
		"\u012f\u0130\u00036\u001b\u0000\u0130\u0131\u00051\u0000\u0000\u0131\u0132"+
		"\u0003L&\u0000\u0132\u0156\u0001\u0000\u0000\u0000\u0133\u0156\u0003H"+
		"$\u0000\u0134\u0156\u00030\u0018\u0000\u0135\u0136\u0005\u0017\u0000\u0000"+
		"\u0136\u0137\u0003L&\u0000\u0137\u0138\u0005\u001e\u0000\u0000\u0138\u0139"+
		"\u00034\u001a\u0000\u0139\u013a\u0003<\u001e\u0000\u013a\u0156\u0001\u0000"+
		"\u0000\u0000\u013b\u013c\u0005\r\u0000\u0000\u013c\u013d\u0003L&\u0000"+
		"\u013d\u013e\u0005\u0019\u0000\u0000\u013e\u013f\u0003>\u001f\u0000\u013f"+
		"\u0140\u0005\u0013\u0000\u0000\u0140\u0156\u0001\u0000\u0000\u0000\u0141"+
		"\u0142\u0005$\u0000\u0000\u0142\u0143\u0003L&\u0000\u0143\u0144\u0005"+
		"\u0010\u0000\u0000\u0144\u0145\u00034\u001a\u0000\u0145\u0156\u0001\u0000"+
		"\u0000\u0000\u0146\u0147\u0005\u001d\u0000\u0000\u0147\u0148\u00032\u0019"+
		"\u0000\u0148\u0149\u0005\"\u0000\u0000\u0149\u014a\u0003L&\u0000\u014a"+
		"\u0156\u0001\u0000\u0000\u0000\u014b\u014c\u0005\u0015\u0000\u0000\u014c"+
		"\u014d\u0005%\u0000\u0000\u014d\u014e\u00051\u0000\u0000\u014e\u014f\u0003"+
		"L&\u0000\u014f\u0150\u0003F#\u0000\u0150\u0151\u0003L&\u0000\u0151\u0152"+
		"\u0005\u0010\u0000\u0000\u0152\u0153\u00034\u001a\u0000\u0153\u0156\u0001"+
		"\u0000\u0000\u0000\u0154\u0156\u0001\u0000\u0000\u0000\u0155\u012f\u0001"+
		"\u0000\u0000\u0000\u0155\u0133\u0001\u0000\u0000\u0000\u0155\u0134\u0001"+
		"\u0000\u0000\u0000\u0155\u0135\u0001\u0000\u0000\u0000\u0155\u013b\u0001"+
		"\u0000\u0000\u0000\u0155\u0141\u0001\u0000\u0000\u0000\u0155\u0146\u0001"+
		"\u0000\u0000\u0000\u0155\u014b\u0001\u0000\u0000\u0000\u0155\u0154\u0001"+
		"\u0000\u0000\u0000\u01565\u0001\u0000\u0000\u0000\u0157\u0158\u0005%\u0000"+
		"\u0000\u0158\u0159\u00038\u001c\u0000\u01597\u0001\u0000\u0000\u0000\u015a"+
		"\u015f\u0006\u001c\uffff\uffff\u0000\u015b\u015c\n\u0002\u0000\u0000\u015c"+
		"\u015e\u0003:\u001d\u0000\u015d\u015b\u0001\u0000\u0000\u0000\u015e\u0161"+
		"\u0001\u0000\u0000\u0000\u015f\u015d\u0001\u0000\u0000\u0000\u015f\u0160"+
		"\u0001\u0000\u0000\u0000\u01609\u0001\u0000\u0000\u0000\u0161\u015f\u0001"+
		"\u0000\u0000\u0000\u0162\u0163\u0005:\u0000\u0000\u0163\u0164\u0003J%"+
		"\u0000\u0164\u0165\u0005;\u0000\u0000\u0165\u0169\u0001\u0000\u0000\u0000"+
		"\u0166\u0167\u00053\u0000\u0000\u0167\u0169\u0005%\u0000\u0000\u0168\u0162"+
		"\u0001\u0000\u0000\u0000\u0168\u0166\u0001\u0000\u0000\u0000\u0169;\u0001"+
		"\u0000\u0000\u0000\u016a\u016b\u0005\u0012\u0000\u0000\u016b\u016e\u0003"+
		"4\u001a\u0000\u016c\u016e\u0001\u0000\u0000\u0000\u016d\u016a\u0001\u0000"+
		"\u0000\u0000\u016d\u016c\u0001\u0000\u0000\u0000\u016e=\u0001\u0000\u0000"+
		"\u0000\u016f\u0172\u0003@ \u0000\u0170\u0172\u0001\u0000\u0000\u0000\u0171"+
		"\u016f\u0001\u0000\u0000\u0000\u0171\u0170\u0001\u0000\u0000\u0000\u0172"+
		"?\u0001\u0000\u0000\u0000\u0173\u0174\u0006 \uffff\uffff\u0000\u0174\u0175"+
		"\u0003B!\u0000\u0175\u017b\u0001\u0000\u0000\u0000\u0176\u0177\n\u0002"+
		"\u0000\u0000\u0177\u0178\u00056\u0000\u0000\u0178\u017a\u0003B!\u0000"+
		"\u0179\u0176\u0001\u0000\u0000\u0000\u017a\u017d\u0001\u0000\u0000\u0000"+
		"\u017b\u0179\u0001\u0000\u0000\u0000\u017b\u017c\u0001\u0000\u0000\u0000"+
		"\u017cA\u0001\u0000\u0000\u0000\u017d\u017b\u0001\u0000\u0000\u0000\u017e"+
		"\u017f\u0003D\"\u0000\u017f\u0180\u00055\u0000\u0000\u0180\u0181\u0003"+
		"4\u001a\u0000\u0181C\u0001\u0000\u0000\u0000\u0182\u0183\u0006\"\uffff"+
		"\uffff\u0000\u0183\u0184\u0003\f\u0006\u0000\u0184\u018a\u0001\u0000\u0000"+
		"\u0000\u0185\u0186\n\u0002\u0000\u0000\u0186\u0187\u00054\u0000\u0000"+
		"\u0187\u0189\u0003\f\u0006\u0000\u0188\u0185\u0001\u0000\u0000\u0000\u0189"+
		"\u018c\u0001\u0000\u0000\u0000\u018a\u0188\u0001\u0000\u0000\u0000\u018a"+
		"\u018b\u0001\u0000\u0000\u0000\u018bE\u0001\u0000\u0000\u0000\u018c\u018a"+
		"\u0001\u0000\u0000\u0000\u018d\u018e\u0007\u0001\u0000\u0000\u018eG\u0001"+
		"\u0000\u0000\u0000\u018f\u0196\u0005%\u0000\u0000\u0190\u0191\u0005%\u0000"+
		"\u0000\u0191\u0192\u00058\u0000\u0000\u0192\u0193\u0003J%\u0000\u0193"+
		"\u0194\u00059\u0000\u0000\u0194\u0196\u0001\u0000\u0000\u0000\u0195\u018f"+
		"\u0001\u0000\u0000\u0000\u0195\u0190\u0001\u0000\u0000\u0000\u0196I\u0001"+
		"\u0000\u0000\u0000\u0197\u0198\u0006%\uffff\uffff\u0000\u0198\u0199\u0003"+
		"L&\u0000\u0199\u019f\u0001\u0000\u0000\u0000\u019a\u019b\n\u0002\u0000"+
		"\u0000\u019b\u019c\u00054\u0000\u0000\u019c\u019e\u0003L&\u0000\u019d"+
		"\u019a\u0001\u0000\u0000\u0000\u019e\u01a1\u0001\u0000\u0000\u0000\u019f"+
		"\u019d\u0001\u0000\u0000\u0000\u019f\u01a0\u0001\u0000\u0000\u0000\u01a0"+
		"K\u0001\u0000\u0000\u0000\u01a1\u019f\u0001\u0000\u0000\u0000\u01a2\u01a3"+
		"\u0003N\'\u0000\u01a3\u01a4\u0005\u0001\u0000\u0000\u01a4\u01a5\u0003"+
		"N\'\u0000\u01a5\u01a8\u0001\u0000\u0000\u0000\u01a6\u01a8\u0003N\'\u0000"+
		"\u01a7\u01a2\u0001\u0000\u0000\u0000\u01a7\u01a6\u0001\u0000\u0000\u0000"+
		"\u01a8M\u0001\u0000\u0000\u0000\u01a9\u01aa\u0006\'\uffff\uffff\u0000"+
		"\u01aa\u01b0\u0003P(\u0000\u01ab\u01ac\u0005-\u0000\u0000\u01ac\u01b0"+
		"\u0003P(\u0000\u01ad\u01ae\u0005.\u0000\u0000\u01ae\u01b0\u0003P(\u0000"+
		"\u01af\u01a9\u0001\u0000\u0000\u0000\u01af\u01ab\u0001\u0000\u0000\u0000"+
		"\u01af\u01ad\u0001\u0000\u0000\u0000\u01b0\u01b6\u0001\u0000\u0000\u0000"+
		"\u01b1\u01b2\n\u0001\u0000\u0000\u01b2\u01b3\u0005\u0002\u0000\u0000\u01b3"+
		"\u01b5\u0003P(\u0000\u01b4\u01b1\u0001\u0000\u0000\u0000\u01b5\u01b8\u0001"+
		"\u0000\u0000\u0000\u01b6\u01b4\u0001\u0000\u0000\u0000\u01b6\u01b7\u0001"+
		"\u0000\u0000\u0000\u01b7O\u0001\u0000\u0000\u0000\u01b8\u01b6\u0001\u0000"+
		"\u0000\u0000\u01b9\u01ba\u0006(\uffff\uffff\u0000\u01ba\u01bb\u0003T*"+
		"\u0000\u01bb\u01c1\u0001\u0000\u0000\u0000\u01bc\u01bd\n\u0002\u0000\u0000"+
		"\u01bd\u01be\u0005\u0003\u0000\u0000\u01be\u01c0\u0003T*\u0000\u01bf\u01bc"+
		"\u0001\u0000\u0000\u0000\u01c0\u01c3\u0001\u0000\u0000\u0000\u01c1\u01bf"+
		"\u0001\u0000\u0000\u0000\u01c1\u01c2\u0001\u0000\u0000\u0000\u01c2Q\u0001"+
		"\u0000\u0000\u0000\u01c3\u01c1\u0001\u0000\u0000\u0000\u01c4\u01c5\u0007"+
		"\u0002\u0000\u0000\u01c5S\u0001\u0000\u0000\u0000\u01c6\u01d5\u0003V+"+
		"\u0000\u01c7\u01d5\u00036\u001b\u0000\u01c8\u01c9\u0005%\u0000\u0000\u01c9"+
		"\u01ca\u00058\u0000\u0000\u01ca\u01cb\u0003J%\u0000\u01cb\u01cc\u0005"+
		"9\u0000\u0000\u01cc\u01d5\u0001\u0000\u0000\u0000\u01cd\u01ce\u00058\u0000"+
		"\u0000\u01ce\u01cf\u0003L&\u0000\u01cf\u01d0\u00059\u0000\u0000\u01d0"+
		"\u01d5\u0001\u0000\u0000\u0000\u01d1\u01d2\u0005\u0006\u0000\u0000\u01d2"+
		"\u01d5\u0003T*\u0000\u01d3\u01d5\u0003R)\u0000\u01d4\u01c6\u0001\u0000"+
		"\u0000\u0000\u01d4\u01c7\u0001\u0000\u0000\u0000\u01d4\u01c8\u0001\u0000"+
		"\u0000\u0000\u01d4\u01cd\u0001\u0000\u0000\u0000\u01d4\u01d1\u0001\u0000"+
		"\u0000\u0000\u01d4\u01d3\u0001\u0000\u0000\u0000\u01d5U\u0001\u0000\u0000"+
		"\u0000\u01d6\u01dc\u0005%\u0000\u0000\u01d7\u01dc\u0005\'\u0000\u0000"+
		"\u01d8\u01d9\u00057\u0000\u0000\u01d9\u01da\u0005&\u0000\u0000\u01da\u01dc"+
		"\u00057\u0000\u0000\u01db\u01d6\u0001\u0000\u0000\u0000\u01db\u01d7\u0001"+
		"\u0000\u0000\u0000\u01db\u01d8\u0001\u0000\u0000\u0000\u01dcW\u0001\u0000"+
		"\u0000\u0000 qy\u0087\u0097\u009e\u00ac\u00bb\u00c1\u00cb\u00d7\u00e6"+
		"\u00ee\u0101\u0108\u0112\u0117\u012c\u0155\u015f\u0168\u016d\u0171\u017b"+
		"\u018a\u0195\u019f\u01a7\u01af\u01b6\u01c1\u01d4\u01db";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}