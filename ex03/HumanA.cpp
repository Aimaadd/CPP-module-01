#include "HumanA.hpp"

 HumanA::HumanA(std::string name, Weapon weapon) {
    this->name = name;
    this->weapon = weapon;
 }


std::string HumanA::getName() {
    return name;
}

 HumanA HumanA::attack() {
    std::cout << getName() << " attacked with " << 
 }