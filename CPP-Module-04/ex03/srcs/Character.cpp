#include "../include/Character.hpp"

Character::Character(std::string name): name(name)
{
    for(int idx = 0 ; idx < 4 ; idx += 1)
    {
        this->inventory[idx] = NULL;
    }
    std::cout << "Character created" << std::endl;
}

Character::~Character(void) 
{
    for(int idx = 0 ; idx < 4 ; idx += 1)
    {
        delete this->inventory[idx];
    }
    std::cout << "Character died" << std::endl;
}

void Character::equip(AMateria * materia)
{
    int idx = 0;

    for(idx = 0; idx < 4 && this->inventory[idx] != NULL; idx += 1) {}
    if(idx < 4){ this->inventory[idx] = materia; }
}

void Character::unequip(int idx)
{
    if(idx < 4 && idx >= 0 && this->inventory[idx] != NULL)
        delete this->inventory[idx];
    else if(idx >= 4 || idx < 0)
        std::cout << "Invalid number" << std::endl;
    else
        std::cout << "Invalid item" << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
    if(idx < 4 && idx >= 0)
        this->inventory[idx]->use(target);
    else
        std::cout << "Invalid number" << std::endl;
}

std::string const & Character::getName() const
{
    return this->name;
}