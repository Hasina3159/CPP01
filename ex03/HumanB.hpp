#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		const Weapon	*weapon;
		std::string		name;
	public:
		HumanB(std::string p_name);
		~HumanB();
		void	attack();
        void    setWeapon(const Weapon &p_weapon);
};

#endif