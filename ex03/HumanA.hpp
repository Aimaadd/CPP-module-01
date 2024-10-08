#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public :
        HumanA(std::string name, Weapon weapon);
        HumanA    attack();
        std::string getName();
        std::string getWeapon();
    private :
        std::string name;
        Weapon      weapon;
};

#endif