#include "HumanA.hpp"

HumanA::HumanA(std::string p_name, Weapon &p_weapon) : weapon(p_weapon), name(p_name) {}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}