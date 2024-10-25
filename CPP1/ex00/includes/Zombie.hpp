#ifndef ZOMBIE_HPP

#include <string>

class Zombie {
    public:
        Zombie();
        ~Zombie();
        void announce();
        std::string getName();
        void setName(std::string name);
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif
