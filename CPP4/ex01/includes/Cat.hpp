
#include "../includes/Animal.hpp"
#include "Brain.hpp"
#ifndef CAT_HPP
#define CAT_HPP
class Cat : public Animal{
private:
  Brain *brain;
public:
  Cat();
  Cat(const Cat &rhs);
  Cat &operator=(const Cat &rhs);
  ~Cat();
  void makeSound(void) const;
  Brain *getBrain() const;
};
#endif
