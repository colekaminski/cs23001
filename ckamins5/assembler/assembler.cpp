#include <iostream>

#include "utilities.hpp"

int main(int argc, char const* argv[]) {
	
	if (argc < 2) {
		std::cout << "No input file found";
		return 0;
	}
	std::ofstream outputFile;
	std::ostream* postfixFile = &std::cout;
	if (argc == 3) {
		outputFile.open(argv[2]);
		postfixFile = &outputFile;
	}
	std::ifstream inputfile(argv[1]);
	String input, token;

	while(!inputfile.eof()){
		input = String();
		inputfile>>token;
		while(token!=";"){
			input += token + " ";
			inputfile >> token;
		}
		input += ";";
		*postfixFile << "infix: " << input << std::endl;
        String postfixExpr = inFixToPostfix(input);
		*postfixFile << "postfix: " << postfixExpr << std::endl << std::endl;
		postfixToAssembly(postfixExpr, postfixFile);
        *postfixFile << std::endl;
	}
}