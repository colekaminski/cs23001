// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main() {
    {

        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 0);
        assert(result == 1);
    }
    
    {
       //------------------------------------------------------
       // Setup fixture
       bigint left(1);
       bigint right(1);
       bigint result;

       // Test
       result = left + right;

       // Verify
       assert(left == 1);
       assert(right == 1);
       assert(result == 2);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("0");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }
 
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("1");
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 1);
        assert(right == 0);
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("010");
        bigint right(010);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == 10);
        assert(right == 10);
        assert(result == 20);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == "2000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        assert(right == 0);
        assert(result == "2000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("20000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        bigint right("20000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == "20000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        assert(right == "20000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        assert(result == "40000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }
    /*
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint left();
        bigint right();
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left == );
        assert(right == );
        assert(result == );
    }




    */

        std::cout << "Done with testing addition." << std::endl;
        return 0;
    }

