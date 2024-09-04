#include "CodeGenVisitor.h"
#include "PascalSLexer.h"
#include "PascalSParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    try {
        std::string filename = argv[1];
        std::ifstream stream;
        stream.open(filename);
        ANTLRInputStream input(stream);
        PascalSLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        PascalSParser parser(&tokens);

        tree::ParseTree* tree = parser.program();

        CodeGenVisitor codeGen;
        codeGen.visit(tree);

        codeGen.module->print(outs(), nullptr);
    } catch (const std::bad_any_cast& e) {
        std::cerr << "Caught std::bad_any_cast: " << e.what() << std::endl;
        return 1;
    } catch (const std::exception& e) {
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
