grammar PascalS;
import PascalSLexerRules;

program: programHead programBody DOT;

programHead:
	PROGRAM identifier LPAREN identifierList RPAREN SEMICOLON;

programBody:
	constDeclarations typeDeclarations varDeclarations subprogramDeclarations compoundStatement;

identifierList: identifierList COMMA identifier | identifier;

constDeclarations: CONST constDeclaration SEMICOLON |;

constDeclaration:
	constDeclaration SEMICOLON identifier EQUAL constVariable
	| identifier EQUAL constVariable;

constVariable:
	PLUS identifier
	| MINUS identifier
	| identifier
	| PLUS NUM
	| MINUS NUM
	| NUM
	| QUOTE LETTER QUOTE;

typeDeclarations: TYPE typeDeclaration SEMICOLON |;

typeDeclaration:
	typeDeclaration SEMICOLON identifier EQUAL type
	| identifier EQUAL type;

type:
	standardType
	| RECORD recordBody END
	| ARRAY LBRACKET periods RBRACKET OF type;

standardType: INTEGER | BOOLEAN | REAL | CHAR;

recordBody: varDeclaration |;

periods: periods COMMA period | period;

period: constVariable PERIODOP constVariable;

varDeclarations: VAR varDeclaration SEMICOLON |;

varDeclaration:
	varDeclaration SEMICOLON identifierList COLON type
	| identifierList COLON type;

subprogramDeclarations:
	subprogramDeclarations subprogramDeclaration
	|;

subprogramDeclaration: subprogramHead programBody SEMICOLON;

subprogramHead:
	FUNCTION identifier formalParameter COLON standardType SEMICOLON
	| PROCEDURE identifier formalParameter SEMICOLON;

formalParameter: LPAREN parameterLists RPAREN |;

parameterLists:
	parameterLists SEMICOLON parameterList
	| parameterList;

parameterList: varParameter | valueParameter;

varParameter: VAR valueParameter;

valueParameter: identifierList COLON standardType;

compoundStatement: BEGIN statementList END;

statementList: statementList SEMICOLON statement | statement;

statement:
	variable ASSIGNOP expression										# assignmentStatement
	| callProcedureStatement											# statementCallProcedureStatement
	| compoundStatement													# statementCompoundStatement
	| IF expression THEN statement elsePart								# ifStatement
	| CASE expression OF caseBody END									# caseStatement
	| WHILE expression DO statement										# whileStatement
	| REPEAT statementList UNTIL expression								# repeatStatement
	| FOR identifier ASSIGNOP expression updown expression DO statement	# forStatement
	|																	# emptyStatement;

variable: identifier idVarparts;

idVarparts: idVarparts idVarpart |;

idVarpart: LBRACKET expressionList RBRACKET | DOT identifier;

elsePart: ELSE statement |;

caseBody: branchList |;

branchList: branchList SEMICOLON branch | branch;

branch: constList COLON statement;

constList: constList COMMA constVariable | constVariable;

updown: TO | DOWNTO;

callProcedureStatement:
	identifier
	| identifier LPAREN expressionList RPAREN;

expressionList: expressionList COMMA expression | expression;

expression:
	simpleExpression relationalOpreator simpleExpression
	| simpleExpression;

simpleExpression:
	term
	| PLUS term
	| MINUS term
	| simpleExpression addOperator term;

term: term multiplyOperator factor | factor;

boolean: TRUE | FALSE;

factor:
	unsignConstVariable
	| variable
	| identifier LPAREN expressionList RPAREN
	| LPAREN expression RPAREN
	| NOT factor
	| boolean;

unsignConstVariable: identifier | NUM | QUOTE LETTER QUOTE;

identifier: LETTER (LETTER | DIGIT)*;

relationalOpreator: EQUAL | '<>' | '<' | '<=' | '>' | '>=';

addOperator: PLUS | MINUS | OR;

multiplyOperator: MULT | DIVIDE | DIV | MOD | AND;