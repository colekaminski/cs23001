//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: concat function
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
    {
        // SETUP FIXTURE
        const char X[] = "helloWorld";
        const char Y[] = "helloWorld";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        String result = str1 + str2;
        assert(result == "helloWorldhelloWorld");
        assert(result.length()== (str1.length()+str2.length()));
    }

    {
        // SETUP FIXTURE
        const char X[] = " ";
        const char Y[] = "helloWorld";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        String result = str1 + str2;
        assert(result == " helloWorld");
        assert(result.length() == (str1.length() + str2.length()));
    }

    {
        // SETUP FIXTURE
        const char X[] = "7Cap";
        const char Y[] = " ...666";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        String result = str1 + str2;
        assert(result == "7Cap ...666");
        assert(result.length() == (str1.length() + str2.length()));
    }

    {
        // SETUP FIXTURE
        const char X[] = "+";
        const char Y[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
        // TEST
        String  str1(X);
        String  str2(Y);

        // VERIFY
        String result = str1 + str2;
        assert(result == "+mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
        assert(result.length() == (str1.length() + str2.length()));
    }

    {
        // SETUP FIXTURE
        const char X[] = "7Cap";
     
        // TEST
        String  str1(X);
        String result;

        // VERIFY
        result += str1;
        assert(result == "7Cap");
        assert(result.length() == str1.length());
    }

    {
        // SETUP FIXTURE
        const char X[] = " _/*";
        const char Y[] = "timmy90";

        // TEST
        String  str1(X);
        String  str2(Y);
        String result(Y);

        // VERIFY
        result += str1;
        assert(result == "timmy90 _/*");
        assert(result.length() == (str1.length() + str2.length()));
    }



    std::cout << "Done testing concat functions." << std::endl;
    return 0;
}