#include "../includes/WrongAnimal.hpp"
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
class WrongCat : public WrongAnimal{
public:
  WrongCat();
  WrongCat(const WrongCat &rhs);
  WrongCat &operator=(const WrongCat &rhs);
  ~WrongCat();
  void makeSound(void) const;
};
#endif
