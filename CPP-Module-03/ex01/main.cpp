#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap ok("icaldas");
	ok.attack("another one");
	ok.guardGate();
	return 0;
}
