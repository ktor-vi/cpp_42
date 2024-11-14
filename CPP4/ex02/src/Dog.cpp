#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() { 
  std::cout << "Dog Default Constructor called" << std::endl; 
  this->type = "Dog";
}


Dog::Dog(const Dog &rhs) : Animal() {
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return (*this);
}

Dog::~Dog() { std::cout << "Dog Destructor called" << std::endl; }

void Dog::makeSound(void) const{
  std::cout << "Woof !" << std::endl;
}
