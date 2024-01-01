#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(const std::string &name);
        FragTrap(void);
        ~FragTrap(void);
        void highFivesGuys(void);
        std::string getFtName(void) const;
		int getFtHitPoints(void) const;
		int getFtEnergyPoints(void) const;
		int getFtAttackDamage(void) const;
};

#endif