#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    public :
        Weapon();
        Weapon(std::string weapon);
        ~Weapon();
        std::string getType(void) const;
        void        setType(std::string set);
    private :
        std::string type;
};

#endif