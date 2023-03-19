//  String class test program
//
//  Tests: Split 
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

        // TEST
        String  str("abc ef gh");
        std::vector<String> V = str.split(' ');

        // VERIFY
        assert(V[0] == "abc");
        assert(V[1] == "ef");
        assert(V[2] == "gh");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("-a--b-");
        std::vector<String> V = str.split('-');

        // VERIFY
        assert(V[0] == "");
        assert(V[1] == "a");
        assert(V[2] == "");
        assert(V[3] == "b");
        assert(V[4] == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("---------");
        std::vector<String> V = str.split('-');

        // VERIFY
        assert(V[0] == "");
        assert(V.size()==10);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghi");
        std::vector<String> V = str.split('-');

        // VERIFY
        assert(V[0] == "abcdefghi");
        assert(V.size() == 1);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("I ran into a wall and hit my head");
        std::vector<String> V = str.split(' ');

        // VERIFY
        assert(V[0] == "I");
        assert(V[1] == "ran");
        assert(V[2] == "into");
        assert(V[3] == "a");
        assert(V[4] == "wall");
        assert(V[5] == "and");
        assert(V[6] == "hit");
        assert(V[7] == "my");
        assert(V[8] == "head");
    
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("3.1415926535897932384626433832795028841");
        std::vector<String> V = str.split('1');

        // VERIFY
        assert(V[0] == "3.");
        assert(V[1] == "4");
        assert(V[2] == "592653589793238462643383279502884");
        assert(V[3] == "");
    }




    std::cout << "Done testing SPLIT." << std::endl;
    return 0;
}

