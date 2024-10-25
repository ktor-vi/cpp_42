#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {}

std::string HumanB::getName(void) { return this->_name; }

void HumanB::attack(void) {
  std::cout << this->getName() << " attacks with their "
            << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
