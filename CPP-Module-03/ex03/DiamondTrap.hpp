#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap(const std::string &name);
        DiamondTrap(void);
        ~DiamondTrap(void);
        std::string getDtName(void) const;
		int getDtHitPoints(void) const;
		int getDtEnergyPoints(void) const;
		int getDtAttackDamage(void) const;
        void whoAmI(void);
        void attack(const std::string &target) const;
        using ScavTrap::attack;
};

#endif