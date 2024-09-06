#include "Scope.h"

void Scope::put(const std::string& name, llvm::Value* value) {
    std::string transformed_name = name;
    std::transform(transformed_name.begin(), transformed_name.end(), transformed_name.begin(), ::tolower);
    table[transformed_name] = value;
}

void Scope::putArray(const llvm::Type* type, const std::vector<std::pair<int, int>>& array) {
    array_table[type] = array;
}

void Scope::putRecord(const llvm::Type* type, const std::map<std::string, int>& record) {
    record_table[type] = record;
}

llvm::Value* Scope::get(const std::string& name) {
    std::string transformed_name = name;
    std::transform(transformed_name.begin(), transformed_name.end(), transformed_name.begin(), ::tolower);
    if (table.find(transformed_name) != table.end()) {
        return table[transformed_name];
    }
    if (parent != nullptr) {
        return parent->get(transformed_name);
    }
    return 0;
}

std::vector<std::pair<int, int>> Scope::getArray(const llvm::Type* type) {
    if (array_table.find(type) != array_table.end()) {
        return array_table[type];
    }
    if (parent != nullptr) {
        return parent->getArray(type);
    }
    return {};
}

std::map<std::string, int> Scope::getRecord(const llvm::Type* type) {
    if (record_table.find(type) != record_table.end()) {
        return record_table[type];
    }
    if (parent != nullptr) {
        return parent->getRecord(type);
    }
    return {};
}

bool Scope::declared(const std::string& name) {
    std::string transformed_name = name;
    std::transform(transformed_name.begin(), transformed_name.end(), transformed_name.begin(), ::tolower);
    return table.find(transformed_name) != table.end();
}