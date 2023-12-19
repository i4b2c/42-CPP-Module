#include "../include/Harl.hpp"

int main(int ac, char **av)
{
	Harl object;
	if(ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
	{
		std::string level = av[1];
		object.complain(level);
	}

}
