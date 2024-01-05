#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Materia.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <stddef.h>

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
    private:
        const std::string name;
        AMateria * inventory[4];
    public:
        Character(std::string name);
        ~Character();
        void equip(AMateria * m);
        void unequip(int idx);
        void use(int idx, ICharacter & target);
        std::string const & getName() const;
};

#endif