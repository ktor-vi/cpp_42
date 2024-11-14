#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal(){ 
  std::cout << "Animal Default Constructor called" << std::endl;
  this->brain = new Brain();
}


Animal::Animal(const Animal &rhs) {
  std::cout << "Copy Constructor called" << std::endl;
    this->type = rhs.type;
    this->brain = new Brain(*rhs.brain);
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->type = rhs.type;
    this->brain = rhs.brain;
  }
  return (*this);
}

Animal::~Animal() { 
  std::cout << "Animal Destructor called" << std::endl;
  delete this->brain;
}

void Animal::makeSound() const {
        std::cout << "Some animal sound" << std::endl;
    }
std::string Animal::getType() const
{
  return this->type;
}

Brain *Animal::getBrain() const{
  return (this->brain);
}
