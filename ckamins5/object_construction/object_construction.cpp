//Cole Kaminski
//Lab 6
//CS23001
//FEB 28, 2023

#include "object_construction.hpp"
#include <iostream>

    Kitty::Kitty(){    //Default constructor
    std::cout<<"The default constructor has been called"<<std::endl;
    }

    Kitty::~Kitty(){   //Deconstructor
    std::cout<<"The destructor has been called"<<std::endl;
    }

    Kitty& Kitty::operator=(const Kitty& Katty){  //assignment constructor
    std::cout<<"Assignment constructor has been called: "<<std::endl;
    return *this;
    }

    Kitty::Kitty(const Kitty& catty){       //copy constructor
    std::cout<<"Copy constructor has been called"<<std::endl;
    }

