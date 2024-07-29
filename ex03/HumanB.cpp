#include "HumanB.hpp"

HumanB::HumanB(std::string p_name) : weapon(NULL), name(p_name) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(const Weapon &p_weapon)
{
	weapon = &p_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}