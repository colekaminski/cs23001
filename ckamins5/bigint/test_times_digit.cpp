// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }
    
    {
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);
    }

    {
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 0);
    }

    {
        // Setup fixture
        bigint bi("0");

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "0");
    }

    {
        // Setup fixture
        bigint bi(25);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 50);
    }

    {
        // Setup fixture
        bigint bi("25");

        // Test 
        bi = bi.timesDigit(8);

        // Verify
        assert(bi == "200");
    }

    {
        // Setup fixture
        bigint bi("00010");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "90");
    }

    {
        // Setup fixture
        bigint bi("10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
                    //200 digit number
        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "90000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        // Setup fixture
        bigint bi("10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000009");

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);
    }

    {
        // Setup fixture
        bigint bi(123);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "1107" );
    }

    {
        // Setup fixture
        bigint bi("123");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "1107");
    }

    {
        // Setup fixture
        bigint bi(10);
        bigint bi2("010");
        bigint total = bi+bi2;

        // Test 
        total = total.timesDigit(9);

        // Verify
        assert(total == "180");
    }

    {
        // Setup fixture
        bigint bi("007");
        bigint bi2(4);
        bigint total = bi+bi2;

        // Test 
        total = total.timesDigit(0);

        // Verify
        assert(total == 0);
    }

    {
        // Setup fixture
        bigint bi("007");
        bigint bi2(4);
        bigint total = bi * bi2;

        // Test 
        total = total.timesDigit(0);

        // Verify
        assert(total == 0);
    }

    {
        // Setup fixture
        bigint bi("007");
        bigint bi2(4);
        bigint total = bi*bi2;

        // Test 
        total = total.timesDigit(9);

        // Verify
        assert(total == "252");
    }
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}
