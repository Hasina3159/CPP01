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
	auto it = complaints.find(level);
	if (it == complaints.end())
		std::cout << level << "???" << std::endl;
	else
		(this->*(it->second))();

}

Levels	Harl::ft_get_level(const std::string &level)
{
	std::map<std::string, Levels> all_levels = {
		{"DEBUG", DEBUG},
		{"INFO", INFO},
		{"WARNING", WARNING},
		{"ERROR", ERROR}
	};
	auto it = all_levels.find(level);
	if (it == all_levels.end())
		return (UNDEFINED);
	return (it->second);
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
