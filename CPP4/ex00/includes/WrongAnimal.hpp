
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
class WrongAnimal{
protected:
  std::string type;
public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &rhs);
  WrongAnimal &operator=(const WrongAnimal &rhs);
  virtual ~WrongAnimal();
  
  void makeSound(void) const;
  std::string getType() const;
};
#endif
