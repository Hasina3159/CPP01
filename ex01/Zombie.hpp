#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    //Zombie(void);
    ~Zombie();
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif