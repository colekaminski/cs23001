//  String class test program
//
//  Name:  Cole Kaminski
//  Tests: substring function
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
        String result = str.substr(0,9);
        assert((result==X));
    }

    {
        // SETUP FIXTURE
        const char X[]=" ";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(0,1);
        assert((result==X));
    }

    {
        // SETUP FIXTURE
        const char X[]="---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(0,255);
        assert((result==X));
    }

    {
        // SETUP FIXTURE
        const char X[]="-3-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(1,2);
        assert((result=="3-"));
    }

    {
        // SETUP FIXTURE
        const char X[]="--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------70";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(254,255);
        assert((result=="70"));
        assert(str[256]=='\0');
    }

    {
        // SETUP FIXTURE
        const char X[] = "1234 56789";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(4,4);
        assert((result == " "));
    }

    {
        // SETUP FIXTURE
        const char X[] = "!@#$%^&**()-_+";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(13, 13);
        assert((result == "+"));
    }

    {
        // SETUP FIXTURE
        const char X[] = "helloWorld";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(2, 1);
        assert((result == ""));
    }

    {
        // SETUP FIXTURE
        const char X[] = "mOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(1, 255);
        assert((result == "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
    }

    {
        // SETUP FIXTURE
        const char X[] = " \" ";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(1, 1);
        assert((result == "\""));
    }

    {
        // SETUP FIXTURE
        const char X[] = "";
        // TEST
        String  str(X);

        // VERIFY
        String result = str.substr(0, 0);
        assert((result == '\0'));
    }

    std::cout << "Done testing substring functions." << std::endl;
    return 0;
}