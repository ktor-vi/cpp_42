#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}

std::string HumanA::getName(void) { return this->_name; }

void HumanA::attack(void) {
  std::cout << this->getName() << " attacks with their "
            << this->_weapon.getType() << std::endl;
}
