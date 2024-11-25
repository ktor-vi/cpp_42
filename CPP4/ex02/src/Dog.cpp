#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog() { 
  std::cout << "Dog Default Constructor called" << std::endl; 
  this->type = "Dog";
  this->brain = new Brain();
}


Dog::Dog(const Dog &rhs) : Animal() {
  std::cout << "Copy Constructor called" << std::endl;
  *this = rhs;
  this->brain = new Brain(*rhs.brain);
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
  }
  return (*this);
}

Dog::~Dog() { 
  std::cout << "Dog Destructor called" << std::endl;
  delete this->brain;
}

void Dog::makeSound(void) const{
  std::cout << "Woof !" << std::endl;
}

Brain *Dog::getBrain() const{
  return (this->brain);
}

