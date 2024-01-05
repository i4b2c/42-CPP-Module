#include "../include/Materia.hpp"

const std::string &AMateria::getType(void) const
{
    return this->type;
}

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "AMateria created" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destroyed" << std::endl;
}

void AMateria::use(ICharacter & target)
{
    std::cout << "used on " << target.getName() << std::endl;
}

Ice::Ice(void): AMateria("Ice")
{
    std::cout << "Ice material created" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Ice material destroyed" << std::endl;
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

Cure::Cure(void): AMateria("Cure")
{
    std::cout << "Cure material created" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure material destroyed" << std::endl;
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