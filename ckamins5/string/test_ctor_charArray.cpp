//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: CharArray Constructor
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
                String  left("a");
                String  right("abc");
                String  BIG("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

                assert((left != right));
                assert(left=="a");
                assert(right=="abc");
                assert(BIG=="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

        }
        {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "helloWorld";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "$ImakeMoney$";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "_._._.^&%$#&*@(!)(.)(.)-|-.|.8===B$#%@*HELLOBIRJKLDJHGFJHDBFJKSHBDJKBHDJKjfbsjkdhbfjk51651321/*/*/*/46543512165326546513513465163513513131685135413216321651651351354135165165135135513543513513135131312dhfvb7wjsbkgjsbdkbbgbggbgbgs";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = " ";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "shAringisCaring.123.89'<><<>>stringmyString";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        const char X[] = "     6!   ";
        // TEST
        String  str(X);

        // VERIFY
        assert(str == X);
    }



        std::cout << "character Array constructor done testing\n";


}