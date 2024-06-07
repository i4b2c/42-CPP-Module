#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string &name);
        FragTrap(FragTrap const & arg);
        FragTrap &operator=(FragTrap const & arg);
        ~FragTrap(void);
        void highFivesGuys(void);

        static const int DefaultAttackDamage = 30;
        static const int DefaultEnergyPoints = 100;
        static const int DefaultHitPoints = 100;
};

#endif