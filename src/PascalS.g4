grammar PascalS;
import PascalSLexerRules;

program: programHead programBody DOT;

programHead: PROGRAM ID LPAREN identifierList RPAREN SEMICOLON;

programBody:
	constDeclarations typeDeclarations varDeclarations subprogramDeclarations compoundStatement;

identifierList: identifierList COMMA ID | ID;

constDeclarations: CONST constDeclaration SEMICOLON |;

constDeclaration:
	constDeclaration SEMICOLON ID EQUAL constVariable
	| ID EQUAL constVariable;

constVariable:
	PLUS ID
	| MINUS ID
	| ID
	| PLUS NUM
	| MINUS NUM
	| NUM
	| CHARLITERAL;

typeDeclarations: TYPE typeDeclaration SEMICOLON |;

typeDeclaration:
	typeDeclaration SEMICOLON ID EQUAL type
	| ID EQUAL type;

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
	FUNCTION ID formalParameter COLON standardType SEMICOLON
	| PROCEDURE ID formalParameter SEMICOLON;

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
	variable ASSIGNOP expression								# assignmentStatement
	| callProcedureStatement									# statementCallProcedureStatement
	| compoundStatement											# statementCompoundStatement
	| IF expression THEN statement elsePart						# ifStatement
	| CASE expression OF caseBody END							# caseStatement
	| WHILE expression DO statement								# whileStatement
	| REPEAT statementList UNTIL expression						# repeatStatement
	| FOR ID ASSIGNOP expression updown expression DO statement	# forStatement
	|															# emptyStatement;

variable: ID idVarparts;

idVarparts: idVarparts idVarpart |;

idVarpart: LBRACKET expressionList RBRACKET | DOT ID;

elsePart: ELSE statement |;

caseBody: branchList |;

branchList: branchList SEMICOLON branch | branch;

branch: constList COLON statement;

constList: constList COMMA constVariable | constVariable;

updown: TO | DOWNTO;

callProcedureStatement: ID | ID LPAREN expressionList RPAREN;

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
	| ID LPAREN expressionList RPAREN
	| LPAREN expression RPAREN
	| NOT factor
	| boolean;

unsignConstVariable: ID | NUM | CHARLITERAL;

relationalOpreator: EQUAL | NEQUAL | LT | LE | GT | GE;

addOperator: PLUS | MINUS | OR;

multiplyOperator: MULT | DIVIDE | DIV | MOD | AND;