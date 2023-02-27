// File: main.cpp
//
// CS 23001 Project 1 bigint
//
// Milestone 3 multiply.cpp file
//

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-2.txt");      // Open a file
    if(!in) {                    // Make sure file opened correctly
        std::cerr << "File not found: data1-2.txt" << std::endl;
        exit(1);
    }
    bigint lhs, rhs;
   // char delim;
    while (!in.eof()) {
        in>>lhs;
        std::cout<< "Value of first bigint: " << lhs<<std::endl<<std::endl;
        //in>>delim;
        in>>rhs;
        std::cout<< "Value of second bigint: " << rhs<<std::endl<<std::endl;
        //in>>delim;
        std::cout<< "The product of bigint's are: "<< (lhs*rhs) << std::endl << "______________________________"<<std::endl;
    }
    std::cout<<"done testing read-in multiply file"<<std::endl;
    in.close();
    return 0;
}