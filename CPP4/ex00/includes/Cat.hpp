
#include "../includes/Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP
class Cat : public Animal{
public:
  Cat();
  Cat(const Cat &rhs);
  Cat &operator=(const Cat &rhs);
  ~Cat();
  void makeSound(void) const;
};
#endif
