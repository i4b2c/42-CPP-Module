#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

void test_wrong(void)
{
	std::cout << "+-------------------+" << std::endl;
	std::cout << "| WrongAnimal Tests |" << std::endl;
	std::cout << "+-------------------+" << std::endl;
	
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
}

void test_main(void)
{
	std::cout << "+---------------+" << std::endl;
	std::cout << "| Subject Tests |" << std::endl;
	std::cout << "+---------------+" << std::endl;

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
}

int main()
{
	test_main();
	test_wrong();
    return 0;
}
