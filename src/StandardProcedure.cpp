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
    prototypeMap["writeln"] = writelnPrototype;
    prototypeMap["readln"] = readlnPrototype;
    argsConstructorMap["write"] = writeArgsConstructor;
    argsConstructorMap["read"] = readArgsConstructor;
    argsConstructorMap["writeln"] = writelnArgsConstructor;
    argsConstructorMap["readln"] = readlnArgsConstructor;
}

std::string StandardProcedure::getFormatString(llvm::Type* type) {
    if (type->isIntegerTy(8)) {
        return "%c";
    } else if (type->isFloatTy()) {
        return "%f";
    } else if (type->isPointerTy()) {
        return "%p";
    } else if (type->isIntegerTy(1)) {
        return "%d";
    } else if (type->isIntegerTy()) {
        return "%d";
    } else {
        std::string type_str;
        llvm::raw_string_ostream rso(type_str);
        type->print(rso);
        rso.flush();
        throw std::runtime_error("Unsupported argument type '" + type_str + "' for write");
    }
}

bool StandardProcedure::hasProcedure(std::string name) {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
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

void StandardProcedure::readArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        llvm::Type* arg_type = llvm::cast<llvm::PointerType>(args[i]->getType())->getPointerElementType();
        format_string += getFormatString(arg_type);
    }
    args.insert(args.begin(), builder->CreateGlobalStringPtr(format_string));
}

void StandardProcedure::readlnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        llvm::Type* arg_type = llvm::cast<llvm::PointerType>(args[i]->getType())->getPointerElementType();
        format_string += getFormatString(arg_type);
    }
    format_string += "\n";
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

void StandardProcedure::writeArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        llvm::Type* arg_type = args[i]->getType();
        format_string += getFormatString(arg_type);
        if (arg_type->isFloatTy()) {
            args[i] = builder->CreateFPExt(args[i], llvm::Type::getDoubleTy(builder->getContext()));
        }
    }
    args.insert(args.begin(), builder->CreateGlobalStringPtr(format_string));
}

void StandardProcedure::writelnArgsConstructor(std::string filename, int line, int column, llvm::IRBuilder<>* builder, std::vector<llvm::Value*>& args) {
    std::string format_string = "";
    for (size_t i = 0; i < args.size(); ++i) {
        llvm::Type* arg_type = args[i]->getType();
        format_string += getFormatString(arg_type);
        if (arg_type->isFloatTy()) {
            args[i] = builder->CreateFPExt(args[i], llvm::Type::getDoubleTy(builder->getContext()));
        }
    }
    format_string += "\n";
    args.insert(args.begin(), builder->CreateGlobalStringPtr(format_string));
}
