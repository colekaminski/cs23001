//Cole Kaminski
//February 27, 2022
//Mileston 1, Project 2
//String CPP file - function/method definitions

#include "string.hpp"
#include <iostream>

    String::String (){                  //Empty string
        str[0] = '\0';
    }                            
            
    String::String (char x){              //String('x')
    str[0] = x;
    str[1]='\0 ';
    }                           

    String::String (const char manyChars[]){              //String("abcd")
    int index = 0;
        while(manyChars[index]!='\0'){
        str[index]=manyChars[index];
        ++index;
        }
    str[index]='\0';
    }

    int     String::capacity () const{                   //Max chars that can be stored
    /*int index = 0;
    int end = 0;
    for(int i=0; i<=STRING_SIZE;++i){
        if(str[index!='\0']){
            ++index;
            ++end;
        }else{
            continue;
        }
        std::cout<<"There are this many characters left to be stored in this string: "; 
        return STRING_SIZE-end;*/
	return STRING_SIZE -1;
    //}
    }

    int     String::length () const{              //Number of char in string
    int index = 0;
    while (str[index]!='\0'){
        ++index; 
    }
    std::cout<<"There are this many characters in your String: ";
    return index;
    }
  
    char&   String::operator[] (int x){                       //Accessor/Modifier
    return str[x];
    }

    char    String::operator[] (int x) const{                 //Accessor
    return str[x];
    }

    String& String::operator+= (const String& rhs){             //Concatenation
    int size = length();
    int concatSize = size + rhs.length();
    String concatString[(concatSize)+1];
        for(int i=0; i<=size; ++i){
            concatString[i]=str[i];
        }
        for(int i=0; i<=rhs.length(); ++i){
            concatString[(size+i)+1]=rhs[i];
        }
        concatString[(concatSize)+1]='\0';
        return concatString;
    }

    bool    String::operator== (const String& str2) const{
    int index = 0;
	    while (index < length() + 1) {
		    if (str[index] != str2[index]) {
			    return false;
		    }
		    if (str[index] == '\0'){ 
                return true;
            }
		    ++index;
	    }
	    return true;

    }

    bool    String::operator< (const String& str2) const{
        int index = 0;
        if(length()>str2.length()){
            return false;
        }
        while(str[index]!='\0'){
            if(str[index]>str2[index]){
            	return false;
            }
            else if(str[index]==str2[index]){
            	++index;
            }
        }
	   return true;
    }

    String  String::substr (int start, int end) const{            //Sub from starting to ending positions
	String subString[(end-start)+1];
	int index = 0;
	while(start<=end){
	subString[index] = str[start];
	++index;
	++start;
	}
	return subString;
    }

    int String::findch (int start, char ch) const{           //Location of charater starting at a position
	int index = start;
	while(str[index]!='\0'){
			if(str[index]==ch){
				return index;
			}
			++index;	//SHOULD THIS RETURN INDEX+1?
		}
		return -1;
	}

    int String::findstr (int begin, const String& str2) const{ 		//Location of string starting at a position
	int i = begin;
	int str2Length = str2.length();
	while(str2Length != '\0'){
		if()
	}
    

    std::istream& operator>>(std::istream& stream, String& output){
	
    }
    
    std::ostream& operator<<(std::ostream&, const String&){

    }

/*
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



std::ostream& operator<<(std::ostream& stream, const String& input) {

	int index = 0;
	while (input[index] != '\0') {
		stream << input[index];
		++index;
	}
	return stream;
};

*/