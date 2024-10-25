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
Zombie* zombieHorde( int N, std::string name );

#endif
