#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void) {
  ClapTrap bob("bob");

  bob.attack("Baddie");
  bob.takeDamage(2);
  bob.beRepaired(1);

  ScavTrap alice("alice");

  alice.attack("Baddie");
  alice.takeDamage(2);
  alice.beRepaired(1);
  alice.guardGate();

  return (0);
}
