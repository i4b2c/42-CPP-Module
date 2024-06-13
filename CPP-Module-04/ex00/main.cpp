#include "Animal.hpp"
#include "WrongAnimal.hpp"

void test_wrong(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	meta->makeSound();
	cat->makeSound();

	delete cat;
	delete meta;
}

void test_main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
}

int main()
{
	test_main();
	test_wrong();
    return 0;
}
