#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <string>
# include <map>

enum Levels { DEBUG, INFO, WARNING, ERROR, UNDEFINED };

class Harl
{
	private:
		std::map<std::string, void (Harl::*)()> complaints = {
			{"DEBUG", &Harl::debug},
			{"INFO", &Harl::info},
			{"WARNING", &Harl::warning},
			{"ERROR", &Harl::error}
		};
	public:
		Harl();
		~Harl();
		void	debug( void );
		void 	info( void );
		void 	warning( void );
		void 	error( void );
		void 	complain( std::string level );
		Levels	ft_get_level(const std::string &level);
		void	ft_show_above(const std::string &level, int index);
};

#endif