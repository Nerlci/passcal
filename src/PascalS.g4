grammar PascalS;

program: program_head program_body '.';

program_head: PROGRAM ID '(' identifier_list ')' ';';

program_body:
	const_declarations type_declarations var_declarations subprogram_declarations compound_statement
		;

identifier_list: identifier_list ',' ID | ID;

const_declarations: CONST const_declaration ';' |;

const_declaration:
	const_declaration ';' ID EQUAL const_variable
	| ID EQUAL const_variable;

const_variable:
	PLUS ID
	| MINUS ID
	| ID
	| PLUS NUM
	| MINUS NUM
	| NUM
	| '\'' LETTER '\'';

type_declarations: TYPE type_declaration ';' |;

type_declaration:
	type_declaration ';' ID EQUAL type
	| ID EQUAL type;

type:
	standard_type
	| RECORD record_body END
	| ARRAY '[' periods ']' OF type;

standard_type: INTEGER | BOOLEAN | REAL | CHAR;

record_body: var_declaration |;

periods: periods ',' period | period;

period: const_variable '..' const_variable;

var_declarations: VAR var_declaration ';' |;

var_declaration:
	var_declaration ';' identifier_list ':' type
	| identifier_list ':' type;

subprogram_declarations:
	subprogram_declarations subprogram_declaration
	|;

subprogram_declaration: subprogram_head program_body ';';

subprogram_head:
	FUNCTION ID formal_parameter ':' standard_type ';'
	| PROCEDURE ID formal_parameter ';';

formal_parameter: '(' parameter_lists ')' |;

parameter_lists:
	parameter_lists ';' parameter_list
	| parameter_list;

parameter_list: var_parameter | value_parameter;

var_parameter: VAR value_parameter;

value_parameter: identifier_list ':' standard_type;

compound_statement: BEGIN statement_list END;

statement_list: statement_list ';' statement | statement;

statement:
	variable ASSIGNOP expression
	| call_procedure_statement
	| compound_statement
	| IF expression THEN statement else_part
	| CASE expression OF case_body END
	| WHILE expression DO statement
	| REPEAT statement_list UNTIL expression
	| FOR ID ASSIGNOP expression updown expression DO statement
	|;

variable: ID id_varparts;

id_varparts: id_varparts id_varpart |;

id_varpart: '[' expression_list ']' | '.' ID;

else_part: ELSE statement |;

case_body: branch_list |;

branch_list: branch_list ';' branch | branch;

branch: const_list ':' statement;

const_list: const_list ',' const_variable | const_variable;

updown: TO | DOWNTO;

call_procedure_statement: ID | ID '(' expression_list ')';

expression_list: expression_list ',' expression | expression;

expression:
	simple_expression RELOP simple_expression
	| simple_expression;

simple_expression:
	term
	| PLUS term
	| MINUS term
	| simple_expression ADDOP term;

term: term MULOP factor | factor;

factor:
	unsign_const_variable
	| variable
	| ID '(' expression_list ')'
	| '(' expression ')'
	| NOT factor;

unsign_const_variable: ID | NUM | '\'' LETTER '\'';

// --- Lexer Rules ---

RELOP: EQUAL | '<>' | '<' | '<=' | '>' | '>=';

EQUAL: '=';

ADDOP: PLUS | MINUS | OR;

MULOP: MULT | DIVIDE | DIV | MOD | AND;

PLUS: '+';

MINUS: '-';

MULT: '*';

DIVIDE: '/';

ASSIGNOP: ':=';

AND: 'and';

OR: 'or';

NOT: 'not';

INTEGER: 'integer';

REAL: 'real';

BOOLEAN: 'boolean';

CHAR: 'char';

ARRAY: 'array';

BEGIN: 'begin';

CASE: 'case';

CONST: 'const';

DIV: 'div';

DO: 'do';

DOWNTO: 'downto';

ELSE: 'else';

END: 'end';

FOR: 'for';

FUNCTION: 'function';

IF: 'if';

MOD: 'mod';

OF: 'of';

PROCEDURE: 'procedure';

PROGRAM: 'program';

RECORD: 'record';

REPEAT: 'repeat';

THEN: 'then';

TO: 'to';

TYPE: 'type';

UNTIL: 'until';

VAR: 'var';

WHILE: 'while';

ID: LETTER (LETTER | DIGIT)*;

LETTER: [a-zA-Z];

NUM: DIGITS FRAC? EXPONENT?;

EXPONENT: 'E' [+-]? DIGITS;

FRAC: '.' DIGITS;

DIGITS: DIGIT DIGIT*;

DIGIT: [0-9];

NEWLINE: '\r'? '\n' -> skip;

WS: [ \t]+ -> skip;
