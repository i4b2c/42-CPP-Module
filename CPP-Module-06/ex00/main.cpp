#include "ScalarConverte.hpp"

std::string getType(char ** av)
{
	if(!av[1][0])
		return "no exist";
	char *restInt, *restFloat;//,*restDouble,*restChar;
	std::strtol(av[1],&restInt,10);
	if(!restInt[0])
		return "int";
	std::strtof(av[1],&restFloat);
	if(!restFloat[0])
		return "double";
	else if(restFloat[0] == 'f' && !restFloat[1])
		return "float";
	if(av[1][0] && !av[1][1])
		return "char";
	return "no exist";
}

int main(int ac , char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error: ./convert [type]" << std::endl;
		return EXIT_FAILURE;
	}
	std::string type = getType(av);
	std::cout << type << std::endl;
	return EXIT_SUCCESS;
}