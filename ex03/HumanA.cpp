#include "HumanA.hpp"

HumanA::~HumanA() {

}

 HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    if (name.empty() || weapon.getType().empty()) {
      std::cout << "Cannot be empty" << std::endl;
      exit (1);
    }
    this->name = name;
    this->weapon = weapon;
 }


std::string HumanA::getName() {
    return name;
}

std::string HumanA::getWeapon() {
   return weapon.getType();
}

void HumanA::attack() {
    std::cout << getName() << " attacked with " <<  getWeapon() << std::endl;
 }