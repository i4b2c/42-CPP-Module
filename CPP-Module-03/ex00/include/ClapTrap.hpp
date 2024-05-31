#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

#define DEBUG_MSG 1

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
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const & arg);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const & arg);
};

#endif