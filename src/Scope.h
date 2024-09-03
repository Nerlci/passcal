#ifndef SCOPE_H
#define SCOPE_H

#include <llvm/IR/Value.h>
#include <map>
#include <string>

class Scope {
public:
    Scope() = default;
    Scope(Scope* parent)
        : parent(parent) { }

    void put(const std::string& name, llvm::Value* value);

    llvm::Value* get(const std::string& name);

private:
    std::map<std::string, llvm::Value*> table;
    Scope* parent = nullptr;
};

#endif // SCOPE_H