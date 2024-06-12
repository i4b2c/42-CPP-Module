#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		DiamondTrap defaultDiamondTrap;

		defaultDiamondTrap.attack("Training Dummy");
		defaultDiamondTrap.beRepaired(100);
		defaultDiamondTrap.guardGate();
		defaultDiamondTrap.highFivesGuys();
		defaultDiamondTrap.takeDamage(100);
		defaultDiamondTrap.whoAmI();
	}
}

int main(void)
{
	test_main();
	return 0;
}
