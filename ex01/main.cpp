#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(5, "HordeZombie");
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}