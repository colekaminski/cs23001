//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: Length capacity functions
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
        String  left;
        // TEST
        int result = left.length();
        assert((left == X));
        assert(result == 0);
        assert(left.capacity() == result);


    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "helloWorld";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "$ImakeMoney$";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 12);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "_._._.^&%$#&*@(!)(.)(.)-|-.|.8===B$#%@*HELLOBIRJKLDJHGFJHDBFJKSHBDJKBHDJKjfbsjkdhbfjk51651321/*/*/*/46543512165326546513513465163513513131685135413216321651651351354135165165135135513543513513135131312dhfvb7wjsbkgjsbdkbbgbggbgbgs";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 229);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = " ";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "shAringisCaring.123.89'<><<>>stringmyString";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 43);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "     6!   ";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'a';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = 'A';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '$';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = ' ';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '7';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X = '<';
        // TEST
        String  str(X);

        // VERIFY
        int result = str.length();
        assert((str == X));
        assert(result == 1);
    }


    std::cout << "Done testing length and capacity functions." << std::endl;
    return 0;
}