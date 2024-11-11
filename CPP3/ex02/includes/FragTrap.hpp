#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
class FragTrap : public ClapTrap {
public:
  FragTrap(std::string name);
  FragTrap(const FragTrap &rhs);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap();
  void highFiveGuys(void);
};
#endif
