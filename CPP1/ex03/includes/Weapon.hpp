#ifndef ANIMAL
#define ANIMAL

#include <string>

class Weapon {
private:
  std::string _type;

public:
  Weapon(std::string type);
  ~Weapon();
  std::string const &getType();
  void setType(std::string type);
};
#endif