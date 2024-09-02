grammar PascalS;

// Lexer rules
WS: [ \t\r\n]+ -> skip;
PROGRAM: 'program';
BEGIN: 'begin';
END: 'end';
VAR: 'var';
INTEGER: 'integer';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
NUMBER: [0-9]+;

// Parser rules
program: PROGRAM IDENTIFIER ';' block '.';
block: varDeclaration? BEGIN statementList END;
varDeclaration: VAR variable (',' variable)* ':' INTEGER ';';
variable: IDENTIFIER;
statementList: (statement ';')*;
statement: assignment;
assignment: IDENTIFIER ':=' expression;
expression: term (( '+' | '-' ) term)*;
term: factor (( '*' | '/' ) factor)*;
factor: IDENTIFIER | NUMBER | '(' expression ')';
