CC := g++
ANTLR_INCLUDE := -I/usr/local/include/antlr4-runtime
ANTLR_LIB := -L/usr/local/lib -lantlr4-runtime
LLVM_INCLUDE := -I/usr/include/llvm-18 -I/usr/include/llvm-c-18
LLVM_CONFIG := /usr/lib/llvm-18/bin/llvm-config
LLVM_LIBS := $(shell $(LLVM_CONFIG) --libs)
LLVM_CXXFLAGS := -std=c++17 -funwind-tables -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS
LINK := $(ANTLR_LIB) $(LLVM_LIBS)

SOURCES := $(wildcard src/*.cpp)

main: antlrs
	$(CC) $(ANTLR_INCLUDE) $(LLVM_INCLUDE) $(LLVM_CXXFLAGS) $(SOURCES) -o pascal_parser $(LINK)

antlrs: src/PascalS.g4
	antlr4 -Dlanguage=Cpp -visitor -no-listener src/PascalS.g4

clean:
	rm *.o pascal_parser
