#include "CodeGenVisitor.h"

CodeGenVisitor::CodeGenVisitor() : builder(context) {
    module = std::make_unique<Module>("PascalS", context);
}

antlrcpp::Any CodeGenVisitor::visitProgram(PascalSParser::ProgramContext *ctx) {
    // Handle the program node
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitAssignment(PascalSParser::AssignmentContext *ctx) {
    // Generate LLVM IR for assignment
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitExpression(PascalSParser::ExpressionContext *ctx) {
    // Generate LLVM IR for expression
    return visitChildren(ctx);
}

// Implement other visit methods as needed
