#include "Zombie.hpp"

Zombie::Zombie( std::string p_name ) : m_name(p_name)
{
}

Zombie::Zombie( void ) : m_name("Default_name")
{
}

Zombie::~Zombie()
{
    std::cout << "[" << m_name << "] : is dead!" << std::endl;
}

void Zombie::announce( void ) const
{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name( const std::string &name )
{
    m_name = name;
}

void Zombie::get_name( std::string &name ) const
{
    name = m_name;
}