#include "CodeGenVisitor.h"

CodeGenVisitor::CodeGenVisitor()
    : builder(context) {
}

antlrcpp::Any CodeGenVisitor::visitProgramHead(PascalSParser::ProgramHeadContext* ctx) {
    // Create a new LLVM module
    auto program_id_node = ctx->ID();
    std::string program_name = program_id_node->getText();
    module = std::make_unique<Module>(program_name, context);
    return visitChildren(ctx);
}

antlrcpp::Any CodeGenVisitor::visitExpression(PascalSParser::ExpressionContext* ctx) {
    // Generate LLVM IR for expression
    return visitChildren(ctx);
}

// Implement other visit methods as needed
