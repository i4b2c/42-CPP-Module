#include "../include/Zombie.hpp"

int main(void)
{
	std::string input;

	std::cout << "HEAP: zombie name 🧟: ";
	std::getline(std::cin,input);
	Zombie *zombie = newZombie(input);
	zombie->announce();
	delete zombie;

	std::cout << "STACK: zombie name 🧟: ";
	std::getline(std::cin,input);
	randomChump(input);
	return 0;
}
