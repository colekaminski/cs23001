

//Cole Kaminski
//February 6, 2023
//Computer Science 2
        //Project 1 - BIGINT
        //Milestone 3
//This is the header file for project 1, milestone 1
//It declares a class/ADT, called bigint


#ifndef BIGINT_HPP
#define BIGINT_HPP
#include <iostream>

const int CAPACITY = 200;       //The global constant to limit the size of bigint

class bigint {
public:
    bigint();                                                       //Default constructor: sets values of bigint to zero
    bigint(int);                                                    //Initializes bigint to integer value
    bigint(const char[]);                                           //Initializes bigint to a constant character array
    void debugPrint(std::ostream&) const;                           //Debug method function to print values for bigint
    friend std::ostream& operator<<(std::ostream&, const bigint&);  //Friend function used to output bigint after accepting a stream
    friend bool operator==(const bigint&, const bigint&);           //Overloaded operator function used to compare two bigint instances
    friend std::istream& operator>>(std::istream&, bigint&);		//milestone 2
    friend bigint operator+(const bigint&, const bigint&);		//milestone 2
    int operator[](const int) const;					        //milestone 2
    bigint timesDigit(int) const;                           //Milestone 3
    friend int findTrailZeros(bigint);                      //Extra credit
    bigint times10(int) const;                              //Milestone 3
    
    friend bigint operator*(const bigint&, const bigint&);  //Milestone 3


private:

    int data[CAPACITY];

};

bigint nfact(int);                                          //Extra credit

#endif /*BIGINT_HPP*/