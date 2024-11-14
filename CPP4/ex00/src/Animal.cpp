#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal(){ std::cout << "Animal Default Constructor called" << std::endl; }


Animal::Animal(const Animal &rhs) {
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return (*this);
}

Animal::~Animal() { std::cout << "Destructor called" << std::endl; }

void Animal::makeSound() const {
        std::cout << "Some animal sound" << std::endl;
    }
std::string Animal::getType() const
{
  return this->type;
}
