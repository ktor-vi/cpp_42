#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() { std::cout << "Default Constructor called" << std::endl; }

ClapTrap::ClapTrap(std::string name) {
  std::cout << "ClapTrap Name Constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = 10;
  this->_energyPoints = 10;
  this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) {
  std::cout << "ClapTrap Copy Constructor called" << std::endl;
  *this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  std::cout << "ClapTrap Assignment operator called" << std::endl;
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
  }
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  std::cout << "ClapTrap " << this->_name << " attacks " << target
            << " , causing " << this->_attackDamage << " points of damage!"
            << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << this->_name << " takes " << amount
            << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "ClapTrap " << this->_name << " repairs and gains " << amount
            << " hit points!" << std::endl;
}
