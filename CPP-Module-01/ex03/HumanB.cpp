#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
