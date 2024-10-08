#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string weapon) {
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