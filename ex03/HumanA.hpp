#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon &weapon;  // Copie de l'arme
    std::string name;

public:
    HumanA(std::string p_name, Weapon &p_weapon);
    ~HumanA();
    void attack() const;
};

#endif
