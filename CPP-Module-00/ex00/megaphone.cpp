#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::toupper;

void ft_putstr(char *str)
{
	int i;
	for(i = 0; str[i]; i++)
		cout << char(toupper(str[i]));
	if(str[i - 1] != ' ')
		cout << ' ';
}

void print_megaphone(char **av)
{
	for(int i = 1; av[i] ; i++)
		ft_putstr(av[i]);
	cout << endl;
}

int main(int ac, char **av)
{
	if(ac == 1)
		cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << endl;
	else
		print_megaphone(av);
}
