#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->setValue(name,100,100,30);
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->setValue("default",100,100,30);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "can you give me high five ? :)" << std::endl;
}

std::string FragTrap::getFtName(void) const
{
	return this->getName();
}

int FragTrap::getFtHitPoints(void) const
{
	return this->getHitPoints();
}

int FragTrap::getFtEnergyPoints(void) const
{
	return this->getEnergyPoints();
}

int FragTrap::getFtAttackDamage(void) const
{
	return this->getAttackDamage();
}