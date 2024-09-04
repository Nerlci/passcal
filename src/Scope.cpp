#include "Scope.h"

void Scope::put(const std::string& name, llvm::Value* value) {
    table[name] = value;
}

llvm::Value* Scope::get(const std::string& name) {
    if (table.find(name) != table.end()) {
        return table[name];
    }
    if (parent != nullptr) {
        return parent->get(name);
    }
    return 0;
}
