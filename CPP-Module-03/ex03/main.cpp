#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap ok;
	ok.whoAmI();
	ok.attack("traigu");
	return 0;
}
