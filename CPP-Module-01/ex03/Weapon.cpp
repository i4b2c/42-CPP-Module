#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void) const
{
	return this->type;
}
