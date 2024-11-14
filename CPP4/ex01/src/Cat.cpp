#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() { std::cout << "Cat Default Constructor called" << std::endl; 
  this->type = "Cat";
}

Cat::Cat(const Cat &rhs) : Animal(){
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)  {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return (*this);
}

Cat::~Cat() { std::cout << "Cat Destructor called" << std::endl; }

void Cat::makeSound(void) const{
  std::cout << "Meow !" << std::endl;
  return;
}
