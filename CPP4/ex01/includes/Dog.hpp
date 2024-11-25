#include "../includes/Animal.hpp"
#include "Brain.hpp"
#ifndef DOG_HPP
#define DOG_HPP
class Dog : public Animal{
private:
  Brain *brain;
public:
  Dog();
  Dog(const Dog &rhs);
  Dog &operator=(const Dog &rhs);
  ~Dog();
  void makeSound(void) const ;
  Brain *getBrain() const;
};
#endif
