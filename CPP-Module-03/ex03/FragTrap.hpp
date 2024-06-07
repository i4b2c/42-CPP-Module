#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string &name);
        FragTrap(FragTrap const & arg);
        FragTrap &operator=(FragTrap const & arg);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif