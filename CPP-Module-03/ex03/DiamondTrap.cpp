#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_hitPoints = FragTrap::DefaultHitPoints;
    this->_EnergyPoints = ScavTrap::DefaultEnergyPoints;
    this->_AttackDamage = FragTrap::DefaultAttackDamage;

    #if DEBUG_MSG == 1
    std::cout << "DiamondTrap Constructor Called" << std::endl;
    #endif
}


DiamondTrap::DiamondTrap(void)
:ClapTrap("Default_clap_name"), FragTrap(),ScavTrap()
{
    this->_name = "Default";
    this->_hitPoints = FragTrap::DefaultHitPoints;
    this->_EnergyPoints = ScavTrap::DefaultEnergyPoints;
    this->_AttackDamage = FragTrap::DefaultAttackDamage;
    #if DEBUG_MSG == 1
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    #endif
}

DiamondTrap::~DiamondTrap(void)
{
    #if DEBUG_MSG == 1
    std::cout << "DiamondTrap Destructor Called" << std::endl;
    #endif
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap real name : " << this->_name << std::endl \
    << "ClapTrap name : " << this->ClapTrap::_name << std::endl;
}
