#include "../include/Materia.hpp"
#include "../include/Character.hpp"

int main()
{
    {

        IMateriaSource* src = new MateriaSource();
        AMateria* iceTemp;
        AMateria* cureTemp;

        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        iceTemp = src->createMateria("ice");
        cureTemp = src->createMateria("cure");

        me->equip(iceTemp);
        me->equip(cureTemp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);
        me->unequip(1);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
        // delete iceTemp;
        delete cureTemp;
    }
    return 0;
}