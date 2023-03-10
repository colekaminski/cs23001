//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: subscript function
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
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == 'h');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "$ImakeMoney$";
        // TEST
        String  str(X);

        // VERIFY
        int result = str[11];
        assert((str == X));
        assert(result == '$');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "_._._.^&%$#&*@(!)(.)(.)-|-.|.8===B$#%@*HELLOBIRJKLDJHGFJHDBFJKSHBDJKBHDJKjfbsjkdhbfjk51651321/*/*/*/46543512165326546513513465163513513131685135413216321651651351354135165165135135513543513513135131312dhfvb7wjsbkgjsbdkbbgbggbgbgs";
        // TEST
        String  str(X);

        // VERIFY
        int result = str[1];
        assert((str == X));
        assert(result == '.');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = " ";
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == ' ');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "shAringisCaring.123.89'<><<>>stringmyString";
        // TEST
        String  str(X);

        // VERIFY
        int result = str[42];
        assert((str == X));
        assert(result == 'g');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "     6!   ";
        // TEST
        String  str(X);

        // VERIFY
        int result = str[6];
        assert((str == X));
        assert(result == '!');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'a';
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'A';
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '$';
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == '$');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '7';
        // TEST
        String  str(X);

        // VERIFY
        int result = str[0];
        assert((str == X));
        assert(result == '7');
    }



    std::cout << "Done testing subscript functions." << std::endl;
    return 0;
}