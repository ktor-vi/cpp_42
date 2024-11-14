#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() { std::cout << "WrongCat Default Constructor called" << std::endl; 
  this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(){
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)  {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return (*this);
}

WrongCat::~WrongCat() { std::cout << "Destructor called" << std::endl; }

void WrongCat::makeSound(void) const{
  std::cout << "Wrong Meow !" << std::endl;
  return;
}
