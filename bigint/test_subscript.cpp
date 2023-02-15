//CS23001 
//BIGINT SUBSCRIPT TEST CASES 
//FEBRUARY 13, 2023 
//COLE KAMINSKI


#include <iostream>
# include <cassert> 
#include "bigint.hpp"
//===========================================================================
int main() {
	 {
		//Setup
		bigint bi(4);
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 4); assert(digit == 4);
	}
	
	{
		//Setup
		bigint bi(0);
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 0); assert(digit == 0);
	}
	
	{
		//Setup
		bigint bi(102);
		// Test
		int digit = bi[2];
		// Verify
		assert(bi == 102);
		assert(digit == 1);
	}
	
	{
		//Setup
		bigint bi("0");
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 0);
		assert(digit == 0);
	}
	
	{
		//Setup
		bigint bi("0");
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == "0"); assert(digit == 0);
	}
	{
		//Setup
		bigint bi("103");
		// Test
		int digit = bi[2];
		// Verify
		assert(bi == "103");
		assert(digit == 1);
	}
	{
		//Setup
		bigint bi(123456789);
		// Test
		int digit = bi[8];
		// Verify
		assert(bi == 123456789); assert(digit == 1);
	}
	{
		//Setup
		bigint 
		bi("5000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 
		"5000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"); 
		assert(digit == 1);
	}
	{
		//Setup
		bigint 
		bi("500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000179");
		// Test
		int digit = bi[200];
		// Verify
		assert(bi == 
		"500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000179"); 
		assert(digit == 5);
	}
	{
		//Setup
		bigint bi("0123");
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 123); assert(digit == 3);
	}

	{
		//Setup
		bigint bi("0123");
		// Test
		int digit = bi[3];
		// Verify
		assert(bi == 123);
		assert(digit == 0);
	}

	{
		//Setup
		bigint bi("0005");
		// Test
		int digit = bi[0];
		// Verify
		assert(bi == 5); assert(digit == 5);
	}
	{
		//Setup
		bigint bi1("0005");
		 bigint bi2("0005");
		  bigint bi3(bi1+bi2);
		// Test
		int digit1 = bi1[0];
		 int digit2 = bi2[0];
		  int digit3 = bi3[1];
		// Verify
		assert(bi1 == 5);
		 assert(bi2 == 5);
		  assert(bi3 == 10);
		   assert(digit1 == 5);
		    assert(digit2 == 5);
			 assert(digit3 == 1);
	}
	{
		//Setup
		bigint bi1("0");
		bigint bi2(0);
		bigint total = bi1 + bi2;
		// Test
		int digit1 = bi1[0];
		int digit2 = bi2[0];
		int digit3 = total[0];
		// Verify
		assert(bi1 == 0);
		assert(bi2 == 0);
		assert(total == 0);
		assert(digit1 == 0);
		assert(digit2 == 0);
		assert(digit3 == 0);
	}
	{
		//Setup
		bigint bi1("100005");
		bigint bi2("723456");
		bigint total = bi1 + bi2;
		// Test
		int digit1 = bi1[5];
		int digit2 = bi2[5];
		int digit3 = total[4];
		// Verify
		assert(bi1 == 100005);
		assert(bi2 == 723456);
		assert(total == 823461);
		assert(digit1 == 1);
		assert(digit2 == 7);
		assert(digit3 == 2);
	}
	//Added a few test cases utilizing multiplication. Don't have the function added for it yet though
	/*
		{
			//Setup
			bigint bi1("0005"); bigint bi2("0005"); bigint total = bi1 * bi2;
			// Test
			int digit1 = bi1[0]; int digit2 = bi2[0]; int digit3 = total[0];
			// Verify
			assert(bi1 == 5); assert(bi2 == 5); assert(total == 25); assert(digit1 == 5); assert(digit2 == 5); assert(digit3 == 2);
		}
		{
			//Setup
			bigint bi1(15); bigint bi2("4"); bigint total = bi1 * bi2;
			// Test
			int digit1 = bi1[1]; int digit2 = bi2[0]; int digit3 = total[0];
			// Verify
			assert(bi1 == 15); assert(bi2 == 4); assert(total == 60); assert(digit1 == 5); assert(digit2 == 4); assert(digit3 == 6);
		}
		{
			//Setup
			bigint bi1("0"); bigint bi2(0); bigint total = bi1 * bi2;
			// Test
			int digit1 = bi1[0]; int digit2 = bi2[0]; int digit3 = total[0];
			// Verify
			assert(bi1 == 0);
	assert(bi2 == 0);
	assert(total == 0);
	assert(digit1 == 0);
	assert(digit2 == 0);
	assert(digit3 == 0);
		}
	*/


	std::cout << "Done testing subscript." << std::endl; return 0;
}
