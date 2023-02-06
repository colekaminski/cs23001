//Cole Kaminski
//February 6, 2023
//Computer Science 2
        //Project 1 - BIGINT
        //Milestone 1
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

private:

    int data[CAPACITY];

};

#endif // BIGINT_HPP
