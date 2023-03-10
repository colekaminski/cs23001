
//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: findchar function
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main(){

    {
        // SETUP FIXTURE
        const char X[] = "helloWorld";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(0,'h');
        assert((result == 0));
    }

    {
        // SETUP FIXTURE
        const char X[] = "1234 56789";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(4,' ');
        assert((result == 4));
    }

    {
        // SETUP FIXTURE
        const char X[] = "!@#$%^&**()-_+";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(13, 'V');
        assert((result == -1));
    }

    {
        // SETUP FIXTURE
        const char X[] = "abdabcb";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(2, 'b');
        assert((result == 4));
    }

    {
        // SETUP FIXTURE
        const char X[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO1";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(0, '1');
        assert((result == 254));
    }

    {
        // SETUP FIXTURE
        const char X[] = "...........++++.++-/+.";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(13, '.');
        assert((result == 15));
    }

    {
        // SETUP FIXTURE
        const char X[] = "abdabcb ";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(2, ' ');
        assert((result == 7));
    }

    {
        // SETUP FIXTURE
        const char X[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO1";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findch(2, 'O');
        assert((result == 2));
    }


    std::cout << "Done testing findchar functions." << std::endl;
    return 0;
}
