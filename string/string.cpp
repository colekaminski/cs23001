//Cole Kaminski
//14-March-2023
//Milestone2Project2
//CS23001 Creating dynamically allocated ADT

#include "string.hpp"


String::String() {				//Empty string
	stringSize = 1;
	str = new char[stringSize];
	str[0] = '\0';
};

String::String(char x) {                      //Stirng('x')
	if (x == '\0') {
		stringSize = 1;
		str = new char[stringSize];
		str[0] = '\0';
	}
	else {
		stringSize = 2;
		str = new char[stringSize];
		str[0] = x;
		str[1] = '\0';
	}
};

String::String(const char manyChars[]) {              //String("abcd")
	int index = 0;
	while (manyChars[index] != '\0') {
		++index;
	}
	stringSize = index + 1;
	str = new char[stringSize];
	index = 0;
	while (manyChars[index] != '\0') {
		str[index] = manyChars[index];
		++index;
	}
	str[index] = '\0';
};

int String::capacity() const {				//Max chars that can be stored
	return stringSize - 1;
};

int String::length()  const {	//Number of char in string
	return capacity();
};

char& String::operator[]    (int x) {                       //Accessor/Modifier
	return str[x];
};

char String::operator[]    (int x)  const {                       //Accessor
	return str[x];
};


String& String::operator+=(const String& str2) {             //Concatenation
	int offset = length();
	stringSize = length() + str2.length() + 1;
	char* tmp = new char[stringSize];
	// copy current string
	int index = 0;
	while (str[index] != '\0') {
		tmp[index] = str[index];
		++index;
	}

	// add new stuff
	index = 0;
	while (str2[index] != '\0') {
		tmp[offset + index] = str2[index];
		++index;
	}
	tmp[offset + index] = '\0';
	delete[] str;
	str = tmp;
	return *this;
};

String  operator+(String str1, const String& str2) {             //Concatenation
	String str;
	str += str1;
	str += str2;
	return str;
};


// All comparison functions

bool String::operator==(const String& str2) const {
	int index = 0;
	while (index < length() + 1) {
		if (str[index] != str2[index]) {
			return false;
		}
		if (str[index] == '\0') return true;
		++index;
	}
	return true;
};


bool String::operator<(const String& str2) const {
	int index = 0;
	while (index < stringSize) {
		if (str[index] != str2[index]) {
			return (str[index] < str2[index]);
		}
		if (str[index] == '\0') return false;
		++index;
	}
	return false;
};

bool    operator<=      (const String& str1, const String& str2) {
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] < str2[index]);
		}
		if (str1[index] == '\0') return true;
		++index;
	}
	return true;
};


bool    operator!=      (const String& str1, const String& str2) {
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return true;
		}
		if (str1[index] == '\0') return false;
		++index;
	}
	return false;
};


bool    operator>=      (const String& str1, const String& str2) {
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] > str2[index]);
		}
		if (str1[index] == '\0') return true;
		++index;
	}
	return true;
};


bool    operator>       (const String& str1, const String& str2) {
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] > str2[index]);
		}
		if (str1[index] == '\0') return false;
		++index;
	}
	return false;
};

//start of free function comparisons

bool    operator==      (const char charString[], const String& str2) {
	String str1(charString);
	return (str1 == str2);
};

bool    operator==      (char charString, const String& str2) {
	String str1(charString);
	return (str1 == str2);
};

bool    operator<       (const char charString[], const String& str2) {
	String str1(charString);
	return (str1 < str2);
};

bool    operator<       (char charString, const String& str2) {
	String str1(charString);
	return (str1 < str2);
};

//End of comparison functions


String  String::substr(int begin, int end) const {//Sub from staring to ending positions
	String subString;
	delete[] subString.str;
	subString.stringSize = (end - begin) + 2;
	subString.str = new char[subString.stringSize];
	int i = 0;
	while (begin + i <= end) {
		subString[i] = str[begin + i];
		++i;
	}
	subString[i] = '\0';
	return subString;			//returns string of chars inbetween two index points
};

int String::findch(int begin, char ch) const {			 //Location of charater starting at a position
	int i = begin;
	while (i < stringSize) {
		if (str[i] == ch) {
			return i;
		}
		++i;
	}
	return -1;
};

int String::findstr(int begin, const String& str2) const {		 //Location of string starting at a position
	int i = begin;
	int str2Length = str2.length();
	while (i < stringSize) {
		for (int str2index = 0; str2index < str2Length; ++str2index) {
			if (str2[str2index] != str[i + str2index]) {
				break;
			}
			else if (str2index + 1 == str2Length) {
				return i;
			}
			else if (i + str2index + 1 == stringSize) {
				return-1;
			}
		}
		++i;
	}
	return -1;
};
/*
std::istream& operator>>(std::istream& stream, String& output) {
	char letter[256];

	stream >> letter;
	int index = 0;
	do {
		++index;
	} while (letter[index] != '\0');
	delete[] output.str;
	output.stringSize = index + 1;
	output.str = new char[output.stringSize];
	index = 0;
	do {
		output[index] = letter[index];
		++index;
	} while (letter[index] != '\0');
	output[index] = '\0';
	return stream;
};
*/


std::ostream& operator<<(std::ostream& stream, const String& input) {

	int index = 0;
	while (input[index] != '\0') {
		stream << input[index];
		++index;
	}
	return stream;
};

//MILESTONE 2 FUNCTION DEFS

String::String(const String& rhs) {                  //Copy Constructor
	stringSize = rhs.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; ++i) {
		str[i] = rhs[i];
	}
};

String::~String() {                               //Destructor
	delete[] str;
};

void String::swap(String& rhs) {                        //Constant time swap
	char* ptr = rhs.str;
	int tmp = rhs.stringSize;
	rhs.str = str;
	rhs.stringSize = stringSize;
	str = ptr;
	stringSize = tmp;
};

String& String::operator=(String rhs) {                //Assignment Copy
	swap(rhs);
	return *this;
};

//MILESTONE 3 FUNCTION DEF

std::vector<String> String::split(char splitChar) const {
	int begin = 0, end = 0;
	std::vector<String> output;

	while (end != -1) {
		end = findch(begin, splitChar);
		if (end != -1) {
			String element = substr(begin, end - 1);
			output.push_back(element);
			begin = end + 1;
		}
		else {
			String element = substr(begin, length() - 1);
			output.push_back(element);
		}
	}
	return output;
};

//MILESTONE 4 FUNCTION

int String::toInt() {
	int result = 0;
	int place = 1;
	int len = length() - 1;
	while (len >= 0) {
		result += (place * int(char(str[len] - 48)));
		--len;
		place *= 10;
	}
	return result;
};