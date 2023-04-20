#include "utilities.hpp"

String inFixToPostfix(String input) {
	String token;
	stack<String> tokenz;
	std::vector<String> splitInput = input.split(' ');
	//inputfile >> token;
	int i = 0;
	token = splitInput[i];
	while (token != ";") {
		i++;
		if (token == ")") {
			String oper, left, right;
			if (!tokenz.empty())
				right = tokenz.pop();

			if (!tokenz.empty())
				oper = tokenz.pop();

			if (!tokenz.empty())
				left = tokenz.pop();

			tokenz.push(left + " " + right + " " + oper);
			//output += left + right + oper;
		}
		else if (token != "(") {
			tokenz.push(token);
		}
		//inputfile >> token;
		token = splitInput[i];
	}
	return tokenz.pop();
	//*outputfile << "infix: " << infix << std::endl;
	//*outputfile << "postfix: " << tokenz.pop() << std::endl;

}

void postfixToAssembly(String input, std::ostream* outputFile){
	String token;
	stack<String> tokenz;
	std::vector<String> splitInput = input.split(' ');
	//inputfile >> token;
	int i = 0, n = 1, sov = splitInput.size();
	token = splitInput[i];
	while (i < sov) {
		i++;
		if(token != '+' && token != '-' && token != '*' && token != '/'){
			tokenz.push(token);
		}else{
			String left, right;
			right = tokenz.pop();
			left = tokenz.pop();
			evaluate(left, token, right, outputFile);
			*outputFile << n << std::endl;
			tokenz.push("TMP" + toString(n++));
		}
		token = splitInput[i];
	}
}

void evaluate(String left, String operation, String right, std::ostream* outputFile){
	*outputFile << "   LD     " << left << std::endl;
	if(operation == '+'){
		*outputFile << "   AD     " << right << std::endl;
	}else if(operation == '-'){
		*outputFile << "   SB     " << right << std::endl;
	}else if(operation == '*'){
		*outputFile << "   MU     " << right << std::endl;
	}else if(operation == '/'){
		*outputFile << "   DV     " << right << std::endl;
	}
	*outputFile << "   ST     TMP";

}

String toString(int x){
	String output;
	while(x > 0){					//4286
		int remainder = x % 10;		//6
		x = x / 10;					
		output = (remainder + 48) + output;
	}
	return output;
}