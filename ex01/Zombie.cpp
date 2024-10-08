#include "Zombie.hpp"

Zombie::Zombie() : name("") {
    std::cout << "Zombie appeared" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed" << std::endl;
}


void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}