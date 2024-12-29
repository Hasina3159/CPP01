#include <fstream>
#include <iostream>
#include <string>

void replaceAll(std::string& str, const std::string& s1, const std::string& s2) {
	size_t pos = 0;
	std::string result;

	while ((pos = str.find(s1, pos)) != std::string::npos) {
		result += str.substr(0, pos);
		result += s2;
		str = str.substr(pos + s1.length());
		pos = 0;
	}

	result += str;
	str = result;
}

int main(int argc, char **argv)
{
	std::string	in_txt{""}, 
				tmp{""},
				filename{""},
				s1{""}, 
				s2{""};

	if (argc != 4)
		return (0);

	filename 	= argv[1];
	s1 			= argv[2];
	s2 			= argv[3];

	std::ifstream file_in(filename, std::ios::in);
	if (!file_in.is_open())
	{
		std::cerr << "Impossible d'ouvrir le fichier : [" << filename << "]" << std::endl;
		return (1);
	}

	while (std::getline(file_in, tmp))
		in_txt = in_txt + tmp + "\n";
	
	file_in.close();
	filename = filename + ".replace";
	
	std::ofstream file_out(filename);

	if (!file_out.is_open())
	{
		std::cerr << "Impossible de creer le fichier : [" << filename << "]" << std::endl;
		return (1);
	}

	replaceAll(in_txt, s1, s2);
	file_out << in_txt;
	file_out.close();
	return (0);
}