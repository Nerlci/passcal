#ifndef STANDARDPROCEDURE_H
#define STANDARDPROCEDURE_H

#include <llvm/IR/IRBuilder.h>
#include <unordered_map>

class StandardProcedure {
public:
    static std::unordered_map<std::string, llvm::Function* (*)(llvm::Module*)> prototypeMap;
    static std::unordered_map<std::string, void (*)(std::string filename, int line, int column, llvm::IRBuilder<>*, std::vector<llvm::Value*>&)> argsConstructorMap;

    static void init();
    static bool hasProcedure(std::string name);

    static llvm::Function* readlnPrototype(llvm::Module* module);
    static void readArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args);
    static void readlnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args);

    static llvm::Function* writelnPrototype(llvm::Module* module);
    static void writeArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args);
    static void writelnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args);

private:
    static std::string getFormatString(llvm::Type* type);
};

#endif
