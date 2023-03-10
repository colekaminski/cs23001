//Cole Kaminski
//February 27, 2022
//Milestone 1, Project 2
//String CPP file - function/method definitions

#include "string.hpp"
#include <iostream>

    String::String (){                  //Empty string
        str[0] = '\0';
    }                            
            
    String::String (char x){              //String('x')
    str[0] = x;
    str[1]='\0';
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
	return STRING_SIZE -1;
    }

    int     String::length () const{              //Number of char in string
    int index = 0;
    while (str[index]!='\0'){
        ++index; 
    }
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
	if(((rhs.length())+size)>=STRING_SIZE){
		std::cout<<"Cannot add two String objects that will exceed the maximum capacity able to be stored. "<<std::endl;
		return *this;
	}else {
        for(int i=0; (rhs.str[i]!='\0'); ++i){
            str[size+i]=rhs.str[i];
        }
        str[(size+rhs.length())]='\0';
		return *this;
	}
	}

    bool String::operator== (const String& str2) const{
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

    String  String::substr (int start, int end) const{            //Sub from starting to ending positions
	String subString;
	int index = 0;
	for(int i=start; i<=end;++i){
	subString.str[i-start] = str[i];
	++index;
	}
	subString.str[index]='\0';
	return subString;
    }

    int String::findch (int start, char ch) const{           //Location of charater starting at a position
	int index = start;
	while(str[index]!='\0'){
			if(str[index]==ch){
				return index;
			}
			++index;
		}
		return -1;
	}

    int String::findstr (int begin, const String& str2) const{ 		//Location of string starting at a position
	int index=-1;
	for(int i=begin; i<length(); ++i){
		if(str[i]==str2.str[0]){
			index = i;
			int x = index;
			for(int j=0; j<str2.length(); ++j){
				if((str[x]!=str2.str[j])){
					index=-1;
					break;
				}
				++x;
			}
			if(index!=(-1)){
				return index;
			}
		}
	}
	//std::cout << "Found index: " << index << std::endl;
	return index;
	}

    std::istream& operator>>(std::istream& stream, String& output) {
		char arr[3000];
		stream >> arr;
		output=String(arr);
		return stream;
	}

    
    std::ostream& operator<<(std::ostream& stream, const String& output){
		int index = 0;
	while (output[index] != '\0') {
		stream << output[index];
		++index;
	}
	return stream;
    }

	bool String::operator< (const String& str2) const{
		int i=0;
		while((str[i]==str2.str[i])&&(str[i]!='\0')&&(str2.str[i]!='\0')){
			++i;
		}
		return str[i]<str2.str[i];
    }

	String  operator+  (String str1, const String& str2){
	String str;
	str += str1;
	str += str2;
	return str;
	}

	bool    operator==      (const char charString[],  const String& str2){
	String str1(charString);
	return (str1 == str2);
	}

	bool    operator==      (char single, const String& str2){
	String str1(single);
	return (str1 == str2);
	}

	bool    operator<       (const char charString[],  const String& str2){
	String str1(charString);
	return (str1 < str2);
	}
	
	bool    operator<       (char single, const String& str2){
	String str1(single);
	return (str1 < str2);
	}
	
	bool    operator<=      (const String& str1, const String& str2){	//how does this make sense?
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] < str2[index]);
		}
		if (str1[index] == '\0') return true;
		++index;
	}
	return true;
	}
	
	bool    operator!=      (const String& str1, const String& str2){
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return true;
		}
		if (str1[index] == '\0') return false;
		++index;
	}
	return false;
	}
	
	bool    operator>=      (const String& str1, const String& str2){
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] > str2[index]);
		}
		if (str1[index] == '\0') return true;
		++index;
	}
	return true;
	}
	
	bool    operator>       (const String& str1, const String& str2){
	int index = 0;
	while (index < str1.length() + 1) {
		if (str1[index] != str2[index]) {
			return (str1[index] > str2[index]);
		}
		if (str1[index] == '\0') return false;
		++index;
	}
	return false;
	}
