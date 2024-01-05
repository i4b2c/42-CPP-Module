#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "Character.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <stddef.h>

class ICharacter;

class AMateria
{
    protected:
        const std::string type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria(void);

        std::string const & getType() const;
        virtual void use(ICharacter & target);
        virtual AMateria* clone() const = 0;
};

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class Materia: public AMateria
{
    public:
        Materia(std::string type);
        ~Materia(void);
        void use(ICharacter & target);
        AMateria* clone() const;
};


class MateriaSource: public IMateriaSource
{
    private:
        AMateria * types[4];
    public:
        MateriaSource();
        ~MateriaSource();
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const & type);
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