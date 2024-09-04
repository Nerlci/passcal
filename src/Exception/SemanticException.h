#ifndef SEMANTICEXCEPTION_H
#define SEMANTICEXCEPTION_H

#include <exception>
#include <string>

class SemanticException : public std::exception {
public:
    SemanticException(const std::string& message)
        : message(message) { }

    SemanticException(const std::string& filename, int line, int column, const std::string& message)
        : message(filename + ":" + std::to_string(line) + ":" + std::to_string(column) + ": error: " + message) { }

    const char* what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

#endif // SEMANTICEXCEPTION_H