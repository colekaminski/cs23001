//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: Default constructor
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
        {
                //------------------------------------------------------
                // SETUP FIXTURE
                String  left;

                assert((left == '\0'));
                assert(left.length() == 0);



        }

std::cout<< "Default constructor done testing\n";


}