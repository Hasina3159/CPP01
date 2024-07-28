#include "Zombie.hpp"

Zombie::Zombie( std::string p_name )
{
    name = p_name;
}

/*Zombie::Zombie( void )
{
    name = "";
}*/

Zombie::~Zombie()
{
    std::cout << name << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
