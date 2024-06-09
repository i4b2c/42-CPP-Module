#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		std::cout << "Testing attack using ScavTrap" << std::endl;
		ScavTrap defaultScavTrap;
		ClapTrap defaultClapTrap;

		defaultScavTrap.attack("Training Dummy");
		defaultClapTrap.attack("Training Dummy");

		defaultScavTrap.takeDamage(95);
		defaultClapTrap.takeDamage(95);

		defaultScavTrap.attack("Training Dummy");
		defaultClapTrap.attack("Training Dummy");

		defaultScavTrap.takeDamage(95);
		defaultClapTrap.takeDamage(95);

		defaultScavTrap.attack("Training Dummy");
		defaultClapTrap.attack("Training Dummy");

		defaultScavTrap.beRepaired(10);
		defaultClapTrap.beRepaired(10);

		defaultScavTrap.attack("Training Dummy");
		defaultClapTrap.attack("Training Dummy");

		defaultScavTrap.guardGate();
		//defaultClapTrap.guardGate();

		defaultScavTrap.takeDamage(100);
		defaultClapTrap.takeDamage(100);

		defaultScavTrap.takeDamage(100);
		defaultClapTrap.takeDamage(100);
	}
}

int main(void)
{
	//test_canonical_form();
	test_main();
	return 0;
}
