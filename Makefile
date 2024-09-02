CC := g++
INCLUDE := -I/usr/local/include/antlr4-runtime

main: antlrs
	$(CC) $(INCLUDE) src/main.cpp src/PascalSLexer.cpp src/PascalSParser.cpp -lantlr4-runtime -o pascal_parser

antlrs: src/PascalS.g4
	antlr4 -Dlanguage=Cpp src/PascalS.g4
