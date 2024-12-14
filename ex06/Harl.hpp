#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <string>
# include <map>

enum Levels { DEBUG, INFO, WARNING, ERROR, UNDEFINED };

class Harl
{
	private:
		void	debug( void );
		void 	info( void );
		void 	warning( void );
		void 	error( void );
	public:
		Harl();
		~Harl();
		void 	complain( std::string level );
		int		ft_get_level(const std::string &level);
		void	ft_show_above(const std::string &level, int index);
};

#endif