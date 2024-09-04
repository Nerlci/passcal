#include <llvm/IR/LegacyPassManager.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/TargetParser/Host.h>

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

    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();

    // 获取目标机器
    std::string targetTriple = llvm::sys::getDefaultTargetTriple();
    std::cout << "Target triple: " << targetTriple << "\n";
    codeGen.module->setTargetTriple(targetTriple);

    std::string error;

    const llvm::Target* target = llvm::TargetRegistry::lookupTarget(targetTriple, error);
    if (!target) {
        llvm::errs() << "Unable to find target\n";
        return 1;
    }

    llvm::TargetOptions options;
    std::unique_ptr<llvm::TargetMachine> targetMachine(target->createTargetMachine(targetTriple, "generic", "", options, llvm::Reloc::PIC_));
    codeGen.module->setDataLayout(targetMachine->createDataLayout());

    // 设置输出文件名
    std::error_code EC;
    llvm::raw_fd_ostream dest("output.o", EC, llvm::sys::fs::OF_None);
    if (EC) {
        llvm::errs() << "Could not open file: " << EC.message();
        return 1;
    }

    llvm::legacy::PassManager pass;
    if (targetMachine->addPassesToEmitFile(pass, dest, nullptr, llvm::CodeGenFileType::ObjectFile)) {
        llvm::errs() << "TargetMachine can't emit a file of this type\n";
        return 1;
    }

    pass.run(*codeGen.module);
    dest.flush();

    // 清理
    llvm::llvm_shutdown();

    return 0;
}
