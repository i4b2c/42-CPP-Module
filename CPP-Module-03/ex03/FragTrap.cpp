#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
: ClapTrap(name)
{
    this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(void)
: ClapTrap("Default")
{
    this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
    #if DEBUG_MSG == 1
    std::cout << "FragTrap default constructor called" << std::endl;
    #endif
}

FragTrap::FragTrap(FragTrap const & arg)
: ClapTrap(arg._name)
{
    this->_hitPoints = arg._hitPoints;
	this->_EnergyPoints = arg._EnergyPoints;
	this->_AttackDamage = arg._AttackDamage;
    #if DEBUG_MSG == 1
    std::cout << "FragTrap copy constructor called" << std::endl;
    #endif
}

FragTrap &FragTrap::operator=(FragTrap const & arg)
{
    if(this != &arg)
    {
        this->_AttackDamage = arg._AttackDamage;
        this->_EnergyPoints = arg._EnergyPoints;
        this->_hitPoints = arg._hitPoints;
        this->_name = arg._name;
    }
    #if DEBUG_MSG == 1
    std::cout << "FragTrap Copy assigment called" << std::endl;
    #endif
    return *this;
}

FragTrap::~FragTrap(void)
{
    #if DEBUG_MSG == 1
    std::cout << "FragTrap destructor called" << std::endl;
    #endif
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Can you give me high five ? :)" << std::endl;
}