#include "../include/ClapTrap.hpp"

void ClapTrap::setEnergyPoints(int num)
{
	this->_EnergyPoints += num;
}

void ClapTrap::setValue(std::string name, int Hit, int Energy, int Attack)
{
	this->_name = name;
	this->_hitPoints = Hit;
	this->_EnergyPoints = Energy;
	this->_AttackDamage = Attack;
};

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->_EnergyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return this->_AttackDamage;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
: _name("default"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &newName)
: _name(newName), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " \
		<< this->_name << " attacks " \
		<< target << " causing " \
		<< this->_AttackDamage << " points of damage" << std::endl;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << "no more energy to attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int num)
{
	if(this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " \
		<< this->_name << " heals a total of " << num << " of life" << std::endl;\
		this->_hitPoints += num;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << "no more energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int num)
{
	if(this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " \
		<< this->_name << " take a total of " << num << " of damage" << std::endl;\
		this->_hitPoints -= num;
	}
	else
		std::cout << "he is already dead" << std::endl;
}