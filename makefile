COMPILER = c++ #GNU C++ COMPILER
FILE = example/example.cpp
OUTPUT = build/example
CPP_STD = c++11

all:
		$(COMPILER) $(FILE) -o $(OUTPUT) -std=$(CPP_STD)