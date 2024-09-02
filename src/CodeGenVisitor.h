#ifndef CODEGENVISITOR_H
#define CODEGENVISITOR_H

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>
#include "PascalSBaseVisitor.h"

using namespace llvm;

class CodeGenVisitor : public PascalSBaseVisitor {
public:
    LLVMContext context;
    IRBuilder<> builder;
    std::unique_ptr<Module> module;

    CodeGenVisitor();

    antlrcpp::Any visitProgram(PascalSParser::ProgramContext *ctx) override;
    antlrcpp::Any visitAssignment(PascalSParser::AssignmentContext *ctx) override;
    antlrcpp::Any visitExpression(PascalSParser::ExpressionContext *ctx) override;
    
    // Declare other visit methods as needed
};

#endif // CODEGENVISITOR_H
