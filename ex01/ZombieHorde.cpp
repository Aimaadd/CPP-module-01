#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N < 1) {
        std::cout << "Can't have less than 1 zombie" << std::endl;
        return (NULL);
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}