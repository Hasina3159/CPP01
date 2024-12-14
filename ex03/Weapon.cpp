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

void    Weapon::setType(const std::string &p_type)
{
    type = p_type;
}
