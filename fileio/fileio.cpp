//CS23001
//LAB 4
//COLE KAMINSKI
//FEBRUARY 8, 2023

#include <iostream>
#include <fstream>


void readToSpace();
void addTwoInts();

int main() {
	readToSpace();
    addTwoInts();
	return 0;
}

void readToSpace() {
	std::ifstream file("fileio-text.txt");
	if (!file.is_open()) {
		std::cout << "Unable to open file\n";
		return;
	}
	char fileChar;
	while (!file.eof()) {
		while (file.get(fileChar)) {
			if (fileChar == ' ') {
				std::cout << std::endl;
			}
			else {
				std::cout << fileChar;
			}
		}
		std::cout << std::endl;
	}
	file.close();
}

void addTwoInts() {
	std::ifstream in("fileio-data-1.txt");
	if (!in.is_open()) {
		std::cout << "Unable to open file\n";
		return;
	}
	int lhs, rhs;
	char delim;
    while (!in.eof()) {
        in>>lhs;
        in>>delim;
        in>>rhs;
        in>>delim;
        std::cout<< (lhs+rhs) << std::endl;
    }
in.close();
return 0;
}
