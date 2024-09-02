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
public class PascalS extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		RELOP=1, ADDOP=2, MULOP=3, AND=4, OR=5, NOT=6, INTEGER=7, REAL=8, BOOLEAN=9, 
		CHAR=10, ARRAY=11, BEGIN=12, CASE=13, CONST=14, DIV=15, DO=16, DOWNTO=17, 
		ELSE=18, END=19, FOR=20, FUNCTION=21, IF=22, MOD=23, OF=24, PROCEDURE=25, 
		PROGRAM=26, RECORD=27, REPEAT=28, THEN=29, TO=30, TYPE=31, UNTIL=32, VAR=33, 
		WHILE=34, ID=35, LETTER=36, NUM=37, EXPONENT=38, FRAC=39, DIGITS=40, DIGIT=41, 
		EQUAL=42, PLUS=43, MINUS=44, MULT=45, DIVIDE=46, ASSIGNOP=47, PERIODOP=48, 
		DOT=49, COMMA=50, COLON=51, SEMICOLON=52, QUOTE=53, LPAREN=54, RPAREN=55, 
		LBRACKET=56, RBRACKET=57, NEWLINE=58, WS=59;
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
		RULE_expression = 38, RULE_simpleExpression = 39, RULE_term = 40, RULE_factor = 41, 
		RULE_unsignConstVariable = 42;
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
			"expressionList", "expression", "simpleExpression", "term", "factor", 
			"unsignConstVariable"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'and'", "'or'", "'not'", "'integer'", "'real'", 
			"'boolean'", "'char'", "'array'", "'begin'", "'case'", "'const'", "'div'", 
			"'do'", "'downto'", "'else'", "'end'", "'for'", "'function'", "'if'", 
			"'mod'", "'of'", "'procedure'", "'program'", "'record'", "'repeat'", 
			"'then'", "'to'", "'type'", "'until'", "'var'", "'while'", null, null, 
			null, null, null, null, null, "'='", "'+'", "'-'", "'*'", "'/'", "':='", 
			"'..'", "'.'", "','", "':'", "';'", "'''", "'('", "')'", "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "RELOP", "ADDOP", "MULOP", "AND", "OR", "NOT", "INTEGER", "REAL", 
			"BOOLEAN", "CHAR", "ARRAY", "BEGIN", "CASE", "CONST", "DIV", "DO", "DOWNTO", 
			"ELSE", "END", "FOR", "FUNCTION", "IF", "MOD", "OF", "PROCEDURE", "PROGRAM", 
			"RECORD", "REPEAT", "THEN", "TO", "TYPE", "UNTIL", "VAR", "WHILE", "ID", 
			"LETTER", "NUM", "EXPONENT", "FRAC", "DIGITS", "DIGIT", "EQUAL", "PLUS", 
			"MINUS", "MULT", "DIVIDE", "ASSIGNOP", "PERIODOP", "DOT", "COMMA", "COLON", 
			"SEMICOLON", "QUOTE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "NEWLINE", 
			"WS"
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

	public PascalS(TokenStream input) {
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
		public TerminalNode DOT() { return getToken(PascalS.DOT, 0); }
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
			setState(86);
			programHead();
			setState(87);
			programBody();
			setState(88);
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
		public TerminalNode PROGRAM() { return getToken(PascalS.PROGRAM, 0); }
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalS.LPAREN, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalS.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(90);
			match(PROGRAM);
			setState(91);
			match(ID);
			setState(92);
			match(LPAREN);
			setState(93);
			identifierList(0);
			setState(94);
			match(RPAREN);
			setState(95);
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
			setState(97);
			constDeclarations();
			setState(98);
			typeDeclarations();
			setState(99);
			varDeclarations();
			setState(100);
			subprogramDeclarations(0);
			setState(101);
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(PascalS.COMMA, 0); }
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
			setState(104);
			match(ID);
			}
			_ctx.stop = _input.LT(-1);
			setState(111);
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
					setState(106);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(107);
					match(COMMA);
					setState(108);
					match(ID);
					}
					} 
				}
				setState(113);
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
		public TerminalNode CONST() { return getToken(PascalS.CONST, 0); }
		public ConstDeclarationContext constDeclaration() {
			return getRuleContext(ConstDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
		public ConstDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constDeclarations; }
	}

	public final ConstDeclarationsContext constDeclarations() throws RecognitionException {
		ConstDeclarationsContext _localctx = new ConstDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_constDeclarations);
		try {
			setState(119);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(114);
				match(CONST);
				setState(115);
				constDeclaration(0);
				setState(116);
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalS.EQUAL, 0); }
		public ConstVariableContext constVariable() {
			return getRuleContext(ConstVariableContext.class,0);
		}
		public ConstDeclarationContext constDeclaration() {
			return getRuleContext(ConstDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(122);
			match(ID);
			setState(123);
			match(EQUAL);
			setState(124);
			constVariable();
			}
			_ctx.stop = _input.LT(-1);
			setState(133);
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
					setState(126);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(127);
					match(SEMICOLON);
					setState(128);
					match(ID);
					setState(129);
					match(EQUAL);
					setState(130);
					constVariable();
					}
					} 
				}
				setState(135);
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
		public TerminalNode PLUS() { return getToken(PascalS.PLUS, 0); }
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode MINUS() { return getToken(PascalS.MINUS, 0); }
		public TerminalNode NUM() { return getToken(PascalS.NUM, 0); }
		public List<TerminalNode> QUOTE() { return getTokens(PascalS.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(PascalS.QUOTE, i);
		}
		public TerminalNode LETTER() { return getToken(PascalS.LETTER, 0); }
		public ConstVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constVariable; }
	}

	public final ConstVariableContext constVariable() throws RecognitionException {
		ConstVariableContext _localctx = new ConstVariableContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_constVariable);
		try {
			setState(149);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				match(PLUS);
				setState(137);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(138);
				match(MINUS);
				setState(139);
				match(ID);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(140);
				match(ID);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(141);
				match(PLUS);
				setState(142);
				match(NUM);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(143);
				match(MINUS);
				setState(144);
				match(NUM);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(145);
				match(NUM);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(146);
				match(QUOTE);
				setState(147);
				match(LETTER);
				setState(148);
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
		public TerminalNode TYPE() { return getToken(PascalS.TYPE, 0); }
		public TypeDeclarationContext typeDeclaration() {
			return getRuleContext(TypeDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
		public TypeDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclarations; }
	}

	public final TypeDeclarationsContext typeDeclarations() throws RecognitionException {
		TypeDeclarationsContext _localctx = new TypeDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_typeDeclarations);
		try {
			setState(156);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(151);
				match(TYPE);
				setState(152);
				typeDeclaration(0);
				setState(153);
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalS.EQUAL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeDeclarationContext typeDeclaration() {
			return getRuleContext(TypeDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(159);
			match(ID);
			setState(160);
			match(EQUAL);
			setState(161);
			type();
			}
			_ctx.stop = _input.LT(-1);
			setState(170);
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
					setState(163);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(164);
					match(SEMICOLON);
					setState(165);
					match(ID);
					setState(166);
					match(EQUAL);
					setState(167);
					type();
					}
					} 
				}
				setState(172);
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
		public TerminalNode RECORD() { return getToken(PascalS.RECORD, 0); }
		public RecordBodyContext recordBody() {
			return getRuleContext(RecordBodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalS.END, 0); }
		public TerminalNode ARRAY() { return getToken(PascalS.ARRAY, 0); }
		public TerminalNode LBRACKET() { return getToken(PascalS.LBRACKET, 0); }
		public PeriodsContext periods() {
			return getRuleContext(PeriodsContext.class,0);
		}
		public TerminalNode RBRACKET() { return getToken(PascalS.RBRACKET, 0); }
		public TerminalNode OF() { return getToken(PascalS.OF, 0); }
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
			setState(185);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
			case REAL:
			case BOOLEAN:
			case CHAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(173);
				standardType();
				}
				break;
			case RECORD:
				enterOuterAlt(_localctx, 2);
				{
				setState(174);
				match(RECORD);
				setState(175);
				recordBody();
				setState(176);
				match(END);
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 3);
				{
				setState(178);
				match(ARRAY);
				setState(179);
				match(LBRACKET);
				setState(180);
				periods(0);
				setState(181);
				match(RBRACKET);
				setState(182);
				match(OF);
				setState(183);
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
		public TerminalNode INTEGER() { return getToken(PascalS.INTEGER, 0); }
		public TerminalNode BOOLEAN() { return getToken(PascalS.BOOLEAN, 0); }
		public TerminalNode REAL() { return getToken(PascalS.REAL, 0); }
		public TerminalNode CHAR() { return getToken(PascalS.CHAR, 0); }
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
			setState(187);
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
			setState(191);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(189);
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
		public TerminalNode COMMA() { return getToken(PascalS.COMMA, 0); }
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
			setState(194);
			period();
			}
			_ctx.stop = _input.LT(-1);
			setState(201);
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
					setState(196);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(197);
					match(COMMA);
					setState(198);
					period();
					}
					} 
				}
				setState(203);
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
		public TerminalNode PERIODOP() { return getToken(PascalS.PERIODOP, 0); }
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
			setState(204);
			constVariable();
			setState(205);
			match(PERIODOP);
			setState(206);
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
		public TerminalNode VAR() { return getToken(PascalS.VAR, 0); }
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
		public VarDeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclarations; }
	}

	public final VarDeclarationsContext varDeclarations() throws RecognitionException {
		VarDeclarationsContext _localctx = new VarDeclarationsContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_varDeclarations);
		try {
			setState(213);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(208);
				match(VAR);
				setState(209);
				varDeclaration(0);
				setState(210);
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
		public TerminalNode COLON() { return getToken(PascalS.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(216);
			identifierList(0);
			setState(217);
			match(COLON);
			setState(218);
			type();
			}
			_ctx.stop = _input.LT(-1);
			setState(228);
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
					setState(220);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(221);
					match(SEMICOLON);
					setState(222);
					identifierList(0);
					setState(223);
					match(COLON);
					setState(224);
					type();
					}
					} 
				}
				setState(230);
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
			setState(236);
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
					setState(232);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(233);
					subprogramDeclaration();
					}
					} 
				}
				setState(238);
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
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(239);
			subprogramHead();
			setState(240);
			programBody();
			setState(241);
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
		public TerminalNode FUNCTION() { return getToken(PascalS.FUNCTION, 0); }
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public FormalParameterContext formalParameter() {
			return getRuleContext(FormalParameterContext.class,0);
		}
		public TerminalNode COLON() { return getToken(PascalS.COLON, 0); }
		public StandardTypeContext standardType() {
			return getRuleContext(StandardTypeContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
		public TerminalNode PROCEDURE() { return getToken(PascalS.PROCEDURE, 0); }
		public SubprogramHeadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogramHead; }
	}

	public final SubprogramHeadContext subprogramHead() throws RecognitionException {
		SubprogramHeadContext _localctx = new SubprogramHeadContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_subprogramHead);
		try {
			setState(255);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FUNCTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(243);
				match(FUNCTION);
				setState(244);
				match(ID);
				setState(245);
				formalParameter();
				setState(246);
				match(COLON);
				setState(247);
				standardType();
				setState(248);
				match(SEMICOLON);
				}
				break;
			case PROCEDURE:
				enterOuterAlt(_localctx, 2);
				{
				setState(250);
				match(PROCEDURE);
				setState(251);
				match(ID);
				setState(252);
				formalParameter();
				setState(253);
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
		public TerminalNode LPAREN() { return getToken(PascalS.LPAREN, 0); }
		public ParameterListsContext parameterLists() {
			return getRuleContext(ParameterListsContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalS.RPAREN, 0); }
		public FormalParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formalParameter; }
	}

	public final FormalParameterContext formalParameter() throws RecognitionException {
		FormalParameterContext _localctx = new FormalParameterContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_formalParameter);
		try {
			setState(262);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				enterOuterAlt(_localctx, 1);
				{
				setState(257);
				match(LPAREN);
				setState(258);
				parameterLists(0);
				setState(259);
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
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(265);
			parameterList();
			}
			_ctx.stop = _input.LT(-1);
			setState(272);
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
					setState(267);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(268);
					match(SEMICOLON);
					setState(269);
					parameterList();
					}
					} 
				}
				setState(274);
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
			setState(277);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(275);
				varParameter();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(276);
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
		public TerminalNode VAR() { return getToken(PascalS.VAR, 0); }
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
			setState(279);
			match(VAR);
			setState(280);
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
		public TerminalNode COLON() { return getToken(PascalS.COLON, 0); }
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
			setState(282);
			identifierList(0);
			setState(283);
			match(COLON);
			setState(284);
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
		public TerminalNode BEGIN() { return getToken(PascalS.BEGIN, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalS.END, 0); }
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
			setState(286);
			match(BEGIN);
			setState(287);
			statementList(0);
			setState(288);
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
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(291);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(298);
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
					setState(293);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(294);
					match(SEMICOLON);
					setState(295);
					statement();
					}
					} 
				}
				setState(300);
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
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ASSIGNOP() { return getToken(PascalS.ASSIGNOP, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public CallProcedureStatementContext callProcedureStatement() {
			return getRuleContext(CallProcedureStatementContext.class,0);
		}
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public TerminalNode IF() { return getToken(PascalS.IF, 0); }
		public TerminalNode THEN() { return getToken(PascalS.THEN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ElsePartContext elsePart() {
			return getRuleContext(ElsePartContext.class,0);
		}
		public TerminalNode CASE() { return getToken(PascalS.CASE, 0); }
		public TerminalNode OF() { return getToken(PascalS.OF, 0); }
		public CaseBodyContext caseBody() {
			return getRuleContext(CaseBodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalS.END, 0); }
		public TerminalNode WHILE() { return getToken(PascalS.WHILE, 0); }
		public TerminalNode DO() { return getToken(PascalS.DO, 0); }
		public TerminalNode REPEAT() { return getToken(PascalS.REPEAT, 0); }
		public StatementListContext statementList() {
			return getRuleContext(StatementListContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(PascalS.UNTIL, 0); }
		public TerminalNode FOR() { return getToken(PascalS.FOR, 0); }
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public UpdownContext updown() {
			return getRuleContext(UpdownContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_statement);
		try {
			setState(339);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(301);
				variable();
				setState(302);
				match(ASSIGNOP);
				setState(303);
				expression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(305);
				callProcedureStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(306);
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(307);
				match(IF);
				setState(308);
				expression();
				setState(309);
				match(THEN);
				setState(310);
				statement();
				setState(311);
				elsePart();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(313);
				match(CASE);
				setState(314);
				expression();
				setState(315);
				match(OF);
				setState(316);
				caseBody();
				setState(317);
				match(END);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(319);
				match(WHILE);
				setState(320);
				expression();
				setState(321);
				match(DO);
				setState(322);
				statement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(324);
				match(REPEAT);
				setState(325);
				statementList(0);
				setState(326);
				match(UNTIL);
				setState(327);
				expression();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(329);
				match(FOR);
				setState(330);
				match(ID);
				setState(331);
				match(ASSIGNOP);
				setState(332);
				expression();
				setState(333);
				updown();
				setState(334);
				expression();
				setState(335);
				match(DO);
				setState(336);
				statement();
				}
				break;
			case 9:
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
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
			setState(341);
			match(ID);
			setState(342);
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
			setState(349);
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
					setState(345);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(346);
					idVarpart();
					}
					} 
				}
				setState(351);
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
		public TerminalNode LBRACKET() { return getToken(PascalS.LBRACKET, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RBRACKET() { return getToken(PascalS.RBRACKET, 0); }
		public TerminalNode DOT() { return getToken(PascalS.DOT, 0); }
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public IdVarpartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idVarpart; }
	}

	public final IdVarpartContext idVarpart() throws RecognitionException {
		IdVarpartContext _localctx = new IdVarpartContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_idVarpart);
		try {
			setState(358);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(352);
				match(LBRACKET);
				setState(353);
				expressionList(0);
				setState(354);
				match(RBRACKET);
				}
				break;
			case DOT:
				enterOuterAlt(_localctx, 2);
				{
				setState(356);
				match(DOT);
				setState(357);
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
		public TerminalNode ELSE() { return getToken(PascalS.ELSE, 0); }
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
			setState(363);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(360);
				match(ELSE);
				setState(361);
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
			setState(367);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
			case NUM:
			case PLUS:
			case MINUS:
			case QUOTE:
				enterOuterAlt(_localctx, 1);
				{
				setState(365);
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
		public TerminalNode SEMICOLON() { return getToken(PascalS.SEMICOLON, 0); }
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
			setState(370);
			branch();
			}
			_ctx.stop = _input.LT(-1);
			setState(377);
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
					setState(372);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(373);
					match(SEMICOLON);
					setState(374);
					branch();
					}
					} 
				}
				setState(379);
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
		public TerminalNode COLON() { return getToken(PascalS.COLON, 0); }
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
			setState(380);
			constList(0);
			setState(381);
			match(COLON);
			setState(382);
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
		public TerminalNode COMMA() { return getToken(PascalS.COMMA, 0); }
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
			setState(385);
			constVariable();
			}
			_ctx.stop = _input.LT(-1);
			setState(392);
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
					setState(387);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(388);
					match(COMMA);
					setState(389);
					constVariable();
					}
					} 
				}
				setState(394);
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
		public TerminalNode TO() { return getToken(PascalS.TO, 0); }
		public TerminalNode DOWNTO() { return getToken(PascalS.DOWNTO, 0); }
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
			setState(395);
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalS.LPAREN, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalS.RPAREN, 0); }
		public CallProcedureStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callProcedureStatement; }
	}

	public final CallProcedureStatementContext callProcedureStatement() throws RecognitionException {
		CallProcedureStatementContext _localctx = new CallProcedureStatementContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_callProcedureStatement);
		try {
			setState(403);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(397);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(398);
				match(ID);
				setState(399);
				match(LPAREN);
				setState(400);
				expressionList(0);
				setState(401);
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
		public TerminalNode COMMA() { return getToken(PascalS.COMMA, 0); }
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
			setState(406);
			expression();
			}
			_ctx.stop = _input.LT(-1);
			setState(413);
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
					setState(408);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(409);
					match(COMMA);
					setState(410);
					expression();
					}
					} 
				}
				setState(415);
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
		public TerminalNode RELOP() { return getToken(PascalS.RELOP, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_expression);
		try {
			setState(421);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(416);
				simpleExpression(0);
				setState(417);
				match(RELOP);
				setState(418);
				simpleExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(420);
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
		public TerminalNode PLUS() { return getToken(PascalS.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(PascalS.MINUS, 0); }
		public SimpleExpressionContext simpleExpression() {
			return getRuleContext(SimpleExpressionContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(PascalS.ADDOP, 0); }
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
			setState(429);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOT:
			case ID:
			case NUM:
			case QUOTE:
			case LPAREN:
				{
				setState(424);
				term(0);
				}
				break;
			case PLUS:
				{
				setState(425);
				match(PLUS);
				setState(426);
				term(0);
				}
				break;
			case MINUS:
				{
				setState(427);
				match(MINUS);
				setState(428);
				term(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(436);
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
					setState(431);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(432);
					match(ADDOP);
					setState(433);
					term(0);
					}
					} 
				}
				setState(438);
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
		public TerminalNode MULOP() { return getToken(PascalS.MULOP, 0); }
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
			setState(440);
			factor();
			}
			_ctx.stop = _input.LT(-1);
			setState(447);
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
					setState(442);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(443);
					match(MULOP);
					setState(444);
					factor();
					}
					} 
				}
				setState(449);
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
	public static class FactorContext extends ParserRuleContext {
		public UnsignConstVariableContext unsignConstVariable() {
			return getRuleContext(UnsignConstVariableContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode LPAREN() { return getToken(PascalS.LPAREN, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(PascalS.RPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(PascalS.NOT, 0); }
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_factor);
		try {
			setState(463);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(450);
				unsignConstVariable();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(451);
				variable();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(452);
				match(ID);
				setState(453);
				match(LPAREN);
				setState(454);
				expressionList(0);
				setState(455);
				match(RPAREN);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(457);
				match(LPAREN);
				setState(458);
				expression();
				setState(459);
				match(RPAREN);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(461);
				match(NOT);
				setState(462);
				factor();
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
		public TerminalNode ID() { return getToken(PascalS.ID, 0); }
		public TerminalNode NUM() { return getToken(PascalS.NUM, 0); }
		public List<TerminalNode> QUOTE() { return getTokens(PascalS.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(PascalS.QUOTE, i);
		}
		public TerminalNode LETTER() { return getToken(PascalS.LETTER, 0); }
		public UnsignConstVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsignConstVariable; }
	}

	public final UnsignConstVariableContext unsignConstVariable() throws RecognitionException {
		UnsignConstVariableContext _localctx = new UnsignConstVariableContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_unsignConstVariable);
		try {
			setState(470);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(465);
				match(ID);
				}
				break;
			case NUM:
				enterOuterAlt(_localctx, 2);
				{
				setState(466);
				match(NUM);
				}
				break;
			case QUOTE:
				enterOuterAlt(_localctx, 3);
				{
				setState(467);
				match(QUOTE);
				setState(468);
				match(LETTER);
				setState(469);
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
		"\u0004\u0001;\u01d9\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
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
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0005\u0003n\b\u0003\n\u0003\f\u0003q\t\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004"+
		"x\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005\u0005"+
		"\u0084\b\u0005\n\u0005\f\u0005\u0087\t\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u0096"+
		"\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003"+
		"\u0007\u009d\b\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0005\b\u00a9\b\b\n\b\f\b\u00ac\t\b\u0001\t"+
		"\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0003\t\u00ba\b\t\u0001\n\u0001\n\u0001\u000b\u0001"+
		"\u000b\u0003\u000b\u00c0\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0005\f\u00c8\b\f\n\f\f\f\u00cb\t\f\u0001\r\u0001\r\u0001\r"+
		"\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003"+
		"\u000e\u00d6\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0005\u000f\u00e3\b\u000f\n\u000f\f\u000f\u00e6\t\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0005\u0010\u00eb\b\u0010\n\u0010\f\u0010\u00ee"+
		"\t\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u0100"+
		"\b\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0003"+
		"\u0013\u0107\b\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0005\u0014\u010f\b\u0014\n\u0014\f\u0014\u0112\t\u0014"+
		"\u0001\u0015\u0001\u0015\u0003\u0015\u0116\b\u0015\u0001\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0005\u0019\u0129\b\u0019\n\u0019"+
		"\f\u0019\u012c\t\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0003\u001a\u0154\b\u001a"+
		"\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001\u001c"+
		"\u0005\u001c\u015c\b\u001c\n\u001c\f\u001c\u015f\t\u001c\u0001\u001d\u0001"+
		"\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0003\u001d\u0167"+
		"\b\u001d\u0001\u001e\u0001\u001e\u0001\u001e\u0003\u001e\u016c\b\u001e"+
		"\u0001\u001f\u0001\u001f\u0003\u001f\u0170\b\u001f\u0001 \u0001 \u0001"+
		" \u0001 \u0001 \u0001 \u0005 \u0178\b \n \f \u017b\t \u0001!\u0001!\u0001"+
		"!\u0001!\u0001\"\u0001\"\u0001\"\u0001\"\u0001\"\u0001\"\u0005\"\u0187"+
		"\b\"\n\"\f\"\u018a\t\"\u0001#\u0001#\u0001$\u0001$\u0001$\u0001$\u0001"+
		"$\u0001$\u0003$\u0194\b$\u0001%\u0001%\u0001%\u0001%\u0001%\u0001%\u0005"+
		"%\u019c\b%\n%\f%\u019f\t%\u0001&\u0001&\u0001&\u0001&\u0001&\u0003&\u01a6"+
		"\b&\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0003\'\u01ae\b\'"+
		"\u0001\'\u0001\'\u0001\'\u0005\'\u01b3\b\'\n\'\f\'\u01b6\t\'\u0001(\u0001"+
		"(\u0001(\u0001(\u0001(\u0001(\u0005(\u01be\b(\n(\f(\u01c1\t(\u0001)\u0001"+
		")\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0001"+
		")\u0001)\u0003)\u01d0\b)\u0001*\u0001*\u0001*\u0001*\u0001*\u0003*\u01d7"+
		"\b*\u0001*\u0000\u000e\u0006\n\u0010\u0018\u001e (28@DJNP+\u0000\u0002"+
		"\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e"+
		" \"$&(*,.02468:<>@BDFHJLNPRT\u0000\u0002\u0001\u0000\u0007\n\u0002\u0000"+
		"\u0011\u0011\u001e\u001e\u01df\u0000V\u0001\u0000\u0000\u0000\u0002Z\u0001"+
		"\u0000\u0000\u0000\u0004a\u0001\u0000\u0000\u0000\u0006g\u0001\u0000\u0000"+
		"\u0000\bw\u0001\u0000\u0000\u0000\ny\u0001\u0000\u0000\u0000\f\u0095\u0001"+
		"\u0000\u0000\u0000\u000e\u009c\u0001\u0000\u0000\u0000\u0010\u009e\u0001"+
		"\u0000\u0000\u0000\u0012\u00b9\u0001\u0000\u0000\u0000\u0014\u00bb\u0001"+
		"\u0000\u0000\u0000\u0016\u00bf\u0001\u0000\u0000\u0000\u0018\u00c1\u0001"+
		"\u0000\u0000\u0000\u001a\u00cc\u0001\u0000\u0000\u0000\u001c\u00d5\u0001"+
		"\u0000\u0000\u0000\u001e\u00d7\u0001\u0000\u0000\u0000 \u00e7\u0001\u0000"+
		"\u0000\u0000\"\u00ef\u0001\u0000\u0000\u0000$\u00ff\u0001\u0000\u0000"+
		"\u0000&\u0106\u0001\u0000\u0000\u0000(\u0108\u0001\u0000\u0000\u0000*"+
		"\u0115\u0001\u0000\u0000\u0000,\u0117\u0001\u0000\u0000\u0000.\u011a\u0001"+
		"\u0000\u0000\u00000\u011e\u0001\u0000\u0000\u00002\u0122\u0001\u0000\u0000"+
		"\u00004\u0153\u0001\u0000\u0000\u00006\u0155\u0001\u0000\u0000\u00008"+
		"\u0158\u0001\u0000\u0000\u0000:\u0166\u0001\u0000\u0000\u0000<\u016b\u0001"+
		"\u0000\u0000\u0000>\u016f\u0001\u0000\u0000\u0000@\u0171\u0001\u0000\u0000"+
		"\u0000B\u017c\u0001\u0000\u0000\u0000D\u0180\u0001\u0000\u0000\u0000F"+
		"\u018b\u0001\u0000\u0000\u0000H\u0193\u0001\u0000\u0000\u0000J\u0195\u0001"+
		"\u0000\u0000\u0000L\u01a5\u0001\u0000\u0000\u0000N\u01ad\u0001\u0000\u0000"+
		"\u0000P\u01b7\u0001\u0000\u0000\u0000R\u01cf\u0001\u0000\u0000\u0000T"+
		"\u01d6\u0001\u0000\u0000\u0000VW\u0003\u0002\u0001\u0000WX\u0003\u0004"+
		"\u0002\u0000XY\u00051\u0000\u0000Y\u0001\u0001\u0000\u0000\u0000Z[\u0005"+
		"\u001a\u0000\u0000[\\\u0005#\u0000\u0000\\]\u00056\u0000\u0000]^\u0003"+
		"\u0006\u0003\u0000^_\u00057\u0000\u0000_`\u00054\u0000\u0000`\u0003\u0001"+
		"\u0000\u0000\u0000ab\u0003\b\u0004\u0000bc\u0003\u000e\u0007\u0000cd\u0003"+
		"\u001c\u000e\u0000de\u0003 \u0010\u0000ef\u00030\u0018\u0000f\u0005\u0001"+
		"\u0000\u0000\u0000gh\u0006\u0003\uffff\uffff\u0000hi\u0005#\u0000\u0000"+
		"io\u0001\u0000\u0000\u0000jk\n\u0002\u0000\u0000kl\u00052\u0000\u0000"+
		"ln\u0005#\u0000\u0000mj\u0001\u0000\u0000\u0000nq\u0001\u0000\u0000\u0000"+
		"om\u0001\u0000\u0000\u0000op\u0001\u0000\u0000\u0000p\u0007\u0001\u0000"+
		"\u0000\u0000qo\u0001\u0000\u0000\u0000rs\u0005\u000e\u0000\u0000st\u0003"+
		"\n\u0005\u0000tu\u00054\u0000\u0000ux\u0001\u0000\u0000\u0000vx\u0001"+
		"\u0000\u0000\u0000wr\u0001\u0000\u0000\u0000wv\u0001\u0000\u0000\u0000"+
		"x\t\u0001\u0000\u0000\u0000yz\u0006\u0005\uffff\uffff\u0000z{\u0005#\u0000"+
		"\u0000{|\u0005*\u0000\u0000|}\u0003\f\u0006\u0000}\u0085\u0001\u0000\u0000"+
		"\u0000~\u007f\n\u0002\u0000\u0000\u007f\u0080\u00054\u0000\u0000\u0080"+
		"\u0081\u0005#\u0000\u0000\u0081\u0082\u0005*\u0000\u0000\u0082\u0084\u0003"+
		"\f\u0006\u0000\u0083~\u0001\u0000\u0000\u0000\u0084\u0087\u0001\u0000"+
		"\u0000\u0000\u0085\u0083\u0001\u0000\u0000\u0000\u0085\u0086\u0001\u0000"+
		"\u0000\u0000\u0086\u000b\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000"+
		"\u0000\u0000\u0088\u0089\u0005+\u0000\u0000\u0089\u0096\u0005#\u0000\u0000"+
		"\u008a\u008b\u0005,\u0000\u0000\u008b\u0096\u0005#\u0000\u0000\u008c\u0096"+
		"\u0005#\u0000\u0000\u008d\u008e\u0005+\u0000\u0000\u008e\u0096\u0005%"+
		"\u0000\u0000\u008f\u0090\u0005,\u0000\u0000\u0090\u0096\u0005%\u0000\u0000"+
		"\u0091\u0096\u0005%\u0000\u0000\u0092\u0093\u00055\u0000\u0000\u0093\u0094"+
		"\u0005$\u0000\u0000\u0094\u0096\u00055\u0000\u0000\u0095\u0088\u0001\u0000"+
		"\u0000\u0000\u0095\u008a\u0001\u0000\u0000\u0000\u0095\u008c\u0001\u0000"+
		"\u0000\u0000\u0095\u008d\u0001\u0000\u0000\u0000\u0095\u008f\u0001\u0000"+
		"\u0000\u0000\u0095\u0091\u0001\u0000\u0000\u0000\u0095\u0092\u0001\u0000"+
		"\u0000\u0000\u0096\r\u0001\u0000\u0000\u0000\u0097\u0098\u0005\u001f\u0000"+
		"\u0000\u0098\u0099\u0003\u0010\b\u0000\u0099\u009a\u00054\u0000\u0000"+
		"\u009a\u009d\u0001\u0000\u0000\u0000\u009b\u009d\u0001\u0000\u0000\u0000"+
		"\u009c\u0097\u0001\u0000\u0000\u0000\u009c\u009b\u0001\u0000\u0000\u0000"+
		"\u009d\u000f\u0001\u0000\u0000\u0000\u009e\u009f\u0006\b\uffff\uffff\u0000"+
		"\u009f\u00a0\u0005#\u0000\u0000\u00a0\u00a1\u0005*\u0000\u0000\u00a1\u00a2"+
		"\u0003\u0012\t\u0000\u00a2\u00aa\u0001\u0000\u0000\u0000\u00a3\u00a4\n"+
		"\u0002\u0000\u0000\u00a4\u00a5\u00054\u0000\u0000\u00a5\u00a6\u0005#\u0000"+
		"\u0000\u00a6\u00a7\u0005*\u0000\u0000\u00a7\u00a9\u0003\u0012\t\u0000"+
		"\u00a8\u00a3\u0001\u0000\u0000\u0000\u00a9\u00ac\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a8\u0001\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000"+
		"\u00ab\u0011\u0001\u0000\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000"+
		"\u00ad\u00ba\u0003\u0014\n\u0000\u00ae\u00af\u0005\u001b\u0000\u0000\u00af"+
		"\u00b0\u0003\u0016\u000b\u0000\u00b0\u00b1\u0005\u0013\u0000\u0000\u00b1"+
		"\u00ba\u0001\u0000\u0000\u0000\u00b2\u00b3\u0005\u000b\u0000\u0000\u00b3"+
		"\u00b4\u00058\u0000\u0000\u00b4\u00b5\u0003\u0018\f\u0000\u00b5\u00b6"+
		"\u00059\u0000\u0000\u00b6\u00b7\u0005\u0018\u0000\u0000\u00b7\u00b8\u0003"+
		"\u0012\t\u0000\u00b8\u00ba\u0001\u0000\u0000\u0000\u00b9\u00ad\u0001\u0000"+
		"\u0000\u0000\u00b9\u00ae\u0001\u0000\u0000\u0000\u00b9\u00b2\u0001\u0000"+
		"\u0000\u0000\u00ba\u0013\u0001\u0000\u0000\u0000\u00bb\u00bc\u0007\u0000"+
		"\u0000\u0000\u00bc\u0015\u0001\u0000\u0000\u0000\u00bd\u00c0\u0003\u001e"+
		"\u000f\u0000\u00be\u00c0\u0001\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000"+
		"\u0000\u0000\u00bf\u00be\u0001\u0000\u0000\u0000\u00c0\u0017\u0001\u0000"+
		"\u0000\u0000\u00c1\u00c2\u0006\f\uffff\uffff\u0000\u00c2\u00c3\u0003\u001a"+
		"\r\u0000\u00c3\u00c9\u0001\u0000\u0000\u0000\u00c4\u00c5\n\u0002\u0000"+
		"\u0000\u00c5\u00c6\u00052\u0000\u0000\u00c6\u00c8\u0003\u001a\r\u0000"+
		"\u00c7\u00c4\u0001\u0000\u0000\u0000\u00c8\u00cb\u0001\u0000\u0000\u0000"+
		"\u00c9\u00c7\u0001\u0000\u0000\u0000\u00c9\u00ca\u0001\u0000\u0000\u0000"+
		"\u00ca\u0019\u0001\u0000\u0000\u0000\u00cb\u00c9\u0001\u0000\u0000\u0000"+
		"\u00cc\u00cd\u0003\f\u0006\u0000\u00cd\u00ce\u00050\u0000\u0000\u00ce"+
		"\u00cf\u0003\f\u0006\u0000\u00cf\u001b\u0001\u0000\u0000\u0000\u00d0\u00d1"+
		"\u0005!\u0000\u0000\u00d1\u00d2\u0003\u001e\u000f\u0000\u00d2\u00d3\u0005"+
		"4\u0000\u0000\u00d3\u00d6\u0001\u0000\u0000\u0000\u00d4\u00d6\u0001\u0000"+
		"\u0000\u0000\u00d5\u00d0\u0001\u0000\u0000\u0000\u00d5\u00d4\u0001\u0000"+
		"\u0000\u0000\u00d6\u001d\u0001\u0000\u0000\u0000\u00d7\u00d8\u0006\u000f"+
		"\uffff\uffff\u0000\u00d8\u00d9\u0003\u0006\u0003\u0000\u00d9\u00da\u0005"+
		"3\u0000\u0000\u00da\u00db\u0003\u0012\t\u0000\u00db\u00e4\u0001\u0000"+
		"\u0000\u0000\u00dc\u00dd\n\u0002\u0000\u0000\u00dd\u00de\u00054\u0000"+
		"\u0000\u00de\u00df\u0003\u0006\u0003\u0000\u00df\u00e0\u00053\u0000\u0000"+
		"\u00e0\u00e1\u0003\u0012\t\u0000\u00e1\u00e3\u0001\u0000\u0000\u0000\u00e2"+
		"\u00dc\u0001\u0000\u0000\u0000\u00e3\u00e6\u0001\u0000\u0000\u0000\u00e4"+
		"\u00e2\u0001\u0000\u0000\u0000\u00e4\u00e5\u0001\u0000\u0000\u0000\u00e5"+
		"\u001f\u0001\u0000\u0000\u0000\u00e6\u00e4\u0001\u0000\u0000\u0000\u00e7"+
		"\u00ec\u0006\u0010\uffff\uffff\u0000\u00e8\u00e9\n\u0002\u0000\u0000\u00e9"+
		"\u00eb\u0003\"\u0011\u0000\u00ea\u00e8\u0001\u0000\u0000\u0000\u00eb\u00ee"+
		"\u0001\u0000\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ec\u00ed"+
		"\u0001\u0000\u0000\u0000\u00ed!\u0001\u0000\u0000\u0000\u00ee\u00ec\u0001"+
		"\u0000\u0000\u0000\u00ef\u00f0\u0003$\u0012\u0000\u00f0\u00f1\u0003\u0004"+
		"\u0002\u0000\u00f1\u00f2\u00054\u0000\u0000\u00f2#\u0001\u0000\u0000\u0000"+
		"\u00f3\u00f4\u0005\u0015\u0000\u0000\u00f4\u00f5\u0005#\u0000\u0000\u00f5"+
		"\u00f6\u0003&\u0013\u0000\u00f6\u00f7\u00053\u0000\u0000\u00f7\u00f8\u0003"+
		"\u0014\n\u0000\u00f8\u00f9\u00054\u0000\u0000\u00f9\u0100\u0001\u0000"+
		"\u0000\u0000\u00fa\u00fb\u0005\u0019\u0000\u0000\u00fb\u00fc\u0005#\u0000"+
		"\u0000\u00fc\u00fd\u0003&\u0013\u0000\u00fd\u00fe\u00054\u0000\u0000\u00fe"+
		"\u0100\u0001\u0000\u0000\u0000\u00ff\u00f3\u0001\u0000\u0000\u0000\u00ff"+
		"\u00fa\u0001\u0000\u0000\u0000\u0100%\u0001\u0000\u0000\u0000\u0101\u0102"+
		"\u00056\u0000\u0000\u0102\u0103\u0003(\u0014\u0000\u0103\u0104\u00057"+
		"\u0000\u0000\u0104\u0107\u0001\u0000\u0000\u0000\u0105\u0107\u0001\u0000"+
		"\u0000\u0000\u0106\u0101\u0001\u0000\u0000\u0000\u0106\u0105\u0001\u0000"+
		"\u0000\u0000\u0107\'\u0001\u0000\u0000\u0000\u0108\u0109\u0006\u0014\uffff"+
		"\uffff\u0000\u0109\u010a\u0003*\u0015\u0000\u010a\u0110\u0001\u0000\u0000"+
		"\u0000\u010b\u010c\n\u0002\u0000\u0000\u010c\u010d\u00054\u0000\u0000"+
		"\u010d\u010f\u0003*\u0015\u0000\u010e\u010b\u0001\u0000\u0000\u0000\u010f"+
		"\u0112\u0001\u0000\u0000\u0000\u0110\u010e\u0001\u0000\u0000\u0000\u0110"+
		"\u0111\u0001\u0000\u0000\u0000\u0111)\u0001\u0000\u0000\u0000\u0112\u0110"+
		"\u0001\u0000\u0000\u0000\u0113\u0116\u0003,\u0016\u0000\u0114\u0116\u0003"+
		".\u0017\u0000\u0115\u0113\u0001\u0000\u0000\u0000\u0115\u0114\u0001\u0000"+
		"\u0000\u0000\u0116+\u0001\u0000\u0000\u0000\u0117\u0118\u0005!\u0000\u0000"+
		"\u0118\u0119\u0003.\u0017\u0000\u0119-\u0001\u0000\u0000\u0000\u011a\u011b"+
		"\u0003\u0006\u0003\u0000\u011b\u011c\u00053\u0000\u0000\u011c\u011d\u0003"+
		"\u0014\n\u0000\u011d/\u0001\u0000\u0000\u0000\u011e\u011f\u0005\f\u0000"+
		"\u0000\u011f\u0120\u00032\u0019\u0000\u0120\u0121\u0005\u0013\u0000\u0000"+
		"\u01211\u0001\u0000\u0000\u0000\u0122\u0123\u0006\u0019\uffff\uffff\u0000"+
		"\u0123\u0124\u00034\u001a\u0000\u0124\u012a\u0001\u0000\u0000\u0000\u0125"+
		"\u0126\n\u0002\u0000\u0000\u0126\u0127\u00054\u0000\u0000\u0127\u0129"+
		"\u00034\u001a\u0000\u0128\u0125\u0001\u0000\u0000\u0000\u0129\u012c\u0001"+
		"\u0000\u0000\u0000\u012a\u0128\u0001\u0000\u0000\u0000\u012a\u012b\u0001"+
		"\u0000\u0000\u0000\u012b3\u0001\u0000\u0000\u0000\u012c\u012a\u0001\u0000"+
		"\u0000\u0000\u012d\u012e\u00036\u001b\u0000\u012e\u012f\u0005/\u0000\u0000"+
		"\u012f\u0130\u0003L&\u0000\u0130\u0154\u0001\u0000\u0000\u0000\u0131\u0154"+
		"\u0003H$\u0000\u0132\u0154\u00030\u0018\u0000\u0133\u0134\u0005\u0016"+
		"\u0000\u0000\u0134\u0135\u0003L&\u0000\u0135\u0136\u0005\u001d\u0000\u0000"+
		"\u0136\u0137\u00034\u001a\u0000\u0137\u0138\u0003<\u001e\u0000\u0138\u0154"+
		"\u0001\u0000\u0000\u0000\u0139\u013a\u0005\r\u0000\u0000\u013a\u013b\u0003"+
		"L&\u0000\u013b\u013c\u0005\u0018\u0000\u0000\u013c\u013d\u0003>\u001f"+
		"\u0000\u013d\u013e\u0005\u0013\u0000\u0000\u013e\u0154\u0001\u0000\u0000"+
		"\u0000\u013f\u0140\u0005\"\u0000\u0000\u0140\u0141\u0003L&\u0000\u0141"+
		"\u0142\u0005\u0010\u0000\u0000\u0142\u0143\u00034\u001a\u0000\u0143\u0154"+
		"\u0001\u0000\u0000\u0000\u0144\u0145\u0005\u001c\u0000\u0000\u0145\u0146"+
		"\u00032\u0019\u0000\u0146\u0147\u0005 \u0000\u0000\u0147\u0148\u0003L"+
		"&\u0000\u0148\u0154\u0001\u0000\u0000\u0000\u0149\u014a\u0005\u0014\u0000"+
		"\u0000\u014a\u014b\u0005#\u0000\u0000\u014b\u014c\u0005/\u0000\u0000\u014c"+
		"\u014d\u0003L&\u0000\u014d\u014e\u0003F#\u0000\u014e\u014f\u0003L&\u0000"+
		"\u014f\u0150\u0005\u0010\u0000\u0000\u0150\u0151\u00034\u001a\u0000\u0151"+
		"\u0154\u0001\u0000\u0000\u0000\u0152\u0154\u0001\u0000\u0000\u0000\u0153"+
		"\u012d\u0001\u0000\u0000\u0000\u0153\u0131\u0001\u0000\u0000\u0000\u0153"+
		"\u0132\u0001\u0000\u0000\u0000\u0153\u0133\u0001\u0000\u0000\u0000\u0153"+
		"\u0139\u0001\u0000\u0000\u0000\u0153\u013f\u0001\u0000\u0000\u0000\u0153"+
		"\u0144\u0001\u0000\u0000\u0000\u0153\u0149\u0001\u0000\u0000\u0000\u0153"+
		"\u0152\u0001\u0000\u0000\u0000\u01545\u0001\u0000\u0000\u0000\u0155\u0156"+
		"\u0005#\u0000\u0000\u0156\u0157\u00038\u001c\u0000\u01577\u0001\u0000"+
		"\u0000\u0000\u0158\u015d\u0006\u001c\uffff\uffff\u0000\u0159\u015a\n\u0002"+
		"\u0000\u0000\u015a\u015c\u0003:\u001d\u0000\u015b\u0159\u0001\u0000\u0000"+
		"\u0000\u015c\u015f\u0001\u0000\u0000\u0000\u015d\u015b\u0001\u0000\u0000"+
		"\u0000\u015d\u015e\u0001\u0000\u0000\u0000\u015e9\u0001\u0000\u0000\u0000"+
		"\u015f\u015d\u0001\u0000\u0000\u0000\u0160\u0161\u00058\u0000\u0000\u0161"+
		"\u0162\u0003J%\u0000\u0162\u0163\u00059\u0000\u0000\u0163\u0167\u0001"+
		"\u0000\u0000\u0000\u0164\u0165\u00051\u0000\u0000\u0165\u0167\u0005#\u0000"+
		"\u0000\u0166\u0160\u0001\u0000\u0000\u0000\u0166\u0164\u0001\u0000\u0000"+
		"\u0000\u0167;\u0001\u0000\u0000\u0000\u0168\u0169\u0005\u0012\u0000\u0000"+
		"\u0169\u016c\u00034\u001a\u0000\u016a\u016c\u0001\u0000\u0000\u0000\u016b"+
		"\u0168\u0001\u0000\u0000\u0000\u016b\u016a\u0001\u0000\u0000\u0000\u016c"+
		"=\u0001\u0000\u0000\u0000\u016d\u0170\u0003@ \u0000\u016e\u0170\u0001"+
		"\u0000\u0000\u0000\u016f\u016d\u0001\u0000\u0000\u0000\u016f\u016e\u0001"+
		"\u0000\u0000\u0000\u0170?\u0001\u0000\u0000\u0000\u0171\u0172\u0006 \uffff"+
		"\uffff\u0000\u0172\u0173\u0003B!\u0000\u0173\u0179\u0001\u0000\u0000\u0000"+
		"\u0174\u0175\n\u0002\u0000\u0000\u0175\u0176\u00054\u0000\u0000\u0176"+
		"\u0178\u0003B!\u0000\u0177\u0174\u0001\u0000\u0000\u0000\u0178\u017b\u0001"+
		"\u0000\u0000\u0000\u0179\u0177\u0001\u0000\u0000\u0000\u0179\u017a\u0001"+
		"\u0000\u0000\u0000\u017aA\u0001\u0000\u0000\u0000\u017b\u0179\u0001\u0000"+
		"\u0000\u0000\u017c\u017d\u0003D\"\u0000\u017d\u017e\u00053\u0000\u0000"+
		"\u017e\u017f\u00034\u001a\u0000\u017fC\u0001\u0000\u0000\u0000\u0180\u0181"+
		"\u0006\"\uffff\uffff\u0000\u0181\u0182\u0003\f\u0006\u0000\u0182\u0188"+
		"\u0001\u0000\u0000\u0000\u0183\u0184\n\u0002\u0000\u0000\u0184\u0185\u0005"+
		"2\u0000\u0000\u0185\u0187\u0003\f\u0006\u0000\u0186\u0183\u0001\u0000"+
		"\u0000\u0000\u0187\u018a\u0001\u0000\u0000\u0000\u0188\u0186\u0001\u0000"+
		"\u0000\u0000\u0188\u0189\u0001\u0000\u0000\u0000\u0189E\u0001\u0000\u0000"+
		"\u0000\u018a\u0188\u0001\u0000\u0000\u0000\u018b\u018c\u0007\u0001\u0000"+
		"\u0000\u018cG\u0001\u0000\u0000\u0000\u018d\u0194\u0005#\u0000\u0000\u018e"+
		"\u018f\u0005#\u0000\u0000\u018f\u0190\u00056\u0000\u0000\u0190\u0191\u0003"+
		"J%\u0000\u0191\u0192\u00057\u0000\u0000\u0192\u0194\u0001\u0000\u0000"+
		"\u0000\u0193\u018d\u0001\u0000\u0000\u0000\u0193\u018e\u0001\u0000\u0000"+
		"\u0000\u0194I\u0001\u0000\u0000\u0000\u0195\u0196\u0006%\uffff\uffff\u0000"+
		"\u0196\u0197\u0003L&\u0000\u0197\u019d\u0001\u0000\u0000\u0000\u0198\u0199"+
		"\n\u0002\u0000\u0000\u0199\u019a\u00052\u0000\u0000\u019a\u019c\u0003"+
		"L&\u0000\u019b\u0198\u0001\u0000\u0000\u0000\u019c\u019f\u0001\u0000\u0000"+
		"\u0000\u019d\u019b\u0001\u0000\u0000\u0000\u019d\u019e\u0001\u0000\u0000"+
		"\u0000\u019eK\u0001\u0000\u0000\u0000\u019f\u019d\u0001\u0000\u0000\u0000"+
		"\u01a0\u01a1\u0003N\'\u0000\u01a1\u01a2\u0005\u0001\u0000\u0000\u01a2"+
		"\u01a3\u0003N\'\u0000\u01a3\u01a6\u0001\u0000\u0000\u0000\u01a4\u01a6"+
		"\u0003N\'\u0000\u01a5\u01a0\u0001\u0000\u0000\u0000\u01a5\u01a4\u0001"+
		"\u0000\u0000\u0000\u01a6M\u0001\u0000\u0000\u0000\u01a7\u01a8\u0006\'"+
		"\uffff\uffff\u0000\u01a8\u01ae\u0003P(\u0000\u01a9\u01aa\u0005+\u0000"+
		"\u0000\u01aa\u01ae\u0003P(\u0000\u01ab\u01ac\u0005,\u0000\u0000\u01ac"+
		"\u01ae\u0003P(\u0000\u01ad\u01a7\u0001\u0000\u0000\u0000\u01ad\u01a9\u0001"+
		"\u0000\u0000\u0000\u01ad\u01ab\u0001\u0000\u0000\u0000\u01ae\u01b4\u0001"+
		"\u0000\u0000\u0000\u01af\u01b0\n\u0001\u0000\u0000\u01b0\u01b1\u0005\u0002"+
		"\u0000\u0000\u01b1\u01b3\u0003P(\u0000\u01b2\u01af\u0001\u0000\u0000\u0000"+
		"\u01b3\u01b6\u0001\u0000\u0000\u0000\u01b4\u01b2\u0001\u0000\u0000\u0000"+
		"\u01b4\u01b5\u0001\u0000\u0000\u0000\u01b5O\u0001\u0000\u0000\u0000\u01b6"+
		"\u01b4\u0001\u0000\u0000\u0000\u01b7\u01b8\u0006(\uffff\uffff\u0000\u01b8"+
		"\u01b9\u0003R)\u0000\u01b9\u01bf\u0001\u0000\u0000\u0000\u01ba\u01bb\n"+
		"\u0002\u0000\u0000\u01bb\u01bc\u0005\u0003\u0000\u0000\u01bc\u01be\u0003"+
		"R)\u0000\u01bd\u01ba\u0001\u0000\u0000\u0000\u01be\u01c1\u0001\u0000\u0000"+
		"\u0000\u01bf\u01bd\u0001\u0000\u0000\u0000\u01bf\u01c0\u0001\u0000\u0000"+
		"\u0000\u01c0Q\u0001\u0000\u0000\u0000\u01c1\u01bf\u0001\u0000\u0000\u0000"+
		"\u01c2\u01d0\u0003T*\u0000\u01c3\u01d0\u00036\u001b\u0000\u01c4\u01c5"+
		"\u0005#\u0000\u0000\u01c5\u01c6\u00056\u0000\u0000\u01c6\u01c7\u0003J"+
		"%\u0000\u01c7\u01c8\u00057\u0000\u0000\u01c8\u01d0\u0001\u0000\u0000\u0000"+
		"\u01c9\u01ca\u00056\u0000\u0000\u01ca\u01cb\u0003L&\u0000\u01cb\u01cc"+
		"\u00057\u0000\u0000\u01cc\u01d0\u0001\u0000\u0000\u0000\u01cd\u01ce\u0005"+
		"\u0006\u0000\u0000\u01ce\u01d0\u0003R)\u0000\u01cf\u01c2\u0001\u0000\u0000"+
		"\u0000\u01cf\u01c3\u0001\u0000\u0000\u0000\u01cf\u01c4\u0001\u0000\u0000"+
		"\u0000\u01cf\u01c9\u0001\u0000\u0000\u0000\u01cf\u01cd\u0001\u0000\u0000"+
		"\u0000\u01d0S\u0001\u0000\u0000\u0000\u01d1\u01d7\u0005#\u0000\u0000\u01d2"+
		"\u01d7\u0005%\u0000\u0000\u01d3\u01d4\u00055\u0000\u0000\u01d4\u01d5\u0005"+
		"$\u0000\u0000\u01d5\u01d7\u00055\u0000\u0000\u01d6\u01d1\u0001\u0000\u0000"+
		"\u0000\u01d6\u01d2\u0001\u0000\u0000\u0000\u01d6\u01d3\u0001\u0000\u0000"+
		"\u0000\u01d7U\u0001\u0000\u0000\u0000 ow\u0085\u0095\u009c\u00aa\u00b9"+
		"\u00bf\u00c9\u00d5\u00e4\u00ec\u00ff\u0106\u0110\u0115\u012a\u0153\u015d"+
		"\u0166\u016b\u016f\u0179\u0188\u0193\u019d\u01a5\u01ad\u01b4\u01bf\u01cf"+
		"\u01d6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}