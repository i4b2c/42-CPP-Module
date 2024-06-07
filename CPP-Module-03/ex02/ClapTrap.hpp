#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

#define DEBUG_MSG 1

class ClapTrap
{
	protected:
		std::string _name;
		int _hitPoints;
		int _EnergyPoints;
		int _AttackDamage;
	public:
		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const & arg);
		ClapTrap &operator=(ClapTrap const & arg);
		~ClapTrap(void);
};

#endif
