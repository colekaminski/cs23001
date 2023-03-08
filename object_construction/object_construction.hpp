//Cole Kaminski
//Lab 6
//CS23001
//FEB 28, 2023

#ifndef OBJECT_CONSTRUCTION_HPP
#define OBJECT_CONSTRUCTION_HPP
#include <iostream>
#include <string>

class Kitty {
public:
    Kitty();    //Default constructor
    ~Kitty();   //Deconstructor
    Kitty& operator=(const Kitty&);  //assignment constructor
    Kitty(const Kitty&);        //copy constructor

};

#endif //OBJECT_CONSTRUCTION_HPP

//Need assignment, copy, default, dtor