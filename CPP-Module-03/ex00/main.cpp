#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoints;
		int _EnergyPoints;
		int _AttackDamage;
	public:
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(const std::string &name);
		ClapTrap(void);
};

ClapTrap::ClapTrap(void)
: _name("default"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &newName)
: _name(newName), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
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
		<< this->_name << " heals a total of " << num << " of life " << std::endl;\
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

int main(void)
{
	ClapTrap basico;
	ClapTrap bobao("Traigu");

	bobao.attack("basico");
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.beRepaired(2);
	basico.takeDamage(11);
	basico.takeDamage(11);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.beRepaired(1);
	basico.takeDamage(11);
	basico.takeDamage(11);
	return 0;
}
