#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
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
        void attack(const std::string &target) const;
        using ScavTrap::attack;
};

#endif