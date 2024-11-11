#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
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

  FragTrap javier("javier");
  javier.attack("Baddie");
  javier.takeDamage(2);
  javier.beRepaired(1);
  javier.highFiveGuys();
  return (0);
}
