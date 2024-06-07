#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap defaultTrap("Default");
		ClapTrap robo("Traigu");

		robo.attack("defaultTrap");
		defaultTrap.takeDamage(0);
		defaultTrap.beRepaired(2);
		defaultTrap.takeDamage(0);
	}
	{
		ClapTrap temp("Rogerio");
		ClapTrap temp2(temp);
		temp.attack("Alberto");
		temp2.attack("Alberto");
	}
	{
		ClapTrap temp("Ithalo");
		ClapTrap Default("Rogerio");
		Default = temp;
		Default.attack("Training Dummy");
		temp.attack("Training Dummy");
	}
	return 0;
}
