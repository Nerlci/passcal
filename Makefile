C := gcc
CC := g++
ANTLR_INCLUDE := -I/usr/local/include/antlr4-runtime
ANTLR_LIB := -L/usr/local/lib -lantlr4-runtime
LLVM_VERSION := 14
LLVM_INCLUDE := -I/usr/include/llvm-$(LLVM_VERSION) -I/usr/include/llvm-c-$(LLVM_VERSION)
LLVM_CONFIG := /usr/lib/llvm-$(LLVM_VERSION)/bin/llvm-config
LLVM_LIBS := $(shell $(LLVM_CONFIG) --libs)
LLVM_CXXFLAGS := -std=c++17 -funwind-tables -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS

# Configuration file location
CONFIG_FILE := build/cfg/buildtype

# Default mode
ifeq ("$(wildcard $(CONFIG_FILE))","")
	MODE := release-dynamic
else
	MODE := $(shell cat $(CONFIG_FILE))
endif

# Compiler flags for different modes
DEBUG_CXXFLAGS := -fsanitize=address -fsanitize=undefined -fno-omit-frame-pointer -g -Og
# DEBUG_CXXFLAGS := -g -Og
RELEASE_DYNAMIC_CXXFLAGS := -O2
RELEASE_STATIC_CXXFLAGS := -O2 -static

# Choose the appropriate flags based on the selected mode
ifeq ($(MODE), debug)
	CXXFLAGS := $(LLVM_CXXFLAGS) $(DEBUG_CXXFLAGS)
else ifeq ($(MODE), release-dynamic)
	CXXFLAGS := $(LLVM_CXXFLAGS) $(RELEASE_DYNAMIC_CXXFLAGS)
else ifeq ($(MODE), release-static)
	CXXFLAGS := $(LLVM_CXXFLAGS) $(RELEASE_STATIC_CXXFLAGS)
else
	$(error Invalid mode: $(MODE). Use 'debug', 'release-dynamic', or 'release-static.')
endif

LINK := $(ANTLR_LIB) $(LLVM_LIBS)
SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(SOURCES:src/%.cpp=build/obj/%.o)

# Main target
main: build/obj $(OBJECTS)
	$(CC) $(OBJECTS) -o passcal $(LINK) $(CXXFLAGS)

# Ensure the obj and cfg directories exist
build/obj:
	mkdir -p build/obj build/cfg

build/obj/%.o: src/%.cpp | build/obj
	$(CC) $(ANTLR_INCLUDE) $(LLVM_INCLUDE) $(CXXFLAGS) -c $< -o $@

# Target to generate parser from grammar
antlrs: src/PascalS.g4
	antlr4 -Dlanguage=Cpp -visitor -no-listener src/PascalS.g4

# Clean target
clean:
	rm -f build/obj/*.o passcal

config:
	@echo "Current mode: $(MODE)"
	@echo "To change mode, run: make set MODE=<mode>"
	@echo "Available modes: debug, release-dynamic, release-static"

set:
	@echo "$(MODE)" > $(CONFIG_FILE)
	@echo "Build mode set to $(MODE) and saved to $(CONFIG_FILE)"

.PHONY: clean config set
