#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public :
        ~HumanB();
        HumanB(std::string name);
        std::string getName() const;
        std::string getWeapon() const;
        void        setWeapon(Weapon &weapon);
        void        attack() const;
    private :
        Weapon *weapon;
        std::string name;

};

#endif