#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & arg);
		ScavTrap &operator=(ScavTrap const & arg);
		~ScavTrap(void);

		void attack(const std::string &target);
		void guardGate();
};

#endif