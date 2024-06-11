#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void test_canonical_form(void)
{
	std::cout << "+----------------------+" << std::endl;
	std::cout << "| Canonical Form Tests |" << std::endl;
	std::cout << "+----------------------+" << std::endl;
	{
		std::cout << "Testing Copy Constructor" << std::endl;
		ScavTrap defaultScavTrap("Robot");

		defaultScavTrap.takeDamage(101);

		defaultScavTrap.takeDamage(1);
		defaultScavTrap.attack("Training Dummy");

		ScavTrap tempScavTrap(defaultScavTrap);

		defaultScavTrap.takeDamage(1);
		defaultScavTrap.attack("Training Dummy");
		tempScavTrap.takeDamage(1);
		tempScavTrap.attack("Training Dummy");

		defaultScavTrap.beRepaired(1);

		defaultScavTrap.attack("Training Dummy");
		defaultScavTrap.takeDamage(1);
		tempScavTrap.attack("Training Dummy");
		tempScavTrap.takeDamage(1);
		std::cout << std::endl;
	}
	{
		std::cout << "Testing Copy Assigment Operator" << std::endl;
		ScavTrap tempScavTrap("Robot-01");
		ScavTrap defaultScavTrap;

		tempScavTrap.attack("Training Dummy");
		defaultScavTrap.attack("Training Dummy");

		defaultScavTrap.takeDamage(101);

		defaultScavTrap.attack("Training Dummy");

		defaultScavTrap = tempScavTrap;

		tempScavTrap.attack("Training Dummy");
		defaultScavTrap.attack("Training Dummy");

		tempScavTrap.takeDamage(101);

		tempScavTrap.attack("Training Dummy");
		defaultScavTrap.attack("Training Dummy");
		std::cout << std::endl;
	}
}

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
	test_canonical_form();
	test_main();
	return 0;
}
