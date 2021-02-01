// Chris Grimes
// Cs 23001
// Lab 6 object_construction.cpp

#include"object_construction.hpp"

myClass::myClass(){
  std::cout<<"default constructor called"<<std::endl;
}

myClass::myClass(const myClass &rhs){
  std::cout<<"copy constructor called"<<std::endl;
}

myClass::~myClass(){
  std::cout<<"destructor called"<<std::endl;
}

myClass myClass::operator=(const myClass &rhs){
  std::cout<<"operator = overloading in use"<<std::endl;
  return rhs;
}
