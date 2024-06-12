#include "FragTrap.hpp"

/*
FragTrap Default Constructor
*/
FragTrap::FragTrap(void)
: ClapTrap("Default")
{
    this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
    #if DEBUG_MSG == 1
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    #endif
}

/*
FragTrap Constructor
*/
FragTrap::FragTrap(const std::string &name)
: ClapTrap(name)
{
    this->_hitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
    std::cout << "FragTrap Constructor Called" << std::endl;
}

/*
FragTrap Copy Constructor
*/
FragTrap::FragTrap(FragTrap const & arg)
: ClapTrap(arg._name)
{
    this->_hitPoints = arg._hitPoints;
	this->_EnergyPoints = arg._EnergyPoints;
	this->_AttackDamage = arg._AttackDamage;
    #if DEBUG_MSG == 1
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    #endif
}

/*
FragTrap Copy Assigment Operator
*/
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
    std::cout << "FragTrap Copy Assigment Called" << std::endl;
    #endif
    return *this;
}

/*
FragTrap Destructor
*/
FragTrap::~FragTrap(void)
{
    #if DEBUG_MSG == 1
    std::cout << "FragTrap Destructor Called" << std::endl;
    #endif
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name \
    << " can you give me a high five? :)" << std::endl;
}