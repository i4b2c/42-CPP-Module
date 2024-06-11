#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void test_canonical_form(void)
{
	std::cout << "+----------------------+" << std::endl;
	std::cout << "| Canonical Form Tests |" << std::endl;
	std::cout << "+----------------------+" << std::endl;
	{
		std::cout << "Testing Copy Constructor" << std::endl;
		FragTrap tempFragTrap("Robot");

		tempFragTrap.highFivesGuys();

		FragTrap defaultFragTrap(tempFragTrap);

		defaultFragTrap.highFivesGuys();
	}
	{
		std::cout << "Testing Copy Assigment Operator" << std::endl;
		FragTrap defaultFragTrap;

		defaultFragTrap.highFivesGuys();

		FragTrap tempFragTrap("Robot-01");

		defaultFragTrap.highFivesGuys();

		defaultFragTrap = tempFragTrap;

		defaultFragTrap.highFivesGuys();
	}
	std::cout << std::endl;
}

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		FragTrap defaultFragTrap;

		defaultFragTrap.attack("Training Dummy");
		defaultFragTrap.beRepaired(100);
		defaultFragTrap.takeDamage(100);
		defaultFragTrap.highFivesGuys();
	}
}

int main(void)
{
	test_canonical_form();
	test_main();
	return 0;
}
