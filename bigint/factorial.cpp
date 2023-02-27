
//Cole Kaminski
//February 23, 2023
//Computer Science 2
        //Project 1 - BIGINT
        //Extra credit (factorial and trailing zeros)

#include <iostream>
#include "bigint.hpp"

int main(){



bigint bi = nfact(100);
int numOfTrailZeros = findTrailZeros(bi);

std::cout<<"The factorial of 100 is: "<<std::endl<< bi<<std::endl;
std::cout<<std::endl<<"The number of trailing zeros on 100! is: "<< numOfTrailZeros <<std::endl;

/*
I implemented the nfact() function which uses recursion to implicitly convert the factorial of a number
into a bigint type. The function repeats itself, multiplying the integer parameter by one less than the input
until it multiplies itself by 1.

The way you can find trailing zeros on a factorial is to divide the number by 5 and then take that outcome,
divide it by 5 again, and so on until the number is 5 or less. Then, add up all of the outcomes from
each time you divided by 5 and that gives you trailing zeros. For instance, 100! can be seen as
100/5 = 20 and 20/5 = 4, 4 is less than 5 so we will have 24 trailing zeros.

*/

}