//File:        string.cpp   
//       
//Version:     1.0
//Date:        9/5/2013 - Current Version Kent State University
//
//Author:      Dr. J. Maletic
//
//Description: -Implementation of simple String class member functions. 
//             


#include "string.hpp"
#include <cassert>


//////////////////////////////////////////////////////////
// Default Constructor
// ENSURES: str[0] == 0 
//
String::String() {
      str[0] = '\0';
} 

bool String::operator==(const String& str2) const {
	int index = 0;
	while (index < length()) {
		if (str[index] != str2.str[index]) {
			return false;
		}
		++index;
	}
	return str[index] == str2.str[index];
};

bool    operator==      (const char charString[], const String& str2) {
	return (String (charString) == str2);
};

bool    operator==      (char charString, const String& str2) {
	return (String (charString) == str2);
};

int String::length () const{
return DEFAULT_STRING_CAPACITY - 1;
};

char& String::operator[]    (int x) {                       //Accessor/Modifier
	return str[x];
};

char String::operator[]    (int x)  const {                       //Accessor
	return str[x];
};


////////////////////////////////////////////////////////// 
// ENSURES: str == s 
// Example:  String("abcd")
//
String::String(const char s[]) { 
    int i = 0;
    while (s[i] != 0) {
        str[i] = s[i];
        i++;
        if (i >= DEFAULT_STRING_CAPACITY-1) break;
    }
    str[i] = 0;
} 

String::String        (char x){
    str[0]=x;
    str[1]=0;
};


//////////////////////////////////////////////////////////
//Less Than
//
bool String::operator<(const String& rhs)  const {
    int  i = 0;
    
    //Find first non equal characters
    while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i]))  ++i;
    
    if (str[i] == 0) return true;                           //"aa" < "aaaaa"
    if (str[i] < rhs.str[i]) return true;                   //"aa" < "ab"
    return false;
}


inline bool operator<(const char *lhs, const String& rhs) {
    return String(lhs) < rhs;
}

inline bool operator<(const char lhs, const String& rhs) {
    return String(lhs) < rhs;
}
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
