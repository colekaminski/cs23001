//  String class test program
//
//  Name:  XXX
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <fstream>
#include <iostream>

//===========================================================================
int main()
{
        {
                //------------------------------------------------------
                // SETUP FIXTURE
                String  left;
                std::ifstream in;
                in.open("test_input.txt");
                in >> left;
                assert(left == "hello");


        }

        std::cout << "input function done testing\n";


}