#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
class ScavTrap : public ClapTrap {
public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &rhs);
  ScavTrap &operator=(const ScavTrap &rhs);
  ~ScavTrap();
  void attack(const std::string &target);
  void guardGate();
};
#endif
