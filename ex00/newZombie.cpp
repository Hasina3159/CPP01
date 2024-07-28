#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zombie = new Zombie( name );
	if (zombie == NULL)
		return (NULL);
	return (zombie);
}
