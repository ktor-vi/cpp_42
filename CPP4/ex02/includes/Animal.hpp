#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"
#include <string>
class Animal {
protected:
  std::string type;

private:
  Brain *brain;

public:
  Animal();
  Animal(const Animal &rhs);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal();

  virtual void makeSound(void) const = 0;
  std::string getType() const;
  Brain *getBrain() const;
};
#endif
