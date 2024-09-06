lexer grammar PascalSLexerRules;

fragment A: 'a' | 'A';

fragment B: 'b' | 'B';

fragment C: 'c' | 'C';

fragment D: 'd' | 'D';

fragment E: 'e' | 'E';

fragment F: 'f' | 'F';

fragment G: 'g' | 'G';

fragment H: 'h' | 'H';

fragment I: 'i' | 'I';

fragment J: 'j' | 'J';

fragment K: 'k' | 'K';

fragment L: 'l' | 'L';

fragment M: 'm' | 'M';

fragment N: 'n' | 'N';

fragment O: 'o' | 'O';

fragment P: 'p' | 'P';

fragment Q: 'q' | 'Q';

fragment R: 'r' | 'R';

fragment S: 's' | 'S';

fragment T: 't' | 'T';

fragment U: 'u' | 'U';

fragment V: 'v' | 'V';

fragment W: 'w' | 'W';

fragment X: 'x' | 'X';

fragment Y: 'y' | 'Y';

fragment Z: 'z' | 'Z';

AND: A N D;

OR: O R;

NOT: N O T;

INTEGER: I N T E G E R;

REAL: R E A L;

BOOLEAN: B O O L E A N;

CHAR: C H A R;

ARRAY: A R R A Y;

BEGIN: B E G I N;

CASE: C A S E;

CONST: C O N S T;

DIV: D I V;

DO: D O;

DOWNTO: D O W N T O;

ELSE: E L S E;

END: E N D;

FALSE: F A L S E;

FOR: F O R;

FUNCTION: F U N C T I O N;

IF: I F;

MOD: M O D;

OF: O F;

PROCEDURE: P R O C E D U R E;

PROGRAM: P R O G R A M;

RECORD: R E C O R D;

REPEAT: R E P E A T;

THEN: T H E N;

TO: T O;

TRUE: T R U E;

TYPE: T Y P E;

UNTIL: U N T I L;

VAR: V A R;

WHILE: W H I L E;

CHARLITERAL: QUOTE . QUOTE;

ID: LETTER (LETTER | DIGIT)*;

LETTER: [a-zA-Z];

NUM: DIGITS FRAC? EXPONENT?;

EXPONENT: 'E' [+-]? DIGITS;

FRAC: '.' DIGITS;

DIGITS: DIGIT DIGIT*;

DIGIT: [0-9];

EQUAL: '=';

NEQUAL: '<>';

LT: '<';

LE: '<=';

GT: '>';

GE: '>=';

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