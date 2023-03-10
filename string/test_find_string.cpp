//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: findstring function
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
        int result = str.findstr(0,"hello");
        assert((result == 0));
    }

    {
        // SETUP FIXTURE
        const char X[] = "1234 56789";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findstr(4," ");
        assert((result == 4));
    }

    {
        // SETUP FIXTURE
        const char X[] = "!@#$%^&**()-_+";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findstr(13, "hi");
        assert((result == -1));
    }

    {
        // SETUP FIXTURE
        const char X[] = "abdabcb";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findstr(0, "abc");
        assert((result == 3));
    }

    {
        // SETUP FIXTURE
        const char X[] = "00005";
        // TEST                                                                                                                                                                                                                                                                                                                         
        String  str(X);

        // VERIFY
        int result = str.findstr(0, "05");
        assert((result == 3));
    }

    {
        // SETUP FIXTURE
        const char X[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOO1";
        // TEST                                                                                                                                                                                                                                                                                                                         
        String  str(X);

        // VERIFY
        int result = str.findstr(0, "OOOOOOOO1");
        assert((result == 20));
    }

    {
        // SETUP FIXTURE
        const char X[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO1";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findstr(0,"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO1");
        assert((result == 2));
    }
    
    {
        // SETUP FIXTURE
        const char X[] = "peepeepoopoo";
        // TEST
        String  str(X);

        // VERIFY
        int result = str.findstr(1, "p");
        assert((result == 3));
    }

    {
        // SETUP FIXTURE
        const char X[] = "00005";
        // TEST                                                                                                                                                                                                                                                                                                                         
        String  str(X);

        // VERIFY
        int result = str.findstr(6, "0");
        assert((result == -1));
    }



    std::cout << "Done testing findstring functions." << std::endl;
    return 0;
}