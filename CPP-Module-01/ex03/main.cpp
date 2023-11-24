#include <iostream>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		std::string getType (void) const;
		void setType(std::string type);
};

Weapon::Weapon(std::string type) : type(type) {}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType(void) const
{
	return this->type;
}

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		void attack(void);		
		HumanA(std::string name,Weapon &weapon);
};

HumanA::HumanA(std::string name, Weapon &weapon) : name(name) , weapon(weapon) {}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}


class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);		
};

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

