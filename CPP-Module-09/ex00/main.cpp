#include "BitcoinExchange.hpp"

int main(int ac,char **av)
{
	if(ac == 1 && !av[1])
	{
		std::cerr << "Error invalid input" << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		executeBitcoin(av[1]);
	}
	return EXIT_SUCCESS;
}