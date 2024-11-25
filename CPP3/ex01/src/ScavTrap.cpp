#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) {
  std::cout << "ScavTrap Constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap() {
  std::cout << "ScavTrap Copy Constructor called" << std::endl;
  *this = rhs;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  std::cout << "ScavTrap Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return (*this);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->_name << " is now in gatekeeping mode."
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  std::cout << "ScavTrap " << this->_name << " attacks " << target
            << " , causing " << this->_attackDamage << " points of damage!"
            << std::endl;
}
