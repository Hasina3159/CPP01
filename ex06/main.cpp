#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;
	int		level = 0;	

	if (argc != 2)
		return (0);
		
	level = harl.ft_get_level(argv[1]);	
	if (level == 5)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0); 
	}
	harl = Harl();
	harl.ft_show_above(argv[1], -1);
	return (0);
}