#include "../include/Animal.hpp"

int main()
{
    int num;
    const Animal* j[100];// = new Dog();
    const Animal* i[100];// = new Cat();
    for(num = 0; num < 100; num++)
    {
        i[num] = new Dog();
        j[num] = new Cat();
    }
    for(num = 0; num < 100; num++)
    {
        delete i[num];// = new Dog();
        delete j[num];// = new Cat();
    }
    return 0;
}