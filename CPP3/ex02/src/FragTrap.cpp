#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) {
  std::cout << "FragTrap Constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap() {
  std::cout << "FragTrap Copy Constructor called" << std::endl;
  *this = rhs;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  std::cout << "FragTrap Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return (*this);
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
  std::cout << "FragTrap " << this->_name << " attacks " << target
            << " , causing " << this->_attackDamage << " points of damage!"
            << std::endl;
}

void FragTrap::highFiveGuys(void) {
  std::cout << "FragTrap " << this->_name
            << " cheeringly raises his claw for a high five !" << std::endl;
}
