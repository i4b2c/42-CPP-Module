#include <iostream>
using namespace std;

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		cout << str[i++];
	}
}

int main(int ac ,char **av)
{
	int i;

	i = 1;
	if(ac != 1)
	{
		while(av[i])
			ft_putstr(av[i++]);
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return 0;
}
