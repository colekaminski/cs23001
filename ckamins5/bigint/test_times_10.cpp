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
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("0");

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == "0");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("005");

        // Test 
        bi = bi.times10(10);

        // Verify
        assert(bi == "50000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("10005");

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 10005);
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(50);

        // Test 
        bi = bi.times10(198);

        // Verify
        assert(bi == "50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("5000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
                    //199 digit number
        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == "50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("5000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");
                    //100 digit number
        // Test 
        bi = bi.times10(100);

        // Verify
        assert(bi == "50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123);
        bigint bi2("123");
        bigint total = bi + bi2;

        // Test 
        total = total.times10(0);

        // Verify
        assert(bi == "123");
        assert(bi2 == "123");
        assert(total == "246");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123);
        bigint bi2("123");
        bigint total = bi + bi2;

        // Test 
        total = total.times10(27);

        // Verify
        assert(bi == "123");
        assert(bi2 == "123");
        assert(total == "246000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(123);
        bigint bi2("0");
        bigint total = bi + bi2;

        // Test 
        total = total.times10(3);

        // Verify
        assert(bi == "123");
        assert(bi2 == 0);
        assert(total == "123000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(5);
        bigint bi2("501");
        bigint total = bi + bi2;

        // Test 
        total = total.times10(3);

        // Verify
        assert(bi == "5");
        assert(bi2 == "501");
        assert(total == "506000");
    }

   {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(10);
        bigint bi2("011");
        bigint total = bi * bi2;

        // Test 
        total = total.times10(5);

        // Verify
        assert(bi == "10");
        assert(bi2 == "11");
        assert(total == "11000000");
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);
        bigint bi2("0123");
        bigint total = bi * bi2;

        // Test 
        total = total.times10(5);

        // Verify
        assert(bi == "0");
        assert(bi2 == "123");
        assert(total == "0");
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

