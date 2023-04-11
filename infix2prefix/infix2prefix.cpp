#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <fstream>
#include <iostream>

void inFixToPrefix(std::ostream* outputfile, std::ifstream& inputfile) { //this is function from infixtopostfix
	String token;
	String output;
	stack<String> tokenz;
	while (!inputfile.eof()) {
		inputfile >> token;
		if (token == ";") {
			output += tokenz.pop();
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

			tokenz.push(oper + left + right);
			//output += left + right + oper;
		}
		else if (token != "(") {
			tokenz.push(token);
		}
	
	}

	//equation:	 ( ( ( ( 2 + 3 ) + ( ( 4 * 6 ) * 6 ) ) – 4 ) + 7 )
	//prefix: 	 + – + + 2 3 * * 4 6 6 4 7
	//postfix:	 2 3 + 4 6 * 6 * + 4 – 7 +
}

int main(){
	std::ifstream input("data3-1.txt");

inFixToPrefix(&std::cout, input);

}