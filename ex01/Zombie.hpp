#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
    std::string m_name;
public:
    Zombie( void );
    Zombie(std::string name);
    ~Zombie();
    void announce( void ) const;
    void set_name( const std::string &name );
    void get_name( std::string &name ) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif