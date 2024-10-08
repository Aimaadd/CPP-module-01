#include "Zombie.hpp"
#include <iostream>

int main(void) {
    Zombie *zombie = newZombie("Cool");
    Zombie *zombie2 = newZombie("Cool 2");
    randomChump("Cool 3");
    delete zombie2;
    delete zombie;
    return (0);
}