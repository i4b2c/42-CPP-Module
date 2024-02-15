#include "ScalarConverte.hpp"

int main(int ac , char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error: ./convert [type]" << std::endl;
		return EXIT_FAILURE;
	}
	const std::string type = av[1];
	ScalarConverte::convert(type);
	return EXIT_SUCCESS;
}