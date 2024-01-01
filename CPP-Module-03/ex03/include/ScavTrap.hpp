#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		void guardGate();
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void attack(const std::string &target);
		std::string getStName(void) const;
		int getStHitPoints(void) const;
		int getStEnergyPoints(void) const;
		int getStAttackDamage(void) const;
};

#endif