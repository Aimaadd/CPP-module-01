#include <iostream>


class Zombie
{
    public :
        Zombie(std::string name);
        ~Zombie();
        void        announce(void);
        std::string getName(void) const;
    private :
        std::string name;
};

Zombie  *newZombie(std::string name);
void    randomChump( std::string name);