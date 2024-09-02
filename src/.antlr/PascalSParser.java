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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, RELOP=11, EQUAL=12, ADDOP=13, MULOP=14, PLUS=15, MINUS=16, MULT=17, 
		DIVIDE=18, ASSIGNOP=19, AND=20, OR=21, NOT=22, INTEGER=23, REAL=24, BOOLEAN=25, 
		CHAR=26, ARRAY=27, BEGIN=28, CASE=29, CONST=30, DIV=31, DO=32, DOWNTO=33, 
		ELSE=34, END=35, FOR=36, FUNCTION=37, IF=38, MOD=39, OF=40, PROCEDURE=41, 
		PROGRAM=42, RECORD=43, REPEAT=44, THEN=45, TO=46, TYPE=47, UNTIL=48, VAR=49, 
		WHILE=50, ID=51, LETTER=52, NUM=53, EXPONENT=54, FRAC=55, DIGITS=56, DIGIT=57, 
		NEWLINE=58, WS=59;
	public static final int
		RULE_program = 0, RULE_program_head = 1, RULE_program_body = 2, RULE_identifier_list = 3, 
		RULE_const_declarations = 4, RULE_const_declaration = 5, RULE_const_variable = 6, 
		RULE_type_declarations = 7, RULE_type_declaration = 8, RULE_type = 9, 
		RULE_standard_type = 10, RULE_record_body = 11, RULE_periods = 12, RULE_period = 13, 
		RULE_var_declarations = 14, RULE_var_declaration = 15, RULE_subprogram_declarations = 16, 
		RULE_subprogram_declaration = 17, RULE_subprogram_head = 18, RULE_formal_parameter = 19, 
		RULE_parameter_lists = 20, RULE_parameter_list = 21, RULE_var_parameter = 22, 
		RULE_value_parameter = 23, RULE_compound_statement = 24, RULE_statement_list = 25, 
		RULE_statement = 26, RULE_variable = 27, RULE_id_varparts = 28, RULE_id_varpart = 29, 
		RULE_else_part = 30, RULE_case_body = 31, RULE_branch_list = 32, RULE_branch = 33, 
		RULE_const_list = 34, RULE_updown = 35, RULE_call_procedure_statement = 36, 
		RULE_expression_list = 37, RULE_expression = 38, RULE_simple_expression = 39, 
		RULE_term = 40, RULE_factor = 41, RULE_unsign_const_variable = 42;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "program_head", "program_body", "identifier_list", "const_declarations", 
			"const_declaration", "const_variable", "type_declarations", "type_declaration", 
			"type", "standard_type", "record_body", "periods", "period", "var_declarations", 
			"var_declaration", "subprogram_declarations", "subprogram_declaration", 
			"subprogram_head", "formal_parameter", "parameter_lists", "parameter_list", 
			"var_parameter", "value_parameter", "compound_statement", "statement_list", 
			"statement", "variable", "id_varparts", "id_varpart", "else_part", "case_body", 
			"branch_list", "branch", "const_list", "updown", "call_procedure_statement", 
			"expression_list", "expression", "simple_expression", "term", "factor", 
			"unsign_const_variable"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'.'", "'('", "')'", "';'", "','", "'''", "'['", "']'", "'..'", 
			"':'", null, "'='", null, null, "'+'", "'-'", "'*'", "'/'", "':='", "'and'", 
			"'or'", "'not'", "'integer'", "'real'", "'boolean'", "'char'", "'array'", 
			"'begin'", "'case'", "'const'", "'div'", "'do'", "'downto'", "'else'", 
			"'end'", "'for'", "'function'", "'if'", "'mod'", "'of'", "'procedure'", 
			"'program'", "'record'", "'repeat'", "'then'", "'to'", "'type'", "'until'", 
			"'var'", "'while'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "RELOP", 
			"EQUAL", "ADDOP", "MULOP", "PLUS", "MINUS", "MULT", "DIVIDE", "ASSIGNOP", 
			"AND", "OR", "NOT", "INTEGER", "REAL", "BOOLEAN", "CHAR", "ARRAY", "BEGIN", 
			"CASE", "CONST", "DIV", "DO", "DOWNTO", "ELSE", "END", "FOR", "FUNCTION", 
			"IF", "MOD", "OF", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "THEN", 
			"TO", "TYPE", "UNTIL", "VAR", "WHILE", "ID", "LETTER", "NUM", "EXPONENT", 
			"FRAC", "DIGITS", "DIGIT", "NEWLINE", "WS"
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
		public Program_headContext program_head() {
			return getRuleContext(Program_headContext.class,0);
		}
		public Program_bodyContext program_body() {
			return getRuleContext(Program_bodyContext.class,0);
		}
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
			program_head();
			setState(87);
			program_body();
			setState(88);
			match(T__0);
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
	public static class Program_headContext extends ParserRuleContext {
		public TerminalNode PROGRAM() { return getToken(PascalSParser.PROGRAM, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Identifier_listContext identifier_list() {
			return getRuleContext(Identifier_listContext.class,0);
		}
		public Program_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program_head; }
	}

	public final Program_headContext program_head() throws RecognitionException {
		Program_headContext _localctx = new Program_headContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_program_head);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			match(PROGRAM);
			setState(91);
			match(ID);
			setState(92);
			match(T__1);
			setState(93);
			identifier_list(0);
			setState(94);
			match(T__2);
			setState(95);
			match(T__3);
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
	public static class Program_bodyContext extends ParserRuleContext {
		public Const_declarationsContext const_declarations() {
			return getRuleContext(Const_declarationsContext.class,0);
		}
		public Type_declarationsContext type_declarations() {
			return getRuleContext(Type_declarationsContext.class,0);
		}
		public Var_declarationsContext var_declarations() {
			return getRuleContext(Var_declarationsContext.class,0);
		}
		public Subprogram_declarationsContext subprogram_declarations() {
			return getRuleContext(Subprogram_declarationsContext.class,0);
		}
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public Program_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program_body; }
	}

	public final Program_bodyContext program_body() throws RecognitionException {
		Program_bodyContext _localctx = new Program_bodyContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_program_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
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
	public static class Identifier_listContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Identifier_listContext identifier_list() {
			return getRuleContext(Identifier_listContext.class,0);
		}
		public Identifier_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier_list; }
	}

	public final Identifier_listContext identifier_list() throws RecognitionException {
		return identifier_list(0);
	}

	private Identifier_listContext identifier_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Identifier_listContext _localctx = new Identifier_listContext(_ctx, _parentState);
		Identifier_listContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_identifier_list, _p);
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
					_localctx = new Identifier_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifier_list);
					setState(106);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(107);
					match(T__4);
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
	public static class Const_declarationsContext extends ParserRuleContext {
		public TerminalNode CONST() { return getToken(PascalSParser.CONST, 0); }
		public Const_declarationContext const_declaration() {
			return getRuleContext(Const_declarationContext.class,0);
		}
		public Const_declarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_declarations; }
	}

	public final Const_declarationsContext const_declarations() throws RecognitionException {
		Const_declarationsContext _localctx = new Const_declarationsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_const_declarations);
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
				const_declaration(0);
				setState(116);
				match(T__3);
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
	public static class Const_declarationContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalSParser.EQUAL, 0); }
		public Const_variableContext const_variable() {
			return getRuleContext(Const_variableContext.class,0);
		}
		public Const_declarationContext const_declaration() {
			return getRuleContext(Const_declarationContext.class,0);
		}
		public Const_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_declaration; }
	}

	public final Const_declarationContext const_declaration() throws RecognitionException {
		return const_declaration(0);
	}

	private Const_declarationContext const_declaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Const_declarationContext _localctx = new Const_declarationContext(_ctx, _parentState);
		Const_declarationContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_const_declaration, _p);
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
			const_variable();
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
					_localctx = new Const_declarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_const_declaration);
					setState(126);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(127);
					match(T__3);
					setState(128);
					match(ID);
					setState(129);
					match(EQUAL);
					setState(130);
					const_variable();
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
	public static class Const_variableContext extends ParserRuleContext {
		public TerminalNode PLUS() { return getToken(PascalSParser.PLUS, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode MINUS() { return getToken(PascalSParser.MINUS, 0); }
		public TerminalNode NUM() { return getToken(PascalSParser.NUM, 0); }
		public TerminalNode LETTER() { return getToken(PascalSParser.LETTER, 0); }
		public Const_variableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_variable; }
	}

	public final Const_variableContext const_variable() throws RecognitionException {
		Const_variableContext _localctx = new Const_variableContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_const_variable);
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
				match(T__5);
				setState(147);
				match(LETTER);
				setState(148);
				match(T__5);
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
	public static class Type_declarationsContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(PascalSParser.TYPE, 0); }
		public Type_declarationContext type_declaration() {
			return getRuleContext(Type_declarationContext.class,0);
		}
		public Type_declarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_declarations; }
	}

	public final Type_declarationsContext type_declarations() throws RecognitionException {
		Type_declarationsContext _localctx = new Type_declarationsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_type_declarations);
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
				type_declaration(0);
				setState(153);
				match(T__3);
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
	public static class Type_declarationContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode EQUAL() { return getToken(PascalSParser.EQUAL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Type_declarationContext type_declaration() {
			return getRuleContext(Type_declarationContext.class,0);
		}
		public Type_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_declaration; }
	}

	public final Type_declarationContext type_declaration() throws RecognitionException {
		return type_declaration(0);
	}

	private Type_declarationContext type_declaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Type_declarationContext _localctx = new Type_declarationContext(_ctx, _parentState);
		Type_declarationContext _prevctx = _localctx;
		int _startState = 16;
		enterRecursionRule(_localctx, 16, RULE_type_declaration, _p);
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
					_localctx = new Type_declarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_type_declaration);
					setState(163);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(164);
					match(T__3);
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
		public Standard_typeContext standard_type() {
			return getRuleContext(Standard_typeContext.class,0);
		}
		public TerminalNode RECORD() { return getToken(PascalSParser.RECORD, 0); }
		public Record_bodyContext record_body() {
			return getRuleContext(Record_bodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public TerminalNode ARRAY() { return getToken(PascalSParser.ARRAY, 0); }
		public PeriodsContext periods() {
			return getRuleContext(PeriodsContext.class,0);
		}
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
				standard_type();
				}
				break;
			case RECORD:
				enterOuterAlt(_localctx, 2);
				{
				setState(174);
				match(RECORD);
				setState(175);
				record_body();
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
				match(T__6);
				setState(180);
				periods(0);
				setState(181);
				match(T__7);
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
	public static class Standard_typeContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(PascalSParser.INTEGER, 0); }
		public TerminalNode BOOLEAN() { return getToken(PascalSParser.BOOLEAN, 0); }
		public TerminalNode REAL() { return getToken(PascalSParser.REAL, 0); }
		public TerminalNode CHAR() { return getToken(PascalSParser.CHAR, 0); }
		public Standard_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_standard_type; }
	}

	public final Standard_typeContext standard_type() throws RecognitionException {
		Standard_typeContext _localctx = new Standard_typeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_standard_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(187);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 125829120L) != 0)) ) {
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
	public static class Record_bodyContext extends ParserRuleContext {
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public Record_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_record_body; }
	}

	public final Record_bodyContext record_body() throws RecognitionException {
		Record_bodyContext _localctx = new Record_bodyContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_record_body);
		try {
			setState(191);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(189);
				var_declaration(0);
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
					match(T__4);
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
		public List<Const_variableContext> const_variable() {
			return getRuleContexts(Const_variableContext.class);
		}
		public Const_variableContext const_variable(int i) {
			return getRuleContext(Const_variableContext.class,i);
		}
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
			const_variable();
			setState(205);
			match(T__8);
			setState(206);
			const_variable();
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
	public static class Var_declarationsContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(PascalSParser.VAR, 0); }
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public Var_declarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declarations; }
	}

	public final Var_declarationsContext var_declarations() throws RecognitionException {
		Var_declarationsContext _localctx = new Var_declarationsContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_var_declarations);
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
				var_declaration(0);
				setState(210);
				match(T__3);
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
	public static class Var_declarationContext extends ParserRuleContext {
		public Identifier_listContext identifier_list() {
			return getRuleContext(Identifier_listContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public Var_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declaration; }
	}

	public final Var_declarationContext var_declaration() throws RecognitionException {
		return var_declaration(0);
	}

	private Var_declarationContext var_declaration(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Var_declarationContext _localctx = new Var_declarationContext(_ctx, _parentState);
		Var_declarationContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_var_declaration, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(216);
			identifier_list(0);
			setState(217);
			match(T__9);
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
					_localctx = new Var_declarationContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_var_declaration);
					setState(220);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(221);
					match(T__3);
					setState(222);
					identifier_list(0);
					setState(223);
					match(T__9);
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
	public static class Subprogram_declarationsContext extends ParserRuleContext {
		public Subprogram_declarationsContext subprogram_declarations() {
			return getRuleContext(Subprogram_declarationsContext.class,0);
		}
		public Subprogram_declarationContext subprogram_declaration() {
			return getRuleContext(Subprogram_declarationContext.class,0);
		}
		public Subprogram_declarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogram_declarations; }
	}

	public final Subprogram_declarationsContext subprogram_declarations() throws RecognitionException {
		return subprogram_declarations(0);
	}

	private Subprogram_declarationsContext subprogram_declarations(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Subprogram_declarationsContext _localctx = new Subprogram_declarationsContext(_ctx, _parentState);
		Subprogram_declarationsContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_subprogram_declarations, _p);
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
					_localctx = new Subprogram_declarationsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_subprogram_declarations);
					setState(232);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(233);
					subprogram_declaration();
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
	public static class Subprogram_declarationContext extends ParserRuleContext {
		public Subprogram_headContext subprogram_head() {
			return getRuleContext(Subprogram_headContext.class,0);
		}
		public Program_bodyContext program_body() {
			return getRuleContext(Program_bodyContext.class,0);
		}
		public Subprogram_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogram_declaration; }
	}

	public final Subprogram_declarationContext subprogram_declaration() throws RecognitionException {
		Subprogram_declarationContext _localctx = new Subprogram_declarationContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_subprogram_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			subprogram_head();
			setState(240);
			program_body();
			setState(241);
			match(T__3);
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
	public static class Subprogram_headContext extends ParserRuleContext {
		public TerminalNode FUNCTION() { return getToken(PascalSParser.FUNCTION, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Formal_parameterContext formal_parameter() {
			return getRuleContext(Formal_parameterContext.class,0);
		}
		public Standard_typeContext standard_type() {
			return getRuleContext(Standard_typeContext.class,0);
		}
		public TerminalNode PROCEDURE() { return getToken(PascalSParser.PROCEDURE, 0); }
		public Subprogram_headContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subprogram_head; }
	}

	public final Subprogram_headContext subprogram_head() throws RecognitionException {
		Subprogram_headContext _localctx = new Subprogram_headContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_subprogram_head);
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
				formal_parameter();
				setState(246);
				match(T__9);
				setState(247);
				standard_type();
				setState(248);
				match(T__3);
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
				formal_parameter();
				setState(253);
				match(T__3);
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
	public static class Formal_parameterContext extends ParserRuleContext {
		public Parameter_listsContext parameter_lists() {
			return getRuleContext(Parameter_listsContext.class,0);
		}
		public Formal_parameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formal_parameter; }
	}

	public final Formal_parameterContext formal_parameter() throws RecognitionException {
		Formal_parameterContext _localctx = new Formal_parameterContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_formal_parameter);
		try {
			setState(262);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(257);
				match(T__1);
				setState(258);
				parameter_lists(0);
				setState(259);
				match(T__2);
				}
				break;
			case T__3:
			case T__9:
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
	public static class Parameter_listsContext extends ParserRuleContext {
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public Parameter_listsContext parameter_lists() {
			return getRuleContext(Parameter_listsContext.class,0);
		}
		public Parameter_listsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_lists; }
	}

	public final Parameter_listsContext parameter_lists() throws RecognitionException {
		return parameter_lists(0);
	}

	private Parameter_listsContext parameter_lists(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Parameter_listsContext _localctx = new Parameter_listsContext(_ctx, _parentState);
		Parameter_listsContext _prevctx = _localctx;
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_parameter_lists, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(265);
			parameter_list();
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
					_localctx = new Parameter_listsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameter_lists);
					setState(267);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(268);
					match(T__3);
					setState(269);
					parameter_list();
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
	public static class Parameter_listContext extends ParserRuleContext {
		public Var_parameterContext var_parameter() {
			return getRuleContext(Var_parameterContext.class,0);
		}
		public Value_parameterContext value_parameter() {
			return getRuleContext(Value_parameterContext.class,0);
		}
		public Parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_list; }
	}

	public final Parameter_listContext parameter_list() throws RecognitionException {
		Parameter_listContext _localctx = new Parameter_listContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_parameter_list);
		try {
			setState(277);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(275);
				var_parameter();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(276);
				value_parameter();
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
	public static class Var_parameterContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(PascalSParser.VAR, 0); }
		public Value_parameterContext value_parameter() {
			return getRuleContext(Value_parameterContext.class,0);
		}
		public Var_parameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_parameter; }
	}

	public final Var_parameterContext var_parameter() throws RecognitionException {
		Var_parameterContext _localctx = new Var_parameterContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_var_parameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(279);
			match(VAR);
			setState(280);
			value_parameter();
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
	public static class Value_parameterContext extends ParserRuleContext {
		public Identifier_listContext identifier_list() {
			return getRuleContext(Identifier_listContext.class,0);
		}
		public Standard_typeContext standard_type() {
			return getRuleContext(Standard_typeContext.class,0);
		}
		public Value_parameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value_parameter; }
	}

	public final Value_parameterContext value_parameter() throws RecognitionException {
		Value_parameterContext _localctx = new Value_parameterContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_value_parameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			identifier_list(0);
			setState(283);
			match(T__9);
			setState(284);
			standard_type();
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
	public static class Compound_statementContext extends ParserRuleContext {
		public TerminalNode BEGIN() { return getToken(PascalSParser.BEGIN, 0); }
		public Statement_listContext statement_list() {
			return getRuleContext(Statement_listContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public Compound_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_statement; }
	}

	public final Compound_statementContext compound_statement() throws RecognitionException {
		Compound_statementContext _localctx = new Compound_statementContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_compound_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(286);
			match(BEGIN);
			setState(287);
			statement_list(0);
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
	public static class Statement_listContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public Statement_listContext statement_list() {
			return getRuleContext(Statement_listContext.class,0);
		}
		public Statement_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement_list; }
	}

	public final Statement_listContext statement_list() throws RecognitionException {
		return statement_list(0);
	}

	private Statement_listContext statement_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Statement_listContext _localctx = new Statement_listContext(_ctx, _parentState);
		Statement_listContext _prevctx = _localctx;
		int _startState = 50;
		enterRecursionRule(_localctx, 50, RULE_statement_list, _p);
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
					_localctx = new Statement_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statement_list);
					setState(293);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(294);
					match(T__3);
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
		public TerminalNode ASSIGNOP() { return getToken(PascalSParser.ASSIGNOP, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public Call_procedure_statementContext call_procedure_statement() {
			return getRuleContext(Call_procedure_statementContext.class,0);
		}
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public TerminalNode IF() { return getToken(PascalSParser.IF, 0); }
		public TerminalNode THEN() { return getToken(PascalSParser.THEN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public Else_partContext else_part() {
			return getRuleContext(Else_partContext.class,0);
		}
		public TerminalNode CASE() { return getToken(PascalSParser.CASE, 0); }
		public TerminalNode OF() { return getToken(PascalSParser.OF, 0); }
		public Case_bodyContext case_body() {
			return getRuleContext(Case_bodyContext.class,0);
		}
		public TerminalNode END() { return getToken(PascalSParser.END, 0); }
		public TerminalNode WHILE() { return getToken(PascalSParser.WHILE, 0); }
		public TerminalNode DO() { return getToken(PascalSParser.DO, 0); }
		public TerminalNode REPEAT() { return getToken(PascalSParser.REPEAT, 0); }
		public Statement_listContext statement_list() {
			return getRuleContext(Statement_listContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(PascalSParser.UNTIL, 0); }
		public TerminalNode FOR() { return getToken(PascalSParser.FOR, 0); }
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
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
				call_procedure_statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(306);
				compound_statement();
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
				else_part();
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
				case_body();
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
				statement_list(0);
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
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Id_varpartsContext id_varparts() {
			return getRuleContext(Id_varpartsContext.class,0);
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
			id_varparts(0);
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
	public static class Id_varpartsContext extends ParserRuleContext {
		public Id_varpartsContext id_varparts() {
			return getRuleContext(Id_varpartsContext.class,0);
		}
		public Id_varpartContext id_varpart() {
			return getRuleContext(Id_varpartContext.class,0);
		}
		public Id_varpartsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_varparts; }
	}

	public final Id_varpartsContext id_varparts() throws RecognitionException {
		return id_varparts(0);
	}

	private Id_varpartsContext id_varparts(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Id_varpartsContext _localctx = new Id_varpartsContext(_ctx, _parentState);
		Id_varpartsContext _prevctx = _localctx;
		int _startState = 56;
		enterRecursionRule(_localctx, 56, RULE_id_varparts, _p);
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
					_localctx = new Id_varpartsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_id_varparts);
					setState(345);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(346);
					id_varpart();
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
	public static class Id_varpartContext extends ParserRuleContext {
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Id_varpartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_id_varpart; }
	}

	public final Id_varpartContext id_varpart() throws RecognitionException {
		Id_varpartContext _localctx = new Id_varpartContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_id_varpart);
		try {
			setState(358);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
				enterOuterAlt(_localctx, 1);
				{
				setState(352);
				match(T__6);
				setState(353);
				expression_list(0);
				setState(354);
				match(T__7);
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 2);
				{
				setState(356);
				match(T__0);
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
	public static class Else_partContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(PascalSParser.ELSE, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public Else_partContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_part; }
	}

	public final Else_partContext else_part() throws RecognitionException {
		Else_partContext _localctx = new Else_partContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_else_part);
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
	public static class Case_bodyContext extends ParserRuleContext {
		public Branch_listContext branch_list() {
			return getRuleContext(Branch_listContext.class,0);
		}
		public Case_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_case_body; }
	}

	public final Case_bodyContext case_body() throws RecognitionException {
		Case_bodyContext _localctx = new Case_bodyContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_case_body);
		try {
			setState(367);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case PLUS:
			case MINUS:
			case ID:
			case NUM:
				enterOuterAlt(_localctx, 1);
				{
				setState(365);
				branch_list(0);
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
	public static class Branch_listContext extends ParserRuleContext {
		public BranchContext branch() {
			return getRuleContext(BranchContext.class,0);
		}
		public Branch_listContext branch_list() {
			return getRuleContext(Branch_listContext.class,0);
		}
		public Branch_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branch_list; }
	}

	public final Branch_listContext branch_list() throws RecognitionException {
		return branch_list(0);
	}

	private Branch_listContext branch_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Branch_listContext _localctx = new Branch_listContext(_ctx, _parentState);
		Branch_listContext _prevctx = _localctx;
		int _startState = 64;
		enterRecursionRule(_localctx, 64, RULE_branch_list, _p);
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
					_localctx = new Branch_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_branch_list);
					setState(372);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(373);
					match(T__3);
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
		public Const_listContext const_list() {
			return getRuleContext(Const_listContext.class,0);
		}
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
			const_list(0);
			setState(381);
			match(T__9);
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
	public static class Const_listContext extends ParserRuleContext {
		public Const_variableContext const_variable() {
			return getRuleContext(Const_variableContext.class,0);
		}
		public Const_listContext const_list() {
			return getRuleContext(Const_listContext.class,0);
		}
		public Const_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_const_list; }
	}

	public final Const_listContext const_list() throws RecognitionException {
		return const_list(0);
	}

	private Const_listContext const_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Const_listContext _localctx = new Const_listContext(_ctx, _parentState);
		Const_listContext _prevctx = _localctx;
		int _startState = 68;
		enterRecursionRule(_localctx, 68, RULE_const_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(385);
			const_variable();
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
					_localctx = new Const_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_const_list);
					setState(387);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(388);
					match(T__4);
					setState(389);
					const_variable();
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
	public static class Call_procedure_statementContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public Call_procedure_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_call_procedure_statement; }
	}

	public final Call_procedure_statementContext call_procedure_statement() throws RecognitionException {
		Call_procedure_statementContext _localctx = new Call_procedure_statementContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_call_procedure_statement);
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
				match(T__1);
				setState(400);
				expression_list(0);
				setState(401);
				match(T__2);
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
	public static class Expression_listContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public Expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_list; }
	}

	public final Expression_listContext expression_list() throws RecognitionException {
		return expression_list(0);
	}

	private Expression_listContext expression_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Expression_listContext _localctx = new Expression_listContext(_ctx, _parentState);
		Expression_listContext _prevctx = _localctx;
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_expression_list, _p);
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
					_localctx = new Expression_listContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression_list);
					setState(408);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(409);
					match(T__4);
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
		public List<Simple_expressionContext> simple_expression() {
			return getRuleContexts(Simple_expressionContext.class);
		}
		public Simple_expressionContext simple_expression(int i) {
			return getRuleContext(Simple_expressionContext.class,i);
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
			setState(421);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(416);
				simple_expression(0);
				setState(417);
				match(RELOP);
				setState(418);
				simple_expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(420);
				simple_expression(0);
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
	public static class Simple_expressionContext extends ParserRuleContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(PascalSParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(PascalSParser.MINUS, 0); }
		public Simple_expressionContext simple_expression() {
			return getRuleContext(Simple_expressionContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(PascalSParser.ADDOP, 0); }
		public Simple_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_expression; }
	}

	public final Simple_expressionContext simple_expression() throws RecognitionException {
		return simple_expression(0);
	}

	private Simple_expressionContext simple_expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Simple_expressionContext _localctx = new Simple_expressionContext(_ctx, _parentState);
		Simple_expressionContext _prevctx = _localctx;
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_simple_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(429);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__5:
			case NOT:
			case ID:
			case NUM:
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
					_localctx = new Simple_expressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_simple_expression);
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
		public Unsign_const_variableContext unsign_const_variable() {
			return getRuleContext(Unsign_const_variableContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(PascalSParser.NOT, 0); }
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
				unsign_const_variable();
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
				match(T__1);
				setState(454);
				expression_list(0);
				setState(455);
				match(T__2);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(457);
				match(T__1);
				setState(458);
				expression();
				setState(459);
				match(T__2);
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
	public static class Unsign_const_variableContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PascalSParser.ID, 0); }
		public TerminalNode NUM() { return getToken(PascalSParser.NUM, 0); }
		public TerminalNode LETTER() { return getToken(PascalSParser.LETTER, 0); }
		public Unsign_const_variableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsign_const_variable; }
	}

	public final Unsign_const_variableContext unsign_const_variable() throws RecognitionException {
		Unsign_const_variableContext _localctx = new Unsign_const_variableContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_unsign_const_variable);
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
			case T__5:
				enterOuterAlt(_localctx, 3);
				{
				setState(467);
				match(T__5);
				setState(468);
				match(LETTER);
				setState(469);
				match(T__5);
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
			return identifier_list_sempred((Identifier_listContext)_localctx, predIndex);
		case 5:
			return const_declaration_sempred((Const_declarationContext)_localctx, predIndex);
		case 8:
			return type_declaration_sempred((Type_declarationContext)_localctx, predIndex);
		case 12:
			return periods_sempred((PeriodsContext)_localctx, predIndex);
		case 15:
			return var_declaration_sempred((Var_declarationContext)_localctx, predIndex);
		case 16:
			return subprogram_declarations_sempred((Subprogram_declarationsContext)_localctx, predIndex);
		case 20:
			return parameter_lists_sempred((Parameter_listsContext)_localctx, predIndex);
		case 25:
			return statement_list_sempred((Statement_listContext)_localctx, predIndex);
		case 28:
			return id_varparts_sempred((Id_varpartsContext)_localctx, predIndex);
		case 32:
			return branch_list_sempred((Branch_listContext)_localctx, predIndex);
		case 34:
			return const_list_sempred((Const_listContext)_localctx, predIndex);
		case 37:
			return expression_list_sempred((Expression_listContext)_localctx, predIndex);
		case 39:
			return simple_expression_sempred((Simple_expressionContext)_localctx, predIndex);
		case 40:
			return term_sempred((TermContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean identifier_list_sempred(Identifier_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean const_declaration_sempred(Const_declarationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean type_declaration_sempred(Type_declarationContext _localctx, int predIndex) {
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
	private boolean var_declaration_sempred(Var_declarationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean subprogram_declarations_sempred(Subprogram_declarationsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameter_lists_sempred(Parameter_listsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean statement_list_sempred(Statement_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean id_varparts_sempred(Id_varpartsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean branch_list_sempred(Branch_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean const_list_sempred(Const_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean expression_list_sempred(Expression_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean simple_expression_sempred(Simple_expressionContext _localctx, int predIndex) {
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
		" \"$&(*,.02468:<>@BDFHJLNPRT\u0000\u0002\u0001\u0000\u0017\u001a\u0002"+
		"\u0000!!..\u01df\u0000V\u0001\u0000\u0000\u0000\u0002Z\u0001\u0000\u0000"+
		"\u0000\u0004a\u0001\u0000\u0000\u0000\u0006g\u0001\u0000\u0000\u0000\b"+
		"w\u0001\u0000\u0000\u0000\ny\u0001\u0000\u0000\u0000\f\u0095\u0001\u0000"+
		"\u0000\u0000\u000e\u009c\u0001\u0000\u0000\u0000\u0010\u009e\u0001\u0000"+
		"\u0000\u0000\u0012\u00b9\u0001\u0000\u0000\u0000\u0014\u00bb\u0001\u0000"+
		"\u0000\u0000\u0016\u00bf\u0001\u0000\u0000\u0000\u0018\u00c1\u0001\u0000"+
		"\u0000\u0000\u001a\u00cc\u0001\u0000\u0000\u0000\u001c\u00d5\u0001\u0000"+
		"\u0000\u0000\u001e\u00d7\u0001\u0000\u0000\u0000 \u00e7\u0001\u0000\u0000"+
		"\u0000\"\u00ef\u0001\u0000\u0000\u0000$\u00ff\u0001\u0000\u0000\u0000"+
		"&\u0106\u0001\u0000\u0000\u0000(\u0108\u0001\u0000\u0000\u0000*\u0115"+
		"\u0001\u0000\u0000\u0000,\u0117\u0001\u0000\u0000\u0000.\u011a\u0001\u0000"+
		"\u0000\u00000\u011e\u0001\u0000\u0000\u00002\u0122\u0001\u0000\u0000\u0000"+
		"4\u0153\u0001\u0000\u0000\u00006\u0155\u0001\u0000\u0000\u00008\u0158"+
		"\u0001\u0000\u0000\u0000:\u0166\u0001\u0000\u0000\u0000<\u016b\u0001\u0000"+
		"\u0000\u0000>\u016f\u0001\u0000\u0000\u0000@\u0171\u0001\u0000\u0000\u0000"+
		"B\u017c\u0001\u0000\u0000\u0000D\u0180\u0001\u0000\u0000\u0000F\u018b"+
		"\u0001\u0000\u0000\u0000H\u0193\u0001\u0000\u0000\u0000J\u0195\u0001\u0000"+
		"\u0000\u0000L\u01a5\u0001\u0000\u0000\u0000N\u01ad\u0001\u0000\u0000\u0000"+
		"P\u01b7\u0001\u0000\u0000\u0000R\u01cf\u0001\u0000\u0000\u0000T\u01d6"+
		"\u0001\u0000\u0000\u0000VW\u0003\u0002\u0001\u0000WX\u0003\u0004\u0002"+
		"\u0000XY\u0005\u0001\u0000\u0000Y\u0001\u0001\u0000\u0000\u0000Z[\u0005"+
		"*\u0000\u0000[\\\u00053\u0000\u0000\\]\u0005\u0002\u0000\u0000]^\u0003"+
		"\u0006\u0003\u0000^_\u0005\u0003\u0000\u0000_`\u0005\u0004\u0000\u0000"+
		"`\u0003\u0001\u0000\u0000\u0000ab\u0003\b\u0004\u0000bc\u0003\u000e\u0007"+
		"\u0000cd\u0003\u001c\u000e\u0000de\u0003 \u0010\u0000ef\u00030\u0018\u0000"+
		"f\u0005\u0001\u0000\u0000\u0000gh\u0006\u0003\uffff\uffff\u0000hi\u0005"+
		"3\u0000\u0000io\u0001\u0000\u0000\u0000jk\n\u0002\u0000\u0000kl\u0005"+
		"\u0005\u0000\u0000ln\u00053\u0000\u0000mj\u0001\u0000\u0000\u0000nq\u0001"+
		"\u0000\u0000\u0000om\u0001\u0000\u0000\u0000op\u0001\u0000\u0000\u0000"+
		"p\u0007\u0001\u0000\u0000\u0000qo\u0001\u0000\u0000\u0000rs\u0005\u001e"+
		"\u0000\u0000st\u0003\n\u0005\u0000tu\u0005\u0004\u0000\u0000ux\u0001\u0000"+
		"\u0000\u0000vx\u0001\u0000\u0000\u0000wr\u0001\u0000\u0000\u0000wv\u0001"+
		"\u0000\u0000\u0000x\t\u0001\u0000\u0000\u0000yz\u0006\u0005\uffff\uffff"+
		"\u0000z{\u00053\u0000\u0000{|\u0005\f\u0000\u0000|}\u0003\f\u0006\u0000"+
		"}\u0085\u0001\u0000\u0000\u0000~\u007f\n\u0002\u0000\u0000\u007f\u0080"+
		"\u0005\u0004\u0000\u0000\u0080\u0081\u00053\u0000\u0000\u0081\u0082\u0005"+
		"\f\u0000\u0000\u0082\u0084\u0003\f\u0006\u0000\u0083~\u0001\u0000\u0000"+
		"\u0000\u0084\u0087\u0001\u0000\u0000\u0000\u0085\u0083\u0001\u0000\u0000"+
		"\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086\u000b\u0001\u0000\u0000"+
		"\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0088\u0089\u0005\u000f\u0000"+
		"\u0000\u0089\u0096\u00053\u0000\u0000\u008a\u008b\u0005\u0010\u0000\u0000"+
		"\u008b\u0096\u00053\u0000\u0000\u008c\u0096\u00053\u0000\u0000\u008d\u008e"+
		"\u0005\u000f\u0000\u0000\u008e\u0096\u00055\u0000\u0000\u008f\u0090\u0005"+
		"\u0010\u0000\u0000\u0090\u0096\u00055\u0000\u0000\u0091\u0096\u00055\u0000"+
		"\u0000\u0092\u0093\u0005\u0006\u0000\u0000\u0093\u0094\u00054\u0000\u0000"+
		"\u0094\u0096\u0005\u0006\u0000\u0000\u0095\u0088\u0001\u0000\u0000\u0000"+
		"\u0095\u008a\u0001\u0000\u0000\u0000\u0095\u008c\u0001\u0000\u0000\u0000"+
		"\u0095\u008d\u0001\u0000\u0000\u0000\u0095\u008f\u0001\u0000\u0000\u0000"+
		"\u0095\u0091\u0001\u0000\u0000\u0000\u0095\u0092\u0001\u0000\u0000\u0000"+
		"\u0096\r\u0001\u0000\u0000\u0000\u0097\u0098\u0005/\u0000\u0000\u0098"+
		"\u0099\u0003\u0010\b\u0000\u0099\u009a\u0005\u0004\u0000\u0000\u009a\u009d"+
		"\u0001\u0000\u0000\u0000\u009b\u009d\u0001\u0000\u0000\u0000\u009c\u0097"+
		"\u0001\u0000\u0000\u0000\u009c\u009b\u0001\u0000\u0000\u0000\u009d\u000f"+
		"\u0001\u0000\u0000\u0000\u009e\u009f\u0006\b\uffff\uffff\u0000\u009f\u00a0"+
		"\u00053\u0000\u0000\u00a0\u00a1\u0005\f\u0000\u0000\u00a1\u00a2\u0003"+
		"\u0012\t\u0000\u00a2\u00aa\u0001\u0000\u0000\u0000\u00a3\u00a4\n\u0002"+
		"\u0000\u0000\u00a4\u00a5\u0005\u0004\u0000\u0000\u00a5\u00a6\u00053\u0000"+
		"\u0000\u00a6\u00a7\u0005\f\u0000\u0000\u00a7\u00a9\u0003\u0012\t\u0000"+
		"\u00a8\u00a3\u0001\u0000\u0000\u0000\u00a9\u00ac\u0001\u0000\u0000\u0000"+
		"\u00aa\u00a8\u0001\u0000\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000"+
		"\u00ab\u0011\u0001\u0000\u0000\u0000\u00ac\u00aa\u0001\u0000\u0000\u0000"+
		"\u00ad\u00ba\u0003\u0014\n\u0000\u00ae\u00af\u0005+\u0000\u0000\u00af"+
		"\u00b0\u0003\u0016\u000b\u0000\u00b0\u00b1\u0005#\u0000\u0000\u00b1\u00ba"+
		"\u0001\u0000\u0000\u0000\u00b2\u00b3\u0005\u001b\u0000\u0000\u00b3\u00b4"+
		"\u0005\u0007\u0000\u0000\u00b4\u00b5\u0003\u0018\f\u0000\u00b5\u00b6\u0005"+
		"\b\u0000\u0000\u00b6\u00b7\u0005(\u0000\u0000\u00b7\u00b8\u0003\u0012"+
		"\t\u0000\u00b8\u00ba\u0001\u0000\u0000\u0000\u00b9\u00ad\u0001\u0000\u0000"+
		"\u0000\u00b9\u00ae\u0001\u0000\u0000\u0000\u00b9\u00b2\u0001\u0000\u0000"+
		"\u0000\u00ba\u0013\u0001\u0000\u0000\u0000\u00bb\u00bc\u0007\u0000\u0000"+
		"\u0000\u00bc\u0015\u0001\u0000\u0000\u0000\u00bd\u00c0\u0003\u001e\u000f"+
		"\u0000\u00be\u00c0\u0001\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000\u0000"+
		"\u0000\u00bf\u00be\u0001\u0000\u0000\u0000\u00c0\u0017\u0001\u0000\u0000"+
		"\u0000\u00c1\u00c2\u0006\f\uffff\uffff\u0000\u00c2\u00c3\u0003\u001a\r"+
		"\u0000\u00c3\u00c9\u0001\u0000\u0000\u0000\u00c4\u00c5\n\u0002\u0000\u0000"+
		"\u00c5\u00c6\u0005\u0005\u0000\u0000\u00c6\u00c8\u0003\u001a\r\u0000\u00c7"+
		"\u00c4\u0001\u0000\u0000\u0000\u00c8\u00cb\u0001\u0000\u0000\u0000\u00c9"+
		"\u00c7\u0001\u0000\u0000\u0000\u00c9\u00ca\u0001\u0000\u0000\u0000\u00ca"+
		"\u0019\u0001\u0000\u0000\u0000\u00cb\u00c9\u0001\u0000\u0000\u0000\u00cc"+
		"\u00cd\u0003\f\u0006\u0000\u00cd\u00ce\u0005\t\u0000\u0000\u00ce\u00cf"+
		"\u0003\f\u0006\u0000\u00cf\u001b\u0001\u0000\u0000\u0000\u00d0\u00d1\u0005"+
		"1\u0000\u0000\u00d1\u00d2\u0003\u001e\u000f\u0000\u00d2\u00d3\u0005\u0004"+
		"\u0000\u0000\u00d3\u00d6\u0001\u0000\u0000\u0000\u00d4\u00d6\u0001\u0000"+
		"\u0000\u0000\u00d5\u00d0\u0001\u0000\u0000\u0000\u00d5\u00d4\u0001\u0000"+
		"\u0000\u0000\u00d6\u001d\u0001\u0000\u0000\u0000\u00d7\u00d8\u0006\u000f"+
		"\uffff\uffff\u0000\u00d8\u00d9\u0003\u0006\u0003\u0000\u00d9\u00da\u0005"+
		"\n\u0000\u0000\u00da\u00db\u0003\u0012\t\u0000\u00db\u00e4\u0001\u0000"+
		"\u0000\u0000\u00dc\u00dd\n\u0002\u0000\u0000\u00dd\u00de\u0005\u0004\u0000"+
		"\u0000\u00de\u00df\u0003\u0006\u0003\u0000\u00df\u00e0\u0005\n\u0000\u0000"+
		"\u00e0\u00e1\u0003\u0012\t\u0000\u00e1\u00e3\u0001\u0000\u0000\u0000\u00e2"+
		"\u00dc\u0001\u0000\u0000\u0000\u00e3\u00e6\u0001\u0000\u0000\u0000\u00e4"+
		"\u00e2\u0001\u0000\u0000\u0000\u00e4\u00e5\u0001\u0000\u0000\u0000\u00e5"+
		"\u001f\u0001\u0000\u0000\u0000\u00e6\u00e4\u0001\u0000\u0000\u0000\u00e7"+
		"\u00ec\u0006\u0010\uffff\uffff\u0000\u00e8\u00e9\n\u0002\u0000\u0000\u00e9"+
		"\u00eb\u0003\"\u0011\u0000\u00ea\u00e8\u0001\u0000\u0000\u0000\u00eb\u00ee"+
		"\u0001\u0000\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ec\u00ed"+
		"\u0001\u0000\u0000\u0000\u00ed!\u0001\u0000\u0000\u0000\u00ee\u00ec\u0001"+
		"\u0000\u0000\u0000\u00ef\u00f0\u0003$\u0012\u0000\u00f0\u00f1\u0003\u0004"+
		"\u0002\u0000\u00f1\u00f2\u0005\u0004\u0000\u0000\u00f2#\u0001\u0000\u0000"+
		"\u0000\u00f3\u00f4\u0005%\u0000\u0000\u00f4\u00f5\u00053\u0000\u0000\u00f5"+
		"\u00f6\u0003&\u0013\u0000\u00f6\u00f7\u0005\n\u0000\u0000\u00f7\u00f8"+
		"\u0003\u0014\n\u0000\u00f8\u00f9\u0005\u0004\u0000\u0000\u00f9\u0100\u0001"+
		"\u0000\u0000\u0000\u00fa\u00fb\u0005)\u0000\u0000\u00fb\u00fc\u00053\u0000"+
		"\u0000\u00fc\u00fd\u0003&\u0013\u0000\u00fd\u00fe\u0005\u0004\u0000\u0000"+
		"\u00fe\u0100\u0001\u0000\u0000\u0000\u00ff\u00f3\u0001\u0000\u0000\u0000"+
		"\u00ff\u00fa\u0001\u0000\u0000\u0000\u0100%\u0001\u0000\u0000\u0000\u0101"+
		"\u0102\u0005\u0002\u0000\u0000\u0102\u0103\u0003(\u0014\u0000\u0103\u0104"+
		"\u0005\u0003\u0000\u0000\u0104\u0107\u0001\u0000\u0000\u0000\u0105\u0107"+
		"\u0001\u0000\u0000\u0000\u0106\u0101\u0001\u0000\u0000\u0000\u0106\u0105"+
		"\u0001\u0000\u0000\u0000\u0107\'\u0001\u0000\u0000\u0000\u0108\u0109\u0006"+
		"\u0014\uffff\uffff\u0000\u0109\u010a\u0003*\u0015\u0000\u010a\u0110\u0001"+
		"\u0000\u0000\u0000\u010b\u010c\n\u0002\u0000\u0000\u010c\u010d\u0005\u0004"+
		"\u0000\u0000\u010d\u010f\u0003*\u0015\u0000\u010e\u010b\u0001\u0000\u0000"+
		"\u0000\u010f\u0112\u0001\u0000\u0000\u0000\u0110\u010e\u0001\u0000\u0000"+
		"\u0000\u0110\u0111\u0001\u0000\u0000\u0000\u0111)\u0001\u0000\u0000\u0000"+
		"\u0112\u0110\u0001\u0000\u0000\u0000\u0113\u0116\u0003,\u0016\u0000\u0114"+
		"\u0116\u0003.\u0017\u0000\u0115\u0113\u0001\u0000\u0000\u0000\u0115\u0114"+
		"\u0001\u0000\u0000\u0000\u0116+\u0001\u0000\u0000\u0000\u0117\u0118\u0005"+
		"1\u0000\u0000\u0118\u0119\u0003.\u0017\u0000\u0119-\u0001\u0000\u0000"+
		"\u0000\u011a\u011b\u0003\u0006\u0003\u0000\u011b\u011c\u0005\n\u0000\u0000"+
		"\u011c\u011d\u0003\u0014\n\u0000\u011d/\u0001\u0000\u0000\u0000\u011e"+
		"\u011f\u0005\u001c\u0000\u0000\u011f\u0120\u00032\u0019\u0000\u0120\u0121"+
		"\u0005#\u0000\u0000\u01211\u0001\u0000\u0000\u0000\u0122\u0123\u0006\u0019"+
		"\uffff\uffff\u0000\u0123\u0124\u00034\u001a\u0000\u0124\u012a\u0001\u0000"+
		"\u0000\u0000\u0125\u0126\n\u0002\u0000\u0000\u0126\u0127\u0005\u0004\u0000"+
		"\u0000\u0127\u0129\u00034\u001a\u0000\u0128\u0125\u0001\u0000\u0000\u0000"+
		"\u0129\u012c\u0001\u0000\u0000\u0000\u012a\u0128\u0001\u0000\u0000\u0000"+
		"\u012a\u012b\u0001\u0000\u0000\u0000\u012b3\u0001\u0000\u0000\u0000\u012c"+
		"\u012a\u0001\u0000\u0000\u0000\u012d\u012e\u00036\u001b\u0000\u012e\u012f"+
		"\u0005\u0013\u0000\u0000\u012f\u0130\u0003L&\u0000\u0130\u0154\u0001\u0000"+
		"\u0000\u0000\u0131\u0154\u0003H$\u0000\u0132\u0154\u00030\u0018\u0000"+
		"\u0133\u0134\u0005&\u0000\u0000\u0134\u0135\u0003L&\u0000\u0135\u0136"+
		"\u0005-\u0000\u0000\u0136\u0137\u00034\u001a\u0000\u0137\u0138\u0003<"+
		"\u001e\u0000\u0138\u0154\u0001\u0000\u0000\u0000\u0139\u013a\u0005\u001d"+
		"\u0000\u0000\u013a\u013b\u0003L&\u0000\u013b\u013c\u0005(\u0000\u0000"+
		"\u013c\u013d\u0003>\u001f\u0000\u013d\u013e\u0005#\u0000\u0000\u013e\u0154"+
		"\u0001\u0000\u0000\u0000\u013f\u0140\u00052\u0000\u0000\u0140\u0141\u0003"+
		"L&\u0000\u0141\u0142\u0005 \u0000\u0000\u0142\u0143\u00034\u001a\u0000"+
		"\u0143\u0154\u0001\u0000\u0000\u0000\u0144\u0145\u0005,\u0000\u0000\u0145"+
		"\u0146\u00032\u0019\u0000\u0146\u0147\u00050\u0000\u0000\u0147\u0148\u0003"+
		"L&\u0000\u0148\u0154\u0001\u0000\u0000\u0000\u0149\u014a\u0005$\u0000"+
		"\u0000\u014a\u014b\u00053\u0000\u0000\u014b\u014c\u0005\u0013\u0000\u0000"+
		"\u014c\u014d\u0003L&\u0000\u014d\u014e\u0003F#\u0000\u014e\u014f\u0003"+
		"L&\u0000\u014f\u0150\u0005 \u0000\u0000\u0150\u0151\u00034\u001a\u0000"+
		"\u0151\u0154\u0001\u0000\u0000\u0000\u0152\u0154\u0001\u0000\u0000\u0000"+
		"\u0153\u012d\u0001\u0000\u0000\u0000\u0153\u0131\u0001\u0000\u0000\u0000"+
		"\u0153\u0132\u0001\u0000\u0000\u0000\u0153\u0133\u0001\u0000\u0000\u0000"+
		"\u0153\u0139\u0001\u0000\u0000\u0000\u0153\u013f\u0001\u0000\u0000\u0000"+
		"\u0153\u0144\u0001\u0000\u0000\u0000\u0153\u0149\u0001\u0000\u0000\u0000"+
		"\u0153\u0152\u0001\u0000\u0000\u0000\u01545\u0001\u0000\u0000\u0000\u0155"+
		"\u0156\u00053\u0000\u0000\u0156\u0157\u00038\u001c\u0000\u01577\u0001"+
		"\u0000\u0000\u0000\u0158\u015d\u0006\u001c\uffff\uffff\u0000\u0159\u015a"+
		"\n\u0002\u0000\u0000\u015a\u015c\u0003:\u001d\u0000\u015b\u0159\u0001"+
		"\u0000\u0000\u0000\u015c\u015f\u0001\u0000\u0000\u0000\u015d\u015b\u0001"+
		"\u0000\u0000\u0000\u015d\u015e\u0001\u0000\u0000\u0000\u015e9\u0001\u0000"+
		"\u0000\u0000\u015f\u015d\u0001\u0000\u0000\u0000\u0160\u0161\u0005\u0007"+
		"\u0000\u0000\u0161\u0162\u0003J%\u0000\u0162\u0163\u0005\b\u0000\u0000"+
		"\u0163\u0167\u0001\u0000\u0000\u0000\u0164\u0165\u0005\u0001\u0000\u0000"+
		"\u0165\u0167\u00053\u0000\u0000\u0166\u0160\u0001\u0000\u0000\u0000\u0166"+
		"\u0164\u0001\u0000\u0000\u0000\u0167;\u0001\u0000\u0000\u0000\u0168\u0169"+
		"\u0005\"\u0000\u0000\u0169\u016c\u00034\u001a\u0000\u016a\u016c\u0001"+
		"\u0000\u0000\u0000\u016b\u0168\u0001\u0000\u0000\u0000\u016b\u016a\u0001"+
		"\u0000\u0000\u0000\u016c=\u0001\u0000\u0000\u0000\u016d\u0170\u0003@ "+
		"\u0000\u016e\u0170\u0001\u0000\u0000\u0000\u016f\u016d\u0001\u0000\u0000"+
		"\u0000\u016f\u016e\u0001\u0000\u0000\u0000\u0170?\u0001\u0000\u0000\u0000"+
		"\u0171\u0172\u0006 \uffff\uffff\u0000\u0172\u0173\u0003B!\u0000\u0173"+
		"\u0179\u0001\u0000\u0000\u0000\u0174\u0175\n\u0002\u0000\u0000\u0175\u0176"+
		"\u0005\u0004\u0000\u0000\u0176\u0178\u0003B!\u0000\u0177\u0174\u0001\u0000"+
		"\u0000\u0000\u0178\u017b\u0001\u0000\u0000\u0000\u0179\u0177\u0001\u0000"+
		"\u0000\u0000\u0179\u017a\u0001\u0000\u0000\u0000\u017aA\u0001\u0000\u0000"+
		"\u0000\u017b\u0179\u0001\u0000\u0000\u0000\u017c\u017d\u0003D\"\u0000"+
		"\u017d\u017e\u0005\n\u0000\u0000\u017e\u017f\u00034\u001a\u0000\u017f"+
		"C\u0001\u0000\u0000\u0000\u0180\u0181\u0006\"\uffff\uffff\u0000\u0181"+
		"\u0182\u0003\f\u0006\u0000\u0182\u0188\u0001\u0000\u0000\u0000\u0183\u0184"+
		"\n\u0002\u0000\u0000\u0184\u0185\u0005\u0005\u0000\u0000\u0185\u0187\u0003"+
		"\f\u0006\u0000\u0186\u0183\u0001\u0000\u0000\u0000\u0187\u018a\u0001\u0000"+
		"\u0000\u0000\u0188\u0186\u0001\u0000\u0000\u0000\u0188\u0189\u0001\u0000"+
		"\u0000\u0000\u0189E\u0001\u0000\u0000\u0000\u018a\u0188\u0001\u0000\u0000"+
		"\u0000\u018b\u018c\u0007\u0001\u0000\u0000\u018cG\u0001\u0000\u0000\u0000"+
		"\u018d\u0194\u00053\u0000\u0000\u018e\u018f\u00053\u0000\u0000\u018f\u0190"+
		"\u0005\u0002\u0000\u0000\u0190\u0191\u0003J%\u0000\u0191\u0192\u0005\u0003"+
		"\u0000\u0000\u0192\u0194\u0001\u0000\u0000\u0000\u0193\u018d\u0001\u0000"+
		"\u0000\u0000\u0193\u018e\u0001\u0000\u0000\u0000\u0194I\u0001\u0000\u0000"+
		"\u0000\u0195\u0196\u0006%\uffff\uffff\u0000\u0196\u0197\u0003L&\u0000"+
		"\u0197\u019d\u0001\u0000\u0000\u0000\u0198\u0199\n\u0002\u0000\u0000\u0199"+
		"\u019a\u0005\u0005\u0000\u0000\u019a\u019c\u0003L&\u0000\u019b\u0198\u0001"+
		"\u0000\u0000\u0000\u019c\u019f\u0001\u0000\u0000\u0000\u019d\u019b\u0001"+
		"\u0000\u0000\u0000\u019d\u019e\u0001\u0000\u0000\u0000\u019eK\u0001\u0000"+
		"\u0000\u0000\u019f\u019d\u0001\u0000\u0000\u0000\u01a0\u01a1\u0003N\'"+
		"\u0000\u01a1\u01a2\u0005\u000b\u0000\u0000\u01a2\u01a3\u0003N\'\u0000"+
		"\u01a3\u01a6\u0001\u0000\u0000\u0000\u01a4\u01a6\u0003N\'\u0000\u01a5"+
		"\u01a0\u0001\u0000\u0000\u0000\u01a5\u01a4\u0001\u0000\u0000\u0000\u01a6"+
		"M\u0001\u0000\u0000\u0000\u01a7\u01a8\u0006\'\uffff\uffff\u0000\u01a8"+
		"\u01ae\u0003P(\u0000\u01a9\u01aa\u0005\u000f\u0000\u0000\u01aa\u01ae\u0003"+
		"P(\u0000\u01ab\u01ac\u0005\u0010\u0000\u0000\u01ac\u01ae\u0003P(\u0000"+
		"\u01ad\u01a7\u0001\u0000\u0000\u0000\u01ad\u01a9\u0001\u0000\u0000\u0000"+
		"\u01ad\u01ab\u0001\u0000\u0000\u0000\u01ae\u01b4\u0001\u0000\u0000\u0000"+
		"\u01af\u01b0\n\u0001\u0000\u0000\u01b0\u01b1\u0005\r\u0000\u0000\u01b1"+
		"\u01b3\u0003P(\u0000\u01b2\u01af\u0001\u0000\u0000\u0000\u01b3\u01b6\u0001"+
		"\u0000\u0000\u0000\u01b4\u01b2\u0001\u0000\u0000\u0000\u01b4\u01b5\u0001"+
		"\u0000\u0000\u0000\u01b5O\u0001\u0000\u0000\u0000\u01b6\u01b4\u0001\u0000"+
		"\u0000\u0000\u01b7\u01b8\u0006(\uffff\uffff\u0000\u01b8\u01b9\u0003R)"+
		"\u0000\u01b9\u01bf\u0001\u0000\u0000\u0000\u01ba\u01bb\n\u0002\u0000\u0000"+
		"\u01bb\u01bc\u0005\u000e\u0000\u0000\u01bc\u01be\u0003R)\u0000\u01bd\u01ba"+
		"\u0001\u0000\u0000\u0000\u01be\u01c1\u0001\u0000\u0000\u0000\u01bf\u01bd"+
		"\u0001\u0000\u0000\u0000\u01bf\u01c0\u0001\u0000\u0000\u0000\u01c0Q\u0001"+
		"\u0000\u0000\u0000\u01c1\u01bf\u0001\u0000\u0000\u0000\u01c2\u01d0\u0003"+
		"T*\u0000\u01c3\u01d0\u00036\u001b\u0000\u01c4\u01c5\u00053\u0000\u0000"+
		"\u01c5\u01c6\u0005\u0002\u0000\u0000\u01c6\u01c7\u0003J%\u0000\u01c7\u01c8"+
		"\u0005\u0003\u0000\u0000\u01c8\u01d0\u0001\u0000\u0000\u0000\u01c9\u01ca"+
		"\u0005\u0002\u0000\u0000\u01ca\u01cb\u0003L&\u0000\u01cb\u01cc\u0005\u0003"+
		"\u0000\u0000\u01cc\u01d0\u0001\u0000\u0000\u0000\u01cd\u01ce\u0005\u0016"+
		"\u0000\u0000\u01ce\u01d0\u0003R)\u0000\u01cf\u01c2\u0001\u0000\u0000\u0000"+
		"\u01cf\u01c3\u0001\u0000\u0000\u0000\u01cf\u01c4\u0001\u0000\u0000\u0000"+
		"\u01cf\u01c9\u0001\u0000\u0000\u0000\u01cf\u01cd\u0001\u0000\u0000\u0000"+
		"\u01d0S\u0001\u0000\u0000\u0000\u01d1\u01d7\u00053\u0000\u0000\u01d2\u01d7"+
		"\u00055\u0000\u0000\u01d3\u01d4\u0005\u0006\u0000\u0000\u01d4\u01d5\u0005"+
		"4\u0000\u0000\u01d5\u01d7\u0005\u0006\u0000\u0000\u01d6\u01d1\u0001\u0000"+
		"\u0000\u0000\u01d6\u01d2\u0001\u0000\u0000\u0000\u01d6\u01d3\u0001\u0000"+
		"\u0000\u0000\u01d7U\u0001\u0000\u0000\u0000 ow\u0085\u0095\u009c\u00aa"+
		"\u00b9\u00bf\u00c9\u00d5\u00e4\u00ec\u00ff\u0106\u0110\u0115\u012a\u0153"+
		"\u015d\u0166\u016b\u016f\u0179\u0188\u0193\u019d\u01a5\u01ad\u01b4\u01bf"+
		"\u01cf\u01d6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}