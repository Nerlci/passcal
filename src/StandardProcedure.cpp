#include "StandardProcedure.h"
#include "Exception/SemanticException.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Type.h"
#include <iostream>

std::unordered_map<std::string, llvm::Function* (*)(llvm::Module*)> StandardProcedure::prototypeMap;
std::unordered_map<std::string, void (*)(std::string filename, int line, int column, llvm::IRBuilder<>*, std::vector<llvm::Value*>&)> StandardProcedure::argsConstructorMap;

void StandardProcedure::init() {
    prototypeMap["write"] = writelnPrototype;
    prototypeMap["read"] = readlnPrototype;
    argsConstructorMap["write"] = writelnArgsConstructor;
    argsConstructorMap["read"] = readlnArgsConstructor;
}

bool StandardProcedure::hasProcedure(std::string name) {
    return prototypeMap.find(name) != prototypeMap.end();
}

llvm::Function* StandardProcedure::readlnPrototype(llvm::Module* module) {
    llvm::FunctionType* scanf_type = llvm::FunctionType::get(llvm::Type::getVoidTy(module->getContext()), { llvm::Type::getInt8PtrTy(module->getContext()) }, true);
    llvm::Function* func = module->getFunction("scanf");
    if (!func) {
        func = llvm::Function::Create(scanf_type, llvm::Function::ExternalLinkage, "scanf", module);
    }
    return func;
}

void StandardProcedure::readlnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        if (args[i]->getType()->isIntegerTy(8)) {
            format_string += "%c";
        } else if (args[i]->getType()->isFloatTy()) {
            format_string += "%f";
        } else if (args[i]->getType()->isPointerTy()) {
            format_string += "%p";
        } else if (args[i]->getType()->isIntegerTy(1)) {
            format_string += "%d";
        } else if (args[i]->getType()->isIntegerTy()) {
            format_string += "%d";
        } else {
            std::string type_str;
            llvm::raw_string_ostream rso(type_str);
            args[i]->getType()->print(rso);
            rso.flush();
            throw SemanticException(filename, line, column, "Unsupported argument type '" + type_str + "' for read");
        }
        if (i != args.size() - 1) {
            format_string += " ";
        }
    }
    args.insert(args.begin(), builder->CreateGlobalStringPtr(format_string));
}

llvm::Function* StandardProcedure::writelnPrototype(llvm::Module* module) {
    llvm::LLVMContext& context = module->getContext();
    llvm::Type* int_type = llvm::Type::getInt32Ty(module->getContext());
    std::vector<llvm::Type*> printf_args_types({ llvm::Type::getInt8PtrTy(module->getContext()) });
    llvm::FunctionType* printf_type = llvm::FunctionType::get(int_type, printf_args_types, true);
    llvm::Function* func = module->getFunction("printf");
    if (!func) {
        func = llvm::Function::Create(printf_type, llvm::Function::ExternalLinkage, "printf", module);
    }
    return func;
}

void StandardProcedure::writelnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        if (args[i]->getType()->isIntegerTy(8)) {
            format_string += "%c";
        } else if (args[i]->getType()->isFloatTy()) {
            format_string += "%f";
        } else if (args[i]->getType()->isPointerTy()) {
            format_string += "%p";
        } else if (args[i]->getType()->isIntegerTy(1)) {
            format_string += "%d";
        } else if (args[i]->getType()->isIntegerTy()) {
            format_string += "%d";
        } else {
            std::string type_str;
            llvm::raw_string_ostream rso(type_str);
            args[i]->getType()->print(rso);
            rso.flush();
            throw SemanticException(filename, line, column, "Unsupported argument type '" + type_str + "' for write");
        }
        if (i != args.size() - 1) {
            format_string += " ";
        }
    }
    format_string += "\n";
    args.insert(args.begin(), builder->CreateGlobalStringPtr(format_string));
}
