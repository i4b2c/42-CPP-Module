#include "ScavTrap.hpp"

/*
Default ScavTrap Constructor
*/
ScavTrap::ScavTrap(void)
: ClapTrap("Default")
{
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	#if DEBUG_MSG == 1
	std::cout << "ScavTrap Default constructor called" << std::endl;
	#endif
}

/*
ScavTrap Constructor
*/
ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	#if DEBUG_MSG == 1
	std::cout << "ScavTrap Constructor called" << std::endl;
	#endif
}

/*
ScavTrap Copy Constructor
*/
ScavTrap::ScavTrap(ScavTrap const & arg)
: ClapTrap(arg._name)
{
	this->_AttackDamage = arg._AttackDamage;
	this->_EnergyPoints = arg._EnergyPoints;
	this->_hitPoints = arg._hitPoints;
	#if DEBUG_MSG == 1
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	#endif
}

/*
ScavTrap Copy Assigment operator
*/
ScavTrap &ScavTrap::operator=(ScavTrap const & arg)
{
	if(this != &arg)
	{
		this->_AttackDamage = arg._AttackDamage;
		this->_EnergyPoints = arg._EnergyPoints;
		this->_hitPoints = arg._hitPoints;
		this->_name = arg._name;
	}
	#if DEBUG_MSG == 1
	std::cout << "ScavTrap Copy Assigment Constructor Called" << std::endl;
	#endif
	return *this;
}

/*
ScavTrap Destructor
*/
ScavTrap::~ScavTrap(void)
{
	#if DEBUG_MSG == 1
	std::cout << "ScavTrap Destructor Called" << std::endl;
	#endif
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(!this->_hitPoints)
		std::cout << "ScavTrap " << this->_name << " can't attack while he's dead" << std::endl;
	else if(this->_EnergyPoints > 0)
	{
		std::cout << "ScavTrap " \
		<< this->_name << " attacks " \
		<< target << " causing " \
		<< this->_AttackDamage << " points of damage" << std::endl;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << this->_name << " has no energy to attack" << std::endl;
}
