#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::~Zombie(void)
{
	std::cout << "zombie " << this->name << " finally died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": Brainzzzzzzzzzzzz ... " << std::endl;
}
