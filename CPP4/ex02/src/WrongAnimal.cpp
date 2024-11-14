#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(){ std::cout << "WrongAnimal Default Constructor called" << std::endl; }


WrongAnimal::WrongAnimal(const WrongAnimal &rhs) {
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "Destructor called" << std::endl; }

void WrongAnimal::makeSound() const {
        std::cout << "Some wrong animal sound" << std::endl;
    }
std::string WrongAnimal::getType() const
{
  return this->type;
}
