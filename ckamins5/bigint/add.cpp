// File: main.cpp
//FEB 13, 2023
// CS 23001 Project 1 bigint
//COLE KAMINSKI
// Basics for openning a file for milestone 2
//

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-1.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }
    bigint lhs, rhs;
    char delim;
    while (!in.eof()) {
        in>>lhs;
        std::cout<< "Value of first bigint: " << lhs<<std::endl<<std::endl;
        in>>delim;
        in>>rhs;
        std::cout<< "Value of second bigint: " << rhs<<std::endl<<std::endl;
        in>>delim;
        std::cout<< "The sum of both bigint's are: "<< (lhs+rhs) << std::endl << "______________________________"<<std::endl;
    }
    in.close();
    return 0;
}