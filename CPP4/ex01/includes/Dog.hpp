#include "../includes/Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP
class Dog : public Animal{
public:
  Dog();
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  ~Dog();
  void makeSound(void) const ;
};
#endif
