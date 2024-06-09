#include "ClapTrap.hpp"

void test_canonical_form(void)
{
	std::cout << "+----------------------+" << std::endl;
	std::cout << "| Canonical Form Tests |" << std::endl;
	std::cout << "+----------------------+" << std::endl;
	{
		std::cout << "Testing copy assigment" << std::endl;
		ClapTrap defaultTrap;
		ClapTrap temp("icaldas");

		defaultTrap.beRepaired(100);
		temp.takeDamage(100);

		defaultTrap = temp;
		defaultTrap.takeDamage(1);
		temp.takeDamage(1);

		temp.beRepaired(1);
		
		defaultTrap.takeDamage(1);
		temp.takeDamage(1);
		std::cout << std::endl;
	}
	{
		std::cout << "Testing copy Constructor" << std::endl;
		ClapTrap temp("ithalo");

		temp.takeDamage(100);

		ClapTrap defaultTrap(temp);

		temp.attack("Training Dummy");
		defaultTrap.attack("Training Dummy");

		temp.beRepaired(1);

		temp.attack("Training Dummy");
		defaultTrap.attack("Training Dummy");

		temp.takeDamage(1);
		defaultTrap.takeDamage(1);
	}
	std::cout << std::endl;
}

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		ClapTrap defaultTrap;
		ClapTrap robo("Traigu");

		robo.attack("defaultTrap");
		defaultTrap.takeDamage(1);
		defaultTrap.beRepaired(2);
		defaultTrap.takeDamage(10);
		defaultTrap.takeDamage(10);
		defaultTrap.takeDamage(10);
		defaultTrap.attack("Traigu");
		defaultTrap.beRepaired(1);
		defaultTrap.attack("Traigu");
	}
	std::cout << std::endl;
}

int main(void)
{
	test_canonical_form();
	test_main();
}
