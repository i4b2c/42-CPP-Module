#include "../include/Animal.hpp"

int main()
{
    const Dog a;
    //const Animal b; //nao vai funcionar
    const Cat c;
    a.makeSound();
    c.makeSound();
}