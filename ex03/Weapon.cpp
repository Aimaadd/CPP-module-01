#include "Weapon.hpp"

Weapon::Weapon() : type("nothing") {

}


Weapon::Weapon(std::string weapon) {
    if (weapon.empty())
        type = "nothing";
    else
        type = weapon;
}

Weapon::~Weapon() {

}

std::string Weapon::getType(void) const {
    return type;
}

void Weapon::setType(std::string set) {
    this->type = set;
}