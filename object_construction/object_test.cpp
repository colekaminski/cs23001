//Cole Kaminski
//Lab 6
//CS23001
//FEB 28, 2023

#include "object_construction.hpp"
#include<iostream>

int main(){
    
    Kitty cat1;
    Kitty cat2;
    Kitty cat3(cat1);
    cat1=cat2;

    return 0;
}