# include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	size_t		level_nb = 4;
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*func_ptr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};


	for (size_t i = 0; i < level_nb; i++)
	{
		if (levels[i] == level)
		{
			(this->*func_ptr[i])();
			break;
		}
	}
}

int	Harl::ft_get_level(const std::string &level)
{
	size_t		level_nb = 4;
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (size_t i = 0; i < level_nb; i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (5);
}

void	Harl::ft_show_above(const std::string &level, int index)
{
	if (index == -1)
		index = ft_get_level(level);
	switch (index)
	{
		case DEBUG:
			complain("DEBUG");
			break;
		case INFO:
			complain("INFO");
			break;
		case WARNING:
			complain("WARNING");
			break;
		case ERROR:
			complain("ERROR");
			return ;
			break;
		default:
			return ;
			break;
	}
	std::cout << std::endl;
	ft_show_above(level, index + 1);
}
