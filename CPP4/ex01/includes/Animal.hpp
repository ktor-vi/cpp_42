#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include "Brain.hpp"
class Animal{
protected:
  std::string type;
private:
  Brain *brain;
public:
  Animal();
  Animal(const Animal &rhs);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal();
  
  virtual void makeSound(void) const;
  std::string getType() const;
  Brain *getBrain() const;
};
#endif
