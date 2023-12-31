#include "../include/ClapTrap.hpp"

int main(void)
{
	ClapTrap defaultTrap;
	ClapTrap robo("Traigu");

	robo.attack("defaultTrap");
	defaultTrap.takeDamage(0);
	defaultTrap.beRepaired(2);
	defaultTrap.takeDamage(0);
	return 0;
}
