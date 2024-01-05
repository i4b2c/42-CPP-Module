#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "Character.hpp"

#include <string>
#include <iostream>
#include <stddef.h>

class ICharacter;

class AMateria
{
    protected:
        const std::string type;
        // [...]   
    public:
        AMateria(std::string const & type);
        virtual ~AMateria(void);

        //[...]

        std::string const & getType() const; //Returns the materia type
        virtual void use(ICharacter & target);
        virtual AMateria* clone() const = 0;
};

class Ice: public AMateria
{
    public:
        Ice(void);
        ~Ice(void);
        void use(ICharacter & target);
        AMateria* clone() const;
};

class Cure: public AMateria
{
    public:
        Cure(void);
        ~Cure(void);
        void use(ICharacter & target);
        AMateria* clone() const;
};

#endif