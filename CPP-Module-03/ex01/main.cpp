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
		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		void setValue(std::string name, int Hit,int Energy, int Attack);
		void setEnergyPoints(int num);
		ClapTrap(const std::string &name);
		ClapTrap(void);
		~ClapTrap(void);
};

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

class ScavTrap: public ClapTrap
{
	public:
		void guardGate();
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void attack(const std::string &target);
};

ScavTrap::ScavTrap(void)
{
	this->setValue("default",100,50,20);
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setValue(name,100,50,20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
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

std::ostream &operator<<(std::ostream &stream,const ScavTrap &obj)
{
	stream << "ClapTrap " << obj.getName() << std::endl \
	<< "Hit Points : " << obj.getHitPoints() << std::endl \
	<< "Energy Points : " << obj.getEnergyPoints() << std::endl \
	<< "Attack Damage : " << obj.getAttackDamage(); 
	return stream;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(this->getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " \
		<< this->getName() << " attacks " \
		<< target << " causing " \
		<< this->getAttackDamage() << " points of damage" << std::endl;
		this->setEnergyPoints(-1);
	}
	else
		std::cout << "no more energy to attack" << std::endl;
}

int main(void)
{
	ScavTrap ok("icaldas");
	ok.attack("another one");
	ok.guardGate();
	std::cout << ok << std::endl;
	return 0;
}
