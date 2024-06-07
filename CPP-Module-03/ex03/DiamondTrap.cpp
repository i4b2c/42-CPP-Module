#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
: ScavTrap(name), FragTrap(name)
{
    this->_AttackDamage = 
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap()
{
    this->_name = "Default_clap_name";
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

std::string DiamondTrap::getDtName(void) const
{
	return this->getName();
}

int DiamondTrap::getDtHitPoints(void) const
{
	return this->getHitPoints();
}

int DiamondTrap::getDtEnergyPoints(void) const
{
	return this->getEnergyPoints();
}

int DiamondTrap::getDtAttackDamage(void) const
{
	return this->getAttackDamage();
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Diamond trap real name : " << this->_name << std::endl \
    << "Clap Trap name : " << this->getDtName() << std::endl;
}
