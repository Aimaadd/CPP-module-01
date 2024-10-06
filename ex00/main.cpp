#include "Zombie.hpp"
#include <iostream>

int main(void) {
    Zombie *zombie = newZombie("Cool");
    Zombie *zombie2 = newZombie("Cool2");
    randomChump("Cool3");
    delete zombie2;
    delete zombie;
    return (0);
}