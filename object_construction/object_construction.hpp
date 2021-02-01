// Chris Grimes
// CS 23001
// Lab 6  object_construction.hpp

#include<iostream>

#ifndef OBJECT_CONSTRUCTION_HPP
#define OBJECT_CONSTRUCTION_HPP

class myClass{
public:

  myClass(); // default ctor
  myClass(const myClass&); //cctor
  ~myClass(); //dtor
  
  myClass operator=(const myClass&); //= overloading

};

#endif
