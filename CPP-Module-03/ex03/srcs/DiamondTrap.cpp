#include "../include/DiamondTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name): name(name)
{
    FragTrap Ft;
    ScavTrap St;

    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->setValue(name + "_clap_name",Ft.getFtHitPoints(),St.getStEnergyPoints() \
    ,Ft.getFtAttackDamage());
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
    std::cout << "Diamond trap real name : " << this->name << std::endl \
    << "Clap Trap name : " << this->getDtName() << std::endl;
}
