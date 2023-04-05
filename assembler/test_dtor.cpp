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
        stack<int>  *x = new stack<int>;
        delete x;

        // VERIFY
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  *x = new stack<String>;
        x->push("Hello");
        delete x;

        // VERIFY
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  *x = new stack<String>;
        x->push("Hello");
        x->push("Hello2");
        delete x;

        // VERIFY
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  *x = new stack<String>;
        x->push("Hello");
        x->push("Hello2");
        x->push("Hello2");
        x->push("Hello2");
        x->push("Hello2");
        x->push("Hello2");
        x->push("Hello2");
        x->push("Hello2");
        delete x;

        // VERIFY
        
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Destructor." << std::endl;
    return 0;
}

