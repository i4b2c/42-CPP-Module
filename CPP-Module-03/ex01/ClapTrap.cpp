#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("Default"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	#if DEBUG_MSG == 1
	std::cout << "ClapTrap Default constructor called" << std::endl;
	#endif
}

ClapTrap::ClapTrap(const std::string newName)
: _name(newName), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	#if DEBUG_MSG == 1
	std::cout << "ClapTrap default constructor called" << std::endl;
	#endif
}

ClapTrap::ClapTrap(ClapTrap const & arg)
: _name(arg._name),_hitPoints(arg._hitPoints),_EnergyPoints(arg._EnergyPoints),_AttackDamage(arg._AttackDamage)
{
	#if DEBUG_MSG == 1
	std::cout << "ClapTrap copy constructor called" << std::endl;
	#endif
}

ClapTrap::~ClapTrap(void)
{
	#if DEBUG_MSG == 1
	std::cout << "ClapTrap Destructor called" << std::endl;
	#endif
}

ClapTrap &
ClapTrap::operator=(ClapTrap const & arg)
{
	if(this != &arg)
	{
		this->_AttackDamage = arg._AttackDamage;
		this->_EnergyPoints = arg._EnergyPoints;
		this->_hitPoints = arg._hitPoints;
		this->_name = arg._name;
	}
	#if DEBUG_MSG == 1
	std::cout << "ClapTrap copy assigment constructor called" << std::endl;
	#endif
	return *this;
}

void
ClapTrap::attack(const std::string &target)
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
		std::cout << this->_name << " has no energy to attack" << std::endl;
}

void
ClapTrap::beRepaired(unsigned int num)
{
	if(this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " \
		<< this->_name << " heals a total of " << num << " of life" << std::endl;\
		this->_hitPoints += num;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << this->_name << " has no energy to heal" << std::endl;
}

void
ClapTrap::takeDamage(unsigned int num)
{
	if(this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " \
		<< this->_name << " take a total of " << num << " of damage" << std::endl;\
		((this->_hitPoints - (int)num) < 0) ? this->_hitPoints = 0 : this->_hitPoints -= num;
	}
	else
		std::cout << this->_name << " is already dead" << std::endl;
}
