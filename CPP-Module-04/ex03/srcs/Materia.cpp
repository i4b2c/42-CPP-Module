#include "../include/Materia.hpp"

const std::string &AMateria::getType(void) const
{
    return this->type;
}

AMateria::AMateria(std::string const & type): type(type)
{
    // std::cout << "AMateria created" << std::endl;
}

AMateria::~AMateria(void)
{
    // std::cout << "AMateria destroyed" << std::endl;
}

void AMateria::use(ICharacter & target)
{
    std::cout << "used on " << target.getName() << std::endl;
}

Ice::Ice(void): AMateria("ice")
{
    // std::cout << "Ice material created" << std::endl;
}

Ice::~Ice(void)
{
    // std::cout << "Ice material destroyed" << std::endl;
}

void Ice::use(ICharacter & target)
{
    std::cout << "* Shoots an ice bolt at" << target.getName() << " *" << std::endl;
}

AMateria * Ice::clone() const
{
    AMateria * newMateria;
    newMateria = new Ice();
    return newMateria;
}

Cure::Cure(void): AMateria("cure")
{
    // std::cout << "Cure material created" << std::endl;
}

Cure::~Cure(void)
{
    // std::cout << "Cure material destroyed" << std::endl;
}

void Cure::use(ICharacter & target)
{
    std::cout << "* Cure the " << target.getName() << " *" << std::endl;
}

AMateria * Cure::clone() const
{
    AMateria * newMateria;
    newMateria = new Cure();
    return newMateria;
}

MateriaSource::MateriaSource()
{
    for(int idx = 0 ; idx < 4 ; idx += 1)
    {
        this->types[idx] = NULL;
    }
    // std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for(int idx = 0 ; idx < 4 ; idx += 1)
    {
        delete this->types[idx];
    }
    // std::cout << "MateriaSource deleted" << std::endl;
}

void MateriaSource::learnMateria(AMateria * newType)
{
    int idx = 0;

    for(idx = 0; idx < 4 && this->types[idx] != NULL; idx += 1) {}
    if(idx < 4 && idx >= 0){ this->types[idx] = newType; }
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    int idx = 0;

    for(idx = 0; idx < 4 && this->types[idx] != NULL; idx += 1)
    {
        if(this->types[idx]->getType() == type)
        {
            AMateria *newMateria = new Materia(type);
            return newMateria;
        }
    }
    return NULL;
}

Materia::Materia(std::string type): AMateria(type)
{
    // std::cout << "Materia created" << std::endl;
}

Materia::~Materia(void)
{
    // std::cout << "Materia destroyed" << std::endl;
}

void Materia::use(ICharacter & target)
{
    std::cout << "* used the "<< this->getType() << " on " << target.getName() << " *" << std::endl;
}

AMateria * Materia::clone() const
{
    AMateria * newMateria;
    newMateria = new Materia(this->type);
    return newMateria;
}