#include "PascalSLexer.h"
#include "PascalSParser.h"
#include "CodeGenVisitor.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("test.pas");
    ANTLRInputStream input(stream);
    PascalSLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PascalSParser parser(&tokens);

    tree::ParseTree* tree = parser.program();
    
    CodeGenVisitor codeGen;
    codeGen.visit(tree);

    codeGen.module->print(outs(), nullptr);

    return 0;
}
