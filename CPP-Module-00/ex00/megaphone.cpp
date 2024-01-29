#include <iostream>
#include <cctype>
#include <cstdlib>

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for(int i = 1; av[i]; i++)
	{
		for(int j = 0; av[i][j]; j++)
			std::cout << char(toupper(av[i][j]));
		(av[i + 1]) ? (std::cout << " ") : (std::cout << std::endl);
	}
	return EXIT_SUCCESS;
}
