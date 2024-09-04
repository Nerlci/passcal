#include <llvm/IR/LegacyPassManager.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/TargetParser/Host.h>

#include <getopt.h>

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

    CodeGenVisitor codeGen;
    codeGen.visit(tree);

    codeGen.module->print(outs(), nullptr);
    return 0;
}
