#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0) {
		return nullptr;
	}

	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		horde[i].set_name(name);
	}

	return horde;
}

int main( void )
{
	std::string name;
	int			zombiesNumber = 5;
	Zombie      *zombies;
	name = "Petera";
	zombies = zombieHorde(zombiesNumber, name);
	for (int i = 0; i < zombiesNumber; i++)
	{
		zombies[i].announce();
	}
	zombies->set_name("Jodasy");
	zombies->announce();
	delete[] zombies;
	return (0);
}