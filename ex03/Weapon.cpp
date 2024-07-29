#include "Weapon.hpp"

Weapon::Weapon(std::string p_type) : type(p_type)
{
}

Weapon::~Weapon()
{
}

const   std::string &Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string p_type)
{
    type = p_type;
}
