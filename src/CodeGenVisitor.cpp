#include "CodeGenVisitor.h"
#include "Exception/SemanticException.h"
#include "PascalSParser.h"

CodeGenVisitor::CodeGenVisitor()
    : builder(context) {
}

CodeGenVisitor::CodeGenVisitor(const std::string& filename)
    : builder(context)
    , filename(filename) {
}

CodeGenVisitor::~CodeGenVisitor() {
    delete scope;
}

antlrcpp::Any CodeGenVisitor::visitProgramHead(PascalSParser::ProgramHeadContext* ctx) {
    // Create a new LLVM module
    auto program_id_node = ctx->ID();
    std::string program_name = program_id_node->getText();
    module = std::make_unique<Module>(program_name, context);
    llvm::FunctionType* main_func_type = llvm::FunctionType::get(Type::getInt32Ty(context), false);
    llvm::Function* main_func = llvm::Function::Create(main_func_type, llvm::Function::ExternalLinkage, "main", module.get());
    llvm::BasicBlock* main_entry = llvm::BasicBlock::Create(context, "mainEntry", main_func);
    builder.SetInsertPoint(main_entry);
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitProgramBody(PascalSParser::ProgramBodyContext* ctx) {
    auto res = visitChildren(ctx);

    if (current_return_value != nullptr && isa<AllocaInst>(current_return_value)) {
        auto return_type = ((AllocaInst*)current_return_value)->getAllocatedType();
        current_return_value = builder.CreateLoad(return_type, current_return_value);
    }
    builder.CreateRet(current_return_value);
    return res;
}

antlrcpp::Any CodeGenVisitor::visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) {
    if (ctx->constDeclaration() != nullptr) {
        visit(ctx->constDeclaration());
    }

    std::string identifier = ctx->ID()->getText();
    llvm::Value* value = std::any_cast<llvm::Value*>(visit(ctx->constVariable()));

    module->getOrInsertGlobal(identifier, value->getType());
    llvm::GlobalVariable* global = module->getNamedGlobal(identifier);
    global->setInitializer(dyn_cast<Constant>(value));
    global->setConstant(true);

    scope->put(identifier, global);

    return nullptr;
}

// @return llvm::Value*
antlrcpp::Any CodeGenVisitor::visitConstVariable(PascalSParser::ConstVariableContext* ctx) {
    llvm::Value* value = nullptr;

    if (ctx->ID() != nullptr) {
        std::string identifier = ctx->ID()->getText();
        auto global = module->getNamedGlobal(identifier);

        if (global == nullptr) {
            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                "'" + identifier + "' was not declared in this scope or is not a constant");
        } else {
            value = (llvm::ConstantInt*)global->getInitializer();
        }
    }

    if (ctx->NUM() != nullptr) {
        bool negative = ctx->MINUS() != nullptr;

        std::string num_str = ctx->NUM()->getText();
        if (num_str.find('.') != std::string::npos) {
            double num = std::stod(num_str) * (negative ? -1 : 1);
            value = ConstantFP::get(context, APFloat(num));
        } else {
            int num = std::stoi(num_str) * (negative ? -1 : 1);
            value = ConstantInt::get(context, APInt(32, num, !negative));
        }
    }

    if (ctx->CHARLITERAL() != nullptr) {
        char letter = ctx->CHARLITERAL()->getText()[1];
        value = ConstantInt::get(context, APInt(8, letter));
    }

    return value;
}

antlrcpp::Any CodeGenVisitor::visitTypeDeclaration(PascalSParser::TypeDeclarationContext* ctx) {
    if (ctx->typeDeclaration() != nullptr) {
        visit(ctx->typeDeclaration());
    }

    std::string identifier = ctx->ID()->getText();
    llvm::Type* type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    llvm::StructType* type_struct = llvm::StructType::create(context, "type_" + identifier);
    type_struct->setBody(type);
    auto addr = builder.CreateAlloca(type_struct, nullptr, identifier);

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitVarDeclarations(PascalSParser::VarDeclarationsContext* ctx) {
    if (ctx->varDeclaration() != nullptr) {
        auto var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));

        for (const auto& var_declaration : var_declarations) {
            std::string identifier = var_declaration.first;
            llvm::Type* type = var_declaration.second;

            auto alloca = builder.CreateAlloca(type, nullptr, identifier);
            scope->put(identifier, alloca);
        }
    }

    return nullptr;
}

// @return std::map<std::string, llvm::Type*>
antlrcpp::Any CodeGenVisitor::visitVarDeclaration(PascalSParser::VarDeclarationContext* ctx) {
    std::map<std::string, llvm::Type*> var_declarations;
    if (ctx->varDeclaration() != nullptr) {
        auto prev_var_declarations = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->varDeclaration()));
        var_declarations.insert(prev_var_declarations.begin(), prev_var_declarations.end());
    }

    auto identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
    auto type = std::any_cast<llvm::Type*>(visit(ctx->type()));

    for (const auto& identifier : identifiers) {
        if (var_declarations.find(identifier) != var_declarations.end()) {
            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                "'" + identifier + "' was already declared in this scope");
        }

        var_declarations[identifier] = type;
    }

    return var_declarations;
}

// @return std::vector<std::string>
antlrcpp::Any CodeGenVisitor::visitIdentifierList(PascalSParser::IdentifierListContext* ctx) {
    std::vector<std::string> identifiers;
    std::string identifier = ctx->ID()->getText();
    identifiers.push_back(identifier);

    if (ctx->identifierList() != nullptr) {
        auto next_identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
        identifiers.insert(identifiers.begin(), next_identifiers.begin(), next_identifiers.end());
    }

    return identifiers;
}

// @return llvm::Type*
antlrcpp::Any CodeGenVisitor::visitType(PascalSParser::TypeContext* ctx) {
    llvm::Type* type = nullptr;
    if (ctx->standardType() != nullptr) {
        type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));
    } else if (ctx->recordBody() != nullptr) {
        auto record_body = std::any_cast<std::map<std::string, llvm::Type*>>(visit(ctx->recordBody()));

        std::map<std::string, int> record_names;
        std::vector<llvm::Type*> record_types;
        int idx = 0;
        for (const auto& record : record_body) {
            record_names.insert({ record.first, idx++ });
            record_types.push_back(record.second);
        }

        type = llvm::StructType::get(context, record_types);

        scope->putRecord(type, record_names);
    } else if (ctx->ARRAY() != nullptr) {
        auto array_type_content = std::any_cast<llvm::Type*>(visit(ctx->type()));
        auto array_period = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));

        for (auto period = array_period.rbegin(); period != array_period.rend(); ++period) {
            int start = period->first;
            int end = period->second;
            array_type_content = ArrayType::get(array_type_content, end - start + 1);
        }

        type = array_type_content;

        scope->putArray(type, array_period);
    }

    return type;
}

// @return std::vector<std::pair<int, int>>
antlrcpp::Any CodeGenVisitor::visitPeriods(PascalSParser::PeriodsContext* ctx) {
    std::vector<std::pair<int, int>> periods;
    if (ctx->periods() != nullptr) {
        auto next_periods = std::any_cast<std::vector<std::pair<int, int>>>(visit(ctx->periods()));
        periods.insert(periods.begin(), next_periods.begin(), next_periods.end());
    }

    auto period = std::any_cast<std::pair<int, int>>(visit(ctx->period()));
    periods.push_back(period);

    return periods;
}

// @return std::pair<int, int>
antlrcpp::Any CodeGenVisitor::visitPeriod(PascalSParser::PeriodContext* ctx) {
    auto start_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(0)));
    auto end_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(1)));
    int start = start_const->getUniqueInteger().getLimitedValue();
    int end = end_const->getUniqueInteger().getLimitedValue();

    return std::make_pair(start, end);
}

// @return llvm::Type*
antlrcpp::Any CodeGenVisitor::visitStandardType(PascalSParser::StandardTypeContext* ctx) {
    llvm::Type* type = nullptr;
    if (ctx->INTEGER() != nullptr) {
        type = Type::getInt32Ty(context);
    } else if (ctx->BOOLEAN() != nullptr) {
        type = Type::getInt1Ty(context);
    } else if (ctx->REAL() != nullptr) {
        type = Type::getDoubleTy(context);
    } else if (ctx->CHAR() != nullptr) {
        type = Type::getInt8Ty(context);
    } else {
        type = Type::getVoidTy(context);
    }
    return type;
}

antlrcpp::Any CodeGenVisitor::visitExpression(PascalSParser::ExpressionContext* ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitSubprogramDeclaration(PascalSParser::SubprogramDeclarationContext* ctx) {
    Scope* sub_program_scope = new Scope(scope);
    auto prev_insert_point = builder.saveIP();
    auto prev_return_value = current_return_value;
    auto prev_scope = scope;

    scope = sub_program_scope;

    auto func = std::any_cast<llvm::Function*>(visit(ctx->subprogramHead()));
    subprogramScope->put(func->getName().str(), func);
    visit(ctx->programBody());

    scope = prev_scope;
    current_return_value = prev_return_value;
    builder.restoreIP(prev_insert_point);

    return nullptr;
}

// @return llvm::Function*
antlrcpp::Any CodeGenVisitor::visitSubprogramHead(PascalSParser::SubprogramHeadContext* ctx) {
    auto sub_program_id_node = ctx->ID();
    std::string sub_program_name = sub_program_id_node->getText();

    llvm::Type* return_type = nullptr;
    llvm::Value* return_value = nullptr;
    if (ctx->PROCEDURE() != nullptr) {
        return_type = llvm::Type::getVoidTy(context);
    } else if (ctx->FUNCTION() != nullptr) {
        return_type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));
    } else {
        throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
            "Subprogram declaration must be either a function or a procedure");
    }

    std::vector<SubprogramParameter> param_lists;
    std::vector<llvm::Type*> param_types;
    std::set<std::string> param_names;

    if (ctx->formalParameter()->parameterLists()) {
        param_lists = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->formalParameter()->parameterLists()));

        for (const auto& param : param_lists) {
            llvm::Type* param_type = param.type;

            // Check for reference parameters (passed by var)
            if (param.is_var) {
                param_type = param_type->getPointerTo();
            }

            param_types.push_back(param_type);

            // Check for duplicate parameter names
            if (param_names.find(param.name) != param_names.end()) {
                throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                    "Parameter '" + param.name + "' was already declared in this scope");
            }

            param_names.insert(param.name);
        }
    }

    llvm::FunctionType* sub_program_type = llvm::FunctionType::get(return_type, param_types, false);
    llvm::Function* sub_program = llvm::Function::Create(sub_program_type, llvm::Function::ExternalLinkage, sub_program_name, module.get());
    llvm::BasicBlock* sub_program_entry = llvm::BasicBlock::Create(context, sub_program_name + "Entry", sub_program);

    // Add parameters to scope
    int idx = 0;
    for (auto& arg : sub_program->args()) {
        arg.setName(param_lists[idx].name);
        scope->put(param_lists[idx].name, &arg);
        idx++;
    }

    current_return_value = return_value;
    builder.SetInsertPoint(sub_program_entry);

    if (ctx->FUNCTION()) {
        return_value = builder.CreateAlloca(return_type, nullptr, sub_program_name + "_return_value");
        scope->put(sub_program_name, return_value);
        current_return_value = return_value;
    }

    // If you need to handle the dereferencing of var parameters
    // Example: If you want to modify a reference parameter
    // Assume you have a variable 'someVar' passed as var
    // llvm::Value* someVarPtr = scope->get("someVar");
    // llvm::Value* someVarValue = builder.CreateLoad(someVarPtr); // Load the original value
    // ... Modify the value ...
    // builder.CreateStore(modifiedValue, someVarPtr); // Store back the modified value
    return sub_program;
}

antlrcpp::Any CodeGenVisitor::visitParameterLists(PascalSParser::ParameterListsContext* ctx) {
    std::vector<SubprogramParameter> param_lists;
    if (ctx->parameterLists() != nullptr) {
        auto prev_param_lists = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->parameterLists()));
        param_lists.insert(param_lists.begin(), prev_param_lists.begin(), prev_param_lists.end());
    }

    auto param_list = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->parameterList()));
    param_lists.insert(param_lists.end(), param_list.begin(), param_list.end());

    return param_lists;
}

// @return std::vector<SubprogramParameter>
antlrcpp::Any CodeGenVisitor::visitParameterList(PascalSParser::ParameterListContext* ctx) {
    std::vector<SubprogramParameter> param_list;

    if (ctx->varParameter() != nullptr) {
        param_list = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->varParameter()));
    } else if (ctx->valueParameter() != nullptr) {
        param_list = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->valueParameter()));
    } else {
        throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
            "Parameter list must be either a value or var parameter");
    }

    return param_list;
}

// @return std::vector<SubprogramParameter>
antlrcpp::Any CodeGenVisitor::visitVarParameter(PascalSParser::VarParameterContext* ctx) {
    auto param_list = std::any_cast<std::vector<SubprogramParameter>>(visit(ctx->valueParameter()));

    for (auto& param : param_list) {
        param.is_var = true;
    }

    return param_list;
}

// @return std::vector<std::pair<std::string, llvm::Type*>>
antlrcpp::Any CodeGenVisitor::visitValueParameter(PascalSParser::ValueParameterContext* ctx) {
    std::vector<std::string> identifiers = std::any_cast<std::vector<std::string>>(visit(ctx->identifierList()));
    llvm::Type* type = std::any_cast<llvm::Type*>(visit(ctx->standardType()));

    std::vector<SubprogramParameter> params;
    for (const auto& identifier : identifiers) {
        params.push_back({ identifier, type, false });
    }

    return params;
}

Value* CodeGenVisitor::getArrayElement(Value* array, std::vector<Value*> index) {
    Type* array_type = ((AllocaInst*)array)->getAllocatedType();
    std::vector<std::pair<int, int>> array_info = scope->getArray(array_type);
    if (array_info.size() != index.size()) {
        throw SemanticException(filename, 0, 0, "Array index count mismatch");
    }

    std::vector<Value*> offsetted_indices;
    for (int i = 0; i < array_info.size(); i++) {
        Value* start = ConstantInt::get(context, APInt(32, array_info[i].first));
        Value* offset = builder.CreateSub(index[i], start);
        offsetted_indices.push_back(offset);
    }

    return builder.CreateGEP(array_type, array, offsetted_indices);
}

Value* CodeGenVisitor::getRecordElement(Value* record, std::string& field) {
    Type* record_type = ((AllocaInst*)record)->getAllocatedType();
    std::map<std::string, int> record_info = scope->getRecord(record_type);
    int index = record_info[field];

    if (index == -1) {
        throw SemanticException(filename, 0, 0, "Field '" + field + "' not found in record");
    }

    return builder.CreateStructGEP(record_type, record, index);
}
