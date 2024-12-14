#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string p_type);
		~Weapon();
		const   std::string &getType() const;
		void    setType(const std::string &p_type);
};

#endif