#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain(){ std::cout << "Brain Default Constructor called" << std::endl; }


Brain::Brain(const Brain &rhs) {
  std::cout << "Copy Constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
      this->ideas[i] = rhs.ideas[i];
}

Brain &Brain::operator=(const Brain &rhs) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &rhs) {
    for(int i = 0; i < 100; i++)
      this->ideas[i] = rhs.ideas[i];
  }
  return (*this);
}

Brain::~Brain() { std::cout << "Brain Destructor called" << std::endl; }

