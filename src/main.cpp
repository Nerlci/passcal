#include "CodeGenVisitor.h"
#include "PascalSLexer.h"
#include "PascalSParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream stream;
    stream.open(filename);
    ANTLRInputStream input(stream);
    PascalSLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    PascalSParser parser(&tokens);

    tree::ParseTree* tree = parser.program();

    CodeGenVisitor codeGen(filename);

    try {
        codeGen.visit(tree);
    } catch (const std::exception& e) {
        llvm::errs() << e.what() << "\n";
        return 1;
    }

    codeGen.module->print(outs(), nullptr);

    return 0;
}
