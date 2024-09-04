#include "CodeGenVisitor.h"
#include "Exception/SemanticException.h"
#include "PascalSParser.h"

CodeGenVisitor::CodeGenVisitor()
    : builder(context)
    , current_return_type(nullptr) {
}

CodeGenVisitor::CodeGenVisitor(const std::string& filename)
    : builder(context)
    , current_return_type(nullptr)
    , filename(filename) {
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
    visitChildren(ctx);
    if (current_return_type) { // in a sub program
        builder.CreateRet(ConstantInt::get(current_return_type, 0));
    } else { // in main function
        builder.CreateRet(ConstantInt::get(Type::getInt32Ty(context), 0));
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitConstDeclaration(PascalSParser::ConstDeclarationContext* ctx) {
    // Generate LLVM IR for constant declaration
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
    // Generate LLVM IR for constant variable
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
    // Generate LLVM IR for type declaration
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
    // Generate LLVM IR for variable declarations
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
    // Generate LLVM IR for variable declaration
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
    // Generate LLVM IR for identifier list
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
    // Generate LLVM IR for type
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
    // Generate LLVM IR for periods
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
    // Generate LLVM IR for period
    auto start_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(0)));
    auto end_const = (llvm::Constant*)std::any_cast<llvm::Value*>(visit(ctx->constVariable(1)));
    int start = start_const->getUniqueInteger().getLimitedValue();
    int end = end_const->getUniqueInteger().getLimitedValue();

    return std::make_pair(start, end);
}

// @return llvm::Type*
antlrcpp::Any CodeGenVisitor::visitStandardType(PascalSParser::StandardTypeContext* ctx) {
    // Generate LLVM IR for standard type
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
    // Generate LLVM IR for expression
    return visitChildren(ctx);
}

llvm::Type* mapPascalTypeToLLVM(const std::string& pascalType, llvm::LLVMContext& context) {
    if (pascalType == "integer") {
        return llvm::Type::getInt32Ty(context);
    } else if (pascalType == "boolean") {
        return llvm::Type::getInt1Ty(context);
    } else if (pascalType == "real") {
        return llvm::Type::getDoubleTy(context);
    } else if (pascalType == "char") {
        return llvm::Type::getInt8Ty(context);
    } else {
        throw SemanticException("Unknown type: " + pascalType);
        return nullptr;
    }
}

// @return nullptr
antlrcpp::Any CodeGenVisitor::visitSubprogramDeclaration(PascalSParser::SubprogramDeclarationContext* ctx) {
    auto sub_program_id_node = ctx->subprogramHead()->ID();
    std::string sub_program_name = sub_program_id_node->getText();
    std::vector<llvm::Type*> param_types;
    llvm::Type* return_type = llvm::Type::getVoidTy(context);
    if (ctx->subprogramHead()->formalParameter()->parameterLists()) {
        std::vector<PascalSParser::ParameterListContext*> param_lists_vec;
        auto ptr = ctx->subprogramHead()->formalParameter()->parameterLists();
        while (ptr->parameterLists() != nullptr) {
            param_lists_vec.push_back(ptr->parameterList());
            ptr = ptr->parameterLists();
        }
        param_lists_vec.push_back(ptr->parameterList());
        // Iterate over each parameter list
        for (auto& param_list : param_lists_vec) {
            // Each paramList might have multiple parameters with the same type, e.g., `a, b: integer`
            PascalSParser::ValueParameterContext* value_parameter = nullptr;
            if (param_list->varParameter()) {
                value_parameter = param_list->varParameter()->valueParameter();
            } else if (param_list->valueParameter()) {
                value_parameter = param_list->valueParameter();
            } else {
                throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                    "Parameter list must be either a value or var parameter");
            }
            llvm::Type* param_list_type = mapPascalTypeToLLVM(value_parameter->standardType()->getText(), context);
            std::vector<antlr4::tree::TerminalNode*> ident_list_vec;
            auto ptr = value_parameter->identifierList();
            while (ptr->identifierList() != nullptr) {
                ident_list_vec.push_back(ptr->ID());
                ptr = ptr->identifierList();
            }
            ident_list_vec.push_back(ptr->ID());
            for (auto ident : ident_list_vec) {
                std::string ident_str = ident->getText();
                param_types.push_back(param_list_type);
            }
        }
        if (ctx->subprogramHead()->PROCEDURE() != nullptr) {
        } else if (ctx->subprogramHead()->FUNCTION() != nullptr) {
            return_type = mapPascalTypeToLLVM(ctx->subprogramHead()->standardType()->getText(), context);
        } else {
            throw SemanticException(filename, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine(),
                "Subprogram declaration must be either a function or a procedure");
        }
    }
    param_types = std::vector<llvm::Type*>(param_types.rbegin(), param_types.rend()); // reverse
    llvm::FunctionType* sub_program_type = llvm::FunctionType::get(return_type, param_types, false);
    llvm::Function* sub_program = llvm::Function::Create(sub_program_type, llvm::Function::ExternalLinkage, sub_program_name, module.get());
    llvm::BasicBlock* sub_program_entry = llvm::BasicBlock::Create(context, ctx->subprogramHead()->ID()->toString(), sub_program);
    Scope* sub_program_scope = new Scope(scope);
    auto prev_insert_point = builder.saveIP();
    auto prev_return_type = current_return_type;
    auto prev_scope = scope;
    scope = sub_program_scope;
    current_return_type = return_type;
    builder.SetInsertPoint(sub_program_entry);
    auto res = visitChildren(ctx);
    scope = prev_scope;
    current_return_type = prev_return_type;
    builder.restoreIP(prev_insert_point);
    // TODO: handle return value of function, needs to collab with callProcedureStatement
    return res;
}

// Implement other visit methods as needed

Value* CodeGenVisitor::getArrayElement(Value* array, std::vector<Value*> index) {
    // Generate LLVM IR for getting array element
    Type* array_type = ((AllocaInst*)array)->getAllocatedType();
    std::vector<std::pair<int, int>> array_info = scope->getArray(array_type);
    // if (array_info.size() != index.size()) {
    //     throw SemanticException(filename, 0, 0, "Array index count mismatch");
    // }

    std::vector<Value*> offsetted_indices;
    for (int i = 0; i < array_info.size(); i++) {
        Value* start = ConstantInt::get(context, APInt(32, array_info[i].first));
        Value* offset = builder.CreateSub(index[i], start);
        offsetted_indices.push_back(offset);
    }

    return builder.CreateGEP(array_type, array, offsetted_indices);
}

Value* CodeGenVisitor::getRecordElement(Value* record, std::string& field) {
    // Generate LLVM IR for getting record element
    Type* record_type = ((AllocaInst*)record)->getAllocatedType();
    std::map<std::string, int> record_info = scope->getRecord(record_type);
    int index = record_info[field];

    // if (index == -1) {
    //     throw SemanticException(filename, 0, 0, "Field '" + field + "' not found in record");
    // }

    return builder.CreateStructGEP(record_type, record, index);
}
