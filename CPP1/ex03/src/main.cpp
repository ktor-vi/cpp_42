#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include <iostream>
int main() {
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    std::cout << club.getType();
  }
  return 0;
}
