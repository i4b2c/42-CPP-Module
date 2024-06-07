#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		void attack(const std::string &target);
		void guardGate();
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & arg);
		ScavTrap &operator=(ScavTrap const & arg);
		~ScavTrap(void);

		static const int DefaultAttackDamage = 20;
        static const int DefaultEnergyPoints = 50;
        static const int DefaultHitPoints = 100;
};

#endif