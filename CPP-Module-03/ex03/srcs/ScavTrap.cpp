#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setValue("default",100,50,20);
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setValue(name,100,50,20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(this->getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " \
		<< this->getName() << " attacks " \
		<< target << " causing " \
		<< this->getAttackDamage() << " points of damage" << std::endl;
		this->setEnergyPoints(-1);
	}
	else
		std::cout << "no more energy to attack" << std::endl;
}

std::string ScavTrap::getStName(void) const
{
	return this->getName();
}

int ScavTrap::getStHitPoints(void) const
{
	return this->getHitPoints();
}

int ScavTrap::getStEnergyPoints(void) const
{
	return this->getEnergyPoints();
}

int ScavTrap::getStAttackDamage(void) const
{
	return this->getAttackDamage();
}