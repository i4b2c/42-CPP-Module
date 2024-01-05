#include "../include/Materia.hpp"

int main(void)
{
    AMateria *IceMaterial;
    AMateria *CureMaterial;
    ICharacter * me;
    ICharacter * enemy;

    IceMaterial = new Ice();
    CureMaterial = new Cure();

    me = new Character("Ithalo");
    enemy = new Character("ClapTrap");

    me->equip(IceMaterial);
    me->equip(CureMaterial);

    me->use(0,*enemy);
    me->use(1,*enemy);

    delete CureMaterial;
    delete IceMaterial;
    delete me;
    delete enemy;
    return 0;
}