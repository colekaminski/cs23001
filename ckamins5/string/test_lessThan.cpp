//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: less than function
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
    {
        // SETUP FIXTURE
        const char X[] = " ";
        const char Y[] = "helloWorld";
        // TEST
        String  str1(X);
        String  str2(Y);
        bool result = str1 < str2;

        // VERIFY
        assert(result == true);
    }

    {
        // SETUP FIXTURE
        const char X[] = "7Cap";
        const char Y[] = " ...666";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == false);
    }

    {
        // SETUP FIXTURE
        const char X[] = "+";
        const char Y[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == true );
        
    }

    {
        // SETUP FIXTURE
        const char X[] = "5";
        const char Y[] = "5";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == false);
    }

    {
        // SETUP FIXTURE
        const char X[] = "a";
        const char Y[] = "A";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == false);
    }

    {
        // SETUP FIXTURE
        const char X[] = "";
        const char Y[] = " ";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == true);
    }

    {
        // SETUP FIXTURE
        const char X[] = "abcdefgz";
        const char Y[] = "abcdefgy";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == false);
    }

    {
        // SETUP FIXTURE
        const char X[] = "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999991";
        const char Y[] = "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999992";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == true);
    }

    {
        // SETUP FIXTURE
        const char X[] = "qwert";
        const char Y[] = "qwerty";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        bool result = str1 < str2;
        assert(result == true);
    }

    std::cout << "Done testing less than functions." << std::endl;
    return 0;
}