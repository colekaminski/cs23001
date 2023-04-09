#include "utilities.hpp"

void inFixToPostfix(std::ostream* outputfile, std::ifstream& inputfile) {
	//int i = 0;
	String token;
	String output;
	stack<String> tokenz;
	while (!inputfile.eof()) {
		inputfile >> token;
		if (token == ";") {
			*outputfile << output << std::endl;
			output = String();
		}
		else if (token == ")") {
			String oper, left, right;

			if (!tokenz.empty())
				right = tokenz.pop();

			if (!tokenz.empty())
				oper = tokenz.pop();

			if (!tokenz.empty())
				left = tokenz.pop();

			output += left + right + oper;
		}
		else if (token != "(") {
			tokenz.push(token);
		}
	}

}