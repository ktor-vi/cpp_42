#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << this->getName() << ": is dead" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
std::string Zombie::getName(void)
{
    return this->_name;
}
