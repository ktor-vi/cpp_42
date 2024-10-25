#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"
#include <string>
class HumanA {
private:
  std::string _name;
  Weapon &_weapon;

public:
  HumanA(std::string name, Weapon &weapon);
  std::string getName(void);
  void attack(void);
};
#endif
