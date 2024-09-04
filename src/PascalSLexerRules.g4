lexer grammar PascalSLexerRules;

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

FALSE: 'false';

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

TRUE: 'true';

TYPE: 'type';

UNTIL: 'until';

VAR: 'var';

WHILE: 'while';

LETTER: [a-zA-Z];

NUM: DIGITS FRAC? EXPONENT?;

EXPONENT: 'E' [+-]? DIGITS;

FRAC: '.' DIGITS;

DIGITS: DIGIT DIGIT*;

DIGIT: [0-9];

EQUAL: '=';

PLUS: '+';

MINUS: '-';

MULT: '*';

DIVIDE: '/';

ASSIGNOP: ':=';

PERIODOP: '..';

DOT: '.';

COMMA: ',';

COLON: ':';

SEMICOLON: ';';

QUOTE: '\'';

LPAREN: '(';

RPAREN: ')';

LBRACKET: '[';

RBRACKET: ']';

NEWLINE: '\r'? '\n' -> skip;

WS: [ \t]+ -> skip;