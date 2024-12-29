#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon &weapon;
    std::string name;

public:
    HumanA( std::string p_name, Weapon &p_weapon );
    ~HumanA( void );
    void attack() const;
};

#endif
