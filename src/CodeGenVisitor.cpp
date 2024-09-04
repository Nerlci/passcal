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
    // return: llvm::Value*
//    std::cout << "Visiting expression: " << ctx->getText() << std::endl;
    llvm::Value* value = nullptr;
    if (ctx->relationalOpreator()) {
        llvm::Value* left = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(0)));
        llvm::Value* right = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(1)));
        std::string op = ctx->relationalOpreator()->getText();

        if (op == "==") {
            value = builder.CreateICmpEQ(left, right, "eqtmp");
        } else if (op == "<>") {
            value = builder.CreateICmpNE(left, right, "netmp");
        } else if (op == "<") {
            value = builder.CreateICmpSLT(left, right, "lttmp");
        } else if (op == "<=") {
            value = builder.CreateICmpSLE(left, right, "letmp");
        } else if (op == ">") {
            value = builder.CreateICmpSGT(left, right, "gttmp");
        } else if (op == ">=") {
            value = builder.CreateICmpSGE(left, right, "getmp");
        }
    } else {

//        std::cout << "end expr" << std::endl;
        value = std::any_cast<llvm::Value*>(visit(ctx->simpleExpression(0)));
    }
    return value;
}

antlrcpp::Any CodeGenVisitor::visitIfStatement(PascalSParser::IfStatementContext* ctx) {
    // 访问条件表达式
    llvm::Value* condition = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));

    // 创建基本块：then和else
    llvm::Function* parentFunction = builder.GetInsertBlock()->getParent();
    llvm::BasicBlock* thenBB = llvm::BasicBlock::Create(context, "then", parentFunction);
    llvm::BasicBlock* elseBB;
    llvm::BasicBlock* mergeBB = llvm::BasicBlock::Create(context, "endif");

    // 检查是否需要else块
    if(ctx->elsePart() == nullptr) {
        builder.CreateCondBr(condition, thenBB, mergeBB);
    } else {
        llvm::BasicBlock* elseBB = llvm::BasicBlock::Create(context, "else");
        builder.CreateCondBr(condition, thenBB, elseBB);
    }

    // 访问then块
    builder.SetInsertPoint(thenBB);
    visit(ctx->statement());  

    builder.CreateBr(mergeBB);  // 跳转到合并块
    thenBB = builder.GetInsertBlock();  // 更新then块

    if(ctx->elsePart() != nullptr){
        // 插入else块指令
        builder.SetInsertPoint(elseBB);
        visit(ctx->elsePart()->statement());  // 访问else块
        builder.CreateBr(mergeBB);  // 跳转到合并块
        elseBB = builder.GetInsertBlock();  // 更新else块
    }
    // 插入合并块指令
    builder.SetInsertPoint(mergeBB);

    return nullptr;  // 返回结果
}

antlrcpp::Any CodeGenVisitor::visitForStatement(PascalSParser::ForStatementContext *ctx) {
    // 循环变量
    std::string loopVar = ctx->ID()->getText();
    
    // Get the initial value
    Value *initValue = std::any_cast<llvm::Value*>(visitExpression(ctx->expression(0)));
    
    // Get the final value
    Value *finalValue = std::any_cast<llvm::Value*>(visitExpression(ctx->expression(1)));
    
    // Determine if it's counting up or down
    bool countUp = ctx->updown()->getText() == "to";
    
    // Create basic blocks
    Function *function = builder.GetInsertBlock()->getParent();
    BasicBlock *preheaderBB = builder.GetInsertBlock();
    BasicBlock *loopBB = BasicBlock::Create(context, "loop", function);
    BasicBlock *afterBB = BasicBlock::Create(context, "afterloop", function);
    
    // Store the initial value in the loop variable
    Value *variable = scope->get(loopVar);
    if (!variable) {
        // If the variable doesn't exist, create an alloca for it
        variable = builder.CreateAlloca(builder.getInt32Ty(), nullptr, loopVar);
        scope->put(loopVar, variable);
    }
    builder.CreateStore(initValue, variable);
    
    // Jump to the loop body
    builder.CreateBr(loopBB);
    
    // Start insertion in loop block
    builder.SetInsertPoint(loopBB);
    
    // Generate the loop body
    visit(ctx->statement());
    
    // Increment or decrement the loop variable
    Value *currentVar = builder.CreateLoad(builder.getInt32Ty(), variable, loopVar);
    Value *nextVar = countUp ? 
        builder.CreateAdd(currentVar, ConstantInt::get(context, APInt(32, 1)), "nextvar") :
        builder.CreateSub(currentVar, ConstantInt::get(context, APInt(32, 1)), "nextvar");
    builder.CreateStore(nextVar, variable);
    
    // Compute the end condition
    Value *endCond = countUp ?
        builder.CreateICmpSLE(nextVar, finalValue, "loopcond") :
        builder.CreateICmpSGE(nextVar, finalValue, "loopcond");
    
    // Create the "after loop" block and insert it
    builder.CreateCondBr(endCond, loopBB, afterBB);
    
    // Any new code will be inserted in afterBB
    builder.SetInsertPoint(afterBB);
    
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitWhileStatement(PascalSParser::WhileStatementContext *ctx) {
    Function *function = builder.GetInsertBlock()->getParent();

    // 准备基本块
    BasicBlock *conditionBB = BasicBlock::Create(context, "while_cond", function);
    BasicBlock *loopBB = BasicBlock::Create(context, "while_body", function);
    BasicBlock *afterBB = BasicBlock::Create(context, "while_end", function);

    // 条件块
    builder.CreateBr(conditionBB);
    builder.SetInsertPoint(conditionBB);

    // 访问条件表达式
    Value *condition = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));
    // 创建条件跳转
    builder.CreateCondBr(condition, loopBB, afterBB);

    // 循环块
    builder.SetInsertPoint(loopBB);
    visit(ctx->statement());

    // 跳转到条件块
    builder.CreateBr(conditionBB);

    // 结束块
    builder.SetInsertPoint(afterBB);
    
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitRepeatStatement(PascalSParser::RepeatStatementContext *ctx) {
    llvm::Function *function = builder.GetInsertBlock()->getParent();

    // 生成基本块
    llvm::BasicBlock *loopBB = llvm::BasicBlock::Create(context, "repeat_body", function);
    llvm::BasicBlock *conditionBB = llvm::BasicBlock::Create(context, "repeat_cond", function);
    llvm::BasicBlock *afterBB = llvm::BasicBlock::Create(context, "repeat_end", function);

    // Branch to the loop body
    builder.CreateBr(loopBB);

    // Start insertion in loop block
    builder.SetInsertPoint(loopBB);

    // 遍历statementList
    visit(ctx->statementList());

    // Branch to the condition block
    builder.CreateBr(conditionBB);

    // Start insertion in condition block
    builder.SetInsertPoint(conditionBB);

    // Generate code for the condition
    Value *conditionValue = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));

    // Create conditional branch
    // If condition is false (0), continue looping. If true (1), exit the loop.
    builder.CreateCondBr(conditionValue, afterBB, loopBB);

    // Any new code will be inserted in afterBB
    builder.SetInsertPoint(afterBB);

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitStatementList(PascalSParser::StatementListContext *ctx) {
    if(ctx->statementList() != nullptr) {
        visit(ctx->statementList());
        visit(ctx->statement());
    }else{
        visit(ctx->statement());
    }
    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitCaseStatement(PascalSParser::CaseStatementContext *ctx) {
    // 获取当前的函数
    Function *function = builder.GetInsertBlock()->getParent();
    BasicBlock* switchBB = BasicBlock::Create(context, "switchBB", function);
    builder.CreateBr(switchBB);

    // 访问 case 的表达式，获取其值
    Value *caseValue = std::any_cast<llvm::Value*>(visitExpression(ctx->expression()));

    // 开始switch语句
    builder.SetInsertPoint(switchBB);
    SwitchInst* switchInst = builder.CreateSwitch(caseValue, nullptr);    

    // 访问 case 的分支列表
    auto branches = std::any_cast<std::vector<std::pair<std::vector<llvm::Value*>, llvm::BasicBlock*>>>(visit(ctx->caseBody()->branchList()));

    // 遍历所有的分支
    for (auto branch : branches) {
        // 获取分支的常量值
        std::vector<llvm::Value*> constValues = branch.first;

        // 创建基本块，用于在匹配到合适的分支之后跳转到该分支执行代码
        BasicBlock *caseBB = branch.second;

        // 遍历所有的常量值
        for (auto constValue : constValues) {
            // 添加分支
            switchInst->addCase(cast<ConstantInt>(constValue), caseBB);
        }
    }

    BasicBlock *afterCaseBB = BasicBlock::Create(context, "case_end", function);

    // default跳转afterCaseBB
    switchInst->setDefaultDest(afterCaseBB);
    
    // 设置 IRBuilder 的插入点到 case 结束块，便于后续的指令生成
    builder.SetInsertPoint(afterCaseBB);

    return nullptr;
}

antlrcpp::Any CodeGenVisitor::visitConstList(PascalSParser::ConstListContext *ctx) {
    // 递归访问 constList，得到所有的常量，加入vector
    std::vector<llvm::Value*> constValues;
    constValues.push_back(std::any_cast<llvm::Value*>(visit(ctx->constVariable())));

    if (ctx->constList() != nullptr) {
        auto nextConstValues = std::any_cast<std::vector<llvm::Value*>>(visit(ctx->constList()));
        constValues.insert(constValues.begin(), nextConstValues.begin(), nextConstValues.end());
    }

    return constValues;
}

antlrcpp::Any CodeGenVisitor::visitBranch(PascalSParser::BranchContext *ctx) {
    // 访问 constList，得到该分支的所有常量
    std::vector<llvm::Value*> constValues = std::any_cast<std::vector<llvm::Value*>>(visit(ctx->constList()));

    // 创建基本块，用于在匹配到合适的分支之后跳转到该分支执行代码
    BasicBlock *caseBB = BasicBlock::Create(context, "case_branch");
    builder.SetInsertPoint(caseBB);
    visit(ctx->statement());

    // 返回 pair：constValue -> statement
    return std::make_pair(constValues, caseBB);
}

antlrcpp::Any CodeGenVisitor::visitBranchList(PascalSParser::BranchListContext *ctx) {
    // 递归访问 branchList，得到所有的分支，加入vector
    std::vector<std::pair<std::vector<llvm::Value*>, llvm::BasicBlock*>> branches;
    branches.push_back(std::any_cast<std::pair<std::vector<llvm::Value*>, llvm::BasicBlock*>>(visit(ctx->branch())));

    if (ctx->branchList() != nullptr) {
        auto nextBranches = std::any_cast<std::vector<std::pair<std::vector<llvm::Value*>, llvm::BasicBlock*>>>(
            visit(ctx->branchList()));
        branches.insert(branches.begin(), nextBranches.begin(), nextBranches.end());
    }

    return branches;
}

antlrcpp::Any CodeGenVisitor::visitSubprogramDeclaration(PascalSParser::SubprogramDeclarationContext* ctx) {
    Scope* sub_program_scope = new Scope(scope);
    auto prev_insert_point = builder.saveIP();
    auto prev_return_value = current_return_value;
    auto prev_scope = scope;

    scope = sub_program_scope;

    auto func = std::any_cast<llvm::Function*>(visit(ctx->subprogramHead()));
    scope->put(func->getName().str(), func);
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
        return_type = Type::getVoidTy(context);
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
            param_types.push_back(param.type);

            // check for duplicate parameter names
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

    // add parameters to scope
    int idx = 0;
    for (auto& arg : sub_program->args()) {
        arg.setName(param_lists[idx].name);

        if (param_lists[idx].is_var) {
            // TODO: handle by reference parameters
            // arg.addAttr(Attribute::ByRef);
        }

        scope->put(param_lists[idx].name, &arg);
        idx++;
    }

    current_return_value = return_value;
    builder.SetInsertPoint(sub_program_entry);

    if (ctx->FUNCTION()) {
        return_value = builder.CreateAlloca(return_type, nullptr, sub_program_name + "_return_value");
        current_return_value = return_value;
    }

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
