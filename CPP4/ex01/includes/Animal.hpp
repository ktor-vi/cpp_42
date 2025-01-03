#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal{
protected:
  std::string type;
public:
  Animal();
  Animal(const Animal &rhs);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal();
  
  virtual void makeSound(void) const;
  std::string getType() const;
};
#endif
