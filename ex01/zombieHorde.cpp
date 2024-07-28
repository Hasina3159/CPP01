#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return nullptr;
    }

    Zombie	*horde = static_cast<Zombie*>(operator new[](sizeof(Zombie) * N));
    for (int i = 0; i < N; ++i) {
        new (&horde[i]) Zombie(name + std::to_string(i));
		horde[i].announce();
    }

    return horde;
}