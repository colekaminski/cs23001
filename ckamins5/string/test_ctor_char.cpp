//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: Char Constructor
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
        const char X = '\0';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'a';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'A';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '$';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = ' ';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '7';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '<';
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    std::cout << "Done testing const Char constructor." << std::endl;
    return 0;
}