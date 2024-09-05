#ifndef SCOPE_H
#define SCOPE_H

#include <llvm/IR/Value.h>
#include <map>
#include <set>
#include <string>

class Scope {
public:
    Scope() = default;
    Scope(Scope* parent)
        : parent(parent) { }

    void put(const std::string& name, llvm::Value* value);
    void putArray(const llvm::Type* type, const std::vector<std::pair<int, int>>& array);
    void putRecord(const llvm::Type* type, const std::map<std::string, int>& record);

    llvm::Value* get(const std::string& name);
    std::vector<std::pair<int, int>> getArray(const llvm::Type* type);
    std::map<std::string, int> getRecord(const llvm::Type* type);

private:
    std::map<std::string, llvm::Value*> table;
    std::map<const llvm::Type*, std::vector<std::pair<int, int>>> array_table;
    std::map<const llvm::Type*, std::map<std::string, int>> record_table;
    Scope* parent = nullptr;
};

#endif // SCOPE_H