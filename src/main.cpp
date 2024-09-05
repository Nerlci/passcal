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

int main(int argc, char* argv[]) {
    int opt;
    std::string output_file = "a.out";

    bool compile_to_asm = true;

    struct option long_options[] = {
        { "help", optional_argument, nullptr, 'h' },
        { "output", optional_argument, nullptr, 'o' }
    };

    while ((opt = getopt_long(argc, argv, "ho:S", long_options, nullptr)) != -1) {
        switch (opt) {
        case 'h':
            // 当用户输入 --help 时打印帮助信息
            printf("Usage: %s [options] input_file\n", argv[0]);
            printf("Options:\n");
            printf("  -h, --help            Display this information.\n");
            printf("  -o, --output <file>   Place the output into <file>.\n");
            printf("  -S                    Only run preprocess and translation steps.\n");
            return 0;
        case 'o':
            // 保存输出文件名
            output_file = optarg;
            break;
        case 'S':
            compile_to_asm = false;
            break;
        case '?':
            // 当遇到未知的选项时
            fprintf(stderr, "Unknown option `-%c'.\n", optopt);
            return 1;
        default:
            abort();
        }
    }

    // 检查是否有输入文件
    if (optind >= argc) {
        fprintf(stderr, "No input file specified.\n");
        return 1;
    }
    std::string filename = argv[optind];
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

    if (!compile_to_asm) {
        // 仅执行预处理和翻译步骤
        std::error_code EC;
        llvm::raw_fd_ostream out(output_file, EC, llvm::sys::fs::OF_None);
        if (EC) {
            llvm::errs() << "Could not open file: " << EC.message() << "\n";
            return 1;
        }

        codeGen.module->print(out, nullptr);
        return 0;
    }

    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();

    // 获取目标机器
    std::string targetTriple = llvm::sys::getDefaultTargetTriple();
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
    llvm::raw_fd_ostream dest(output_file, EC, llvm::sys::fs::OF_None);
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