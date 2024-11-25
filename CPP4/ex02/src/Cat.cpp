#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() { 
  std::cout << "Cat Default Constructor called" << std::endl; 
  this->type = "Cat";
  this->brain = new Brain();
}


Cat::Cat(const Cat &rhs) : Animal() {
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
  this->brain = new Brain(*rhs.brain);
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
  }
  return (*this);
}

Cat::~Cat() { 
  std::cout << "Cat Destructor called" << std::endl;
  delete this->brain;
}

void Cat::makeSound(void) const{
  std::cout << "Woof !" << std::endl;
}

Brain *Cat::getBrain() const{
  return (this->brain);
}

