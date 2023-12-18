#include <iostream>
#include <cctype>
#include <cstdlib>

void ft_putstr(char *str)
{
	int i;
	for(i = 0; str[i]; i++)
		std::cout << char(toupper(str[i]));
	if(str[i - 1] != ' ')
		std::cout << ' ';
}

void print_megaphone(char **av)
{
	for(int i = 1; av[i] ; i++)
		ft_putstr(av[i]);
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
		print_megaphone(av);
	return (EXIT_SUCCESS);
}
