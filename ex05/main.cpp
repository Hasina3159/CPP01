#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
		return (0);
	harl = Harl();
	harl.ft_show_above(argv[1], -1);
	/*harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("NOTHING");*/
	return (0);
}