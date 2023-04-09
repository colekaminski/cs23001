#include <iostream>

#include "utilities.hpp"

int main(int argc, char const* argv[]) {
	
	if (argc < 2) {
		std::cout << "No input file found";
		return 0;
	}
	std::ostream* postfixFile = &std::cout;
	if (argc == 3) {
		std::ofstream outputFile(argv[2]);
		postfixFile = &outputFile;
	}
	std::ifstream inputfile(argv[1]);
	
	inFixToPostfix(postfixFile, inputfile);
	

}