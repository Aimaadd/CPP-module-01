#include "HumanB.hpp"

HumanB::~HumanB() {

};

HumanB::HumanB(std::string name) : name(name) {
    this->name = name;
};

void    HumanB::setWeapon(Weapon &weapon) {
        this->weapon = &weapon;
}

std::string HumanB::getName() const{
    return name;
}

std::string HumanB::getWeapon() const{
   return weapon->getType();
}

void HumanB::attack()  const{
    if (weapon)
        std::cout << getName() << " attacked with " <<  getWeapon() << std::endl;
    else
        std::cout << name << "has no weapon to attack" << std::endl;
 }