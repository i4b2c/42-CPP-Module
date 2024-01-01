#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"

class DiamondTrap: public ClapTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(const std::string &name);
        std::string getDtName(void) const;
		int getDtHitPoints(void) const;
		int getDtEnergyPoints(void) const;
		int getDtAttackDamage(void) const;
        void whoAmI(void);
};

#endif