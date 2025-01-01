#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zombie = new Zombie( name );
	if (zombie == NULL)
		return (NULL);
	return (zombie);
}

void randomChump( std::string name )
{
    Zombie zombie = Zombie(name);
    zombie.announce();
}

int main( void )
{
	std::string name;
	Zombie      *zombie = NULL;

	name = "randomZombie_01";

	zombie = newZombie("newZombie_01");
	zombie->announce();
	randomChump(name);
	randomChump("randomZombie_02");
	delete zombie;
	return (0);
}