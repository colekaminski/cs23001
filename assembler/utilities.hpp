#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include "../string/string.hpp"
#include "stack.hpp"
#include <fstream>

//void inFixToPostfix(std::ostream*, std::ifstream&);
String inFixToPostfix(String input);
void postfixToAssembly(String input, std::ostream* outputFile);
void evaluate(String left, String operation, String right, std::ostream* outputFile);
String toString(int);

#endif //UTILITIES_HPP