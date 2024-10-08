#include "Zombie.hpp"

int main() {
    Zombie *horde;
    int amount = 11;

    horde = zombieHorde(amount, "Aimad");
    if (horde == NULL)
        return (1);
    for (int i = 0; i < amount; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}