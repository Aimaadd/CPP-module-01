#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public :
        ~HumanA();
        HumanA(std::string name, Weapon &weapon);
        void    attack();
        std::string getName();
        std::string getWeapon();
    private :
        std::string name;
        Weapon      &weapon;
};

#endif