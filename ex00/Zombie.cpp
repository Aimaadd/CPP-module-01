#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    std::cout << "I need to eat brainZzz" << "\n" << name;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed" << std::endl;
}

std::string Zombie::getName(void) const {
    return name;    
}

void Zombie::announce(void) {
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}