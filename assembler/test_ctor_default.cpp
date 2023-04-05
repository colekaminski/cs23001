//  Stack class test program
//
//  Tests: XXX 
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty()==true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(x.empty()==true);
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Default Constructor." << std::endl;
    return 0;
}

