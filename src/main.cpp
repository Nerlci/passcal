#include <iostream>
#include "antlr4-runtime.h"
#include "PascalSLexer.h"
#include "PascalSParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("test.pas");
    ANTLRInputStream input(stream);
    PascalSLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PascalSParser parser(&tokens);

    tree::ParseTree* tree = parser.program();
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
