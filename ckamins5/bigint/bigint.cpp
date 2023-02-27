
//Cole Kaminski
//February 23, 2023
//Computer Science 2
		//Project 1
		//Milestone 3 + bonus
//This file is the CPP for bigint that includes all out of line definitions for bigint class
#include "bigint.hpp"

bigint::bigint() {      //default constructor that sets all values of big-int to 0
	for (int i = 0; i < CAPACITY; ++i) {
		data[i] = 0;
	}
}

bigint::bigint(int num) {       //definition of constructor that initializes big-int to an integer value
	int numLength = 0;
	do {
		int digit = num % 10;           //first is a modulus 10 to see what number the first digit is
		data[numLength] = digit;        //stores the digit as the first element in the data array
		num = num / 10;                 //divide the bigint/number by 10 to eliminate the last numberin order to determine the next digit
		++numLength;                    //adds 1 to the length of our number to determine the number size
	} while (num != 0);
	for (int i = numLength; i < CAPACITY; ++i) {
		data[i] = 0;                    //assigns 0 for every digit that does not have a number
	}
}

bigint::bigint(const char num[]) {      //initializes bigint to a constant array of characters
	int numLength = 0;
	while (num[numLength] != 0) {
		++numLength;
	}
	for (int i = 0; i < numLength; ++i) {
		data[i] = int(num[numLength - (i + 1)]) - int('0');
	}
	for (int i = numLength; i < CAPACITY; ++i) {
		data[i] = 0;
	}
}

void bigint::debugPrint(std::ostream& stream) const {
	for (int i = CAPACITY - 1; i >= 0; --i) {
		stream << data[i] << "|";       //prints the values for a bigint with | in between each number for debugging
	}
}

std::ostream& operator<<(std::ostream& stream, const bigint& output) {  //friend function that accepts a bigint and stream for outputs
	int length = 1;
	for (int i = CAPACITY - 1; i >= 0; --i) {
		if (output.data[i] != 0) {
			length = i + 1;
			break;
		}

	}
	int lineLength = 0;
	for (int i = length - 1; i >= 0; --i) {
		stream << output.data[i];
		++lineLength;
		if (lineLength == 80) {         //starts a new line if bigint is greater than 80 characters
			stream << std::endl;
			lineLength = 0;
		}
	}
	return stream;
}

bool operator==(const bigint& big1, const bigint& big2) {       //overloaded operator to compare if two bigints are equal
	for (int i = 0; i < CAPACITY; ++i) {
		if (big1.data[i] != big2.data[i])
			return false;
	}
	return true;
}

std::istream& operator>>(std::istream& stream, bigint& output) {
	char digit;
	char input[CAPACITY];
	int index = 0;
	do {
		stream >> digit;
		if (digit != ';') {
			input[index] = digit;
			++index;
		}
	} while (digit != ';');
	for (int i = index - 1; i >= 0; --i) {
		output.data[index - 1 - i] = int(input[i]) - int('0');
	}

	for (int i = index; i < CAPACITY; ++i) {
		output.data[i] = 0;
	}

	return stream;

}

bigint operator+(const bigint& lhs, const bigint& rhs) {
	bigint sum;
	int carryValue = 0;
	for (int i = 0; i < CAPACITY; ++i) {
		int digitSum = lhs.data[i] + rhs.data[i] + carryValue;
		sum.data[i] = digitSum % 10;
		carryValue = digitSum / 10;
	}
	return sum;
}

int bigint::operator[](const int index) const {
	return data[index];
}

//Milestone 3 function definitions below

bigint bigint::timesDigit(int timesNum) const {
	bigint product;
	int carryValue = 0;
	for (int i = 0; i < CAPACITY; ++i) {
		int digitProduct = data[i] * timesNum + carryValue;
		product.data[i] = digitProduct % 10;
		carryValue = digitProduct / 10;
	}
	return product;
}

bigint bigint::times10(int numZeros) const {
	bigint newBigint;
	for (int i = (CAPACITY - 1 - numZeros); i >= 0; --i) {
		newBigint.data[i + numZeros] = data[i];

	}
	return newBigint;
}

int findTrailZeros(bigint b) {
	int trailZeroSum = 0;
	int i = 0;
	do {
		if (b.data[i] == 0) {
			++trailZeroSum;
			++i;
		}

	} while (b.data[i] == 0);
	return trailZeroSum;
}

bigint operator*(const bigint& lhs, const bigint& rhs) {
	bigint product;
	for (int i = 0; i < CAPACITY - 1; ++i) {
		bigint temp = lhs.timesDigit(rhs.data[i]);
		product = product + temp.times10(i);
	}
	return product;
}


bigint nfact(int num) {
	if (num == 1)
		return 1;
	else
		return num * nfact(num - 1);
}