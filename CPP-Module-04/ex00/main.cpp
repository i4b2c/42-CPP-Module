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
		std::cout << "\n===Testing Wrong Subject===\n" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;

		meta->makeSound();
		cat->makeSound();

		delete cat;
		delete meta;
	}
	{
		std::cout << "\n===Testing WrongAnimal Sounds===\n" << std::endl;
	
		const WrongAnimal *wrong_cat = new WrongCat();

		std::cout << wrong_cat->getType() << std::endl;

		wrong_cat->makeSound();

		delete wrong_cat;
	}
}

void test_main(void)
{
	std::cout << "+------------+" << std::endl;
	std::cout << "| Main Tests |" << std::endl;
	std::cout << "+------------+" << std::endl;
	{
		std::cout << "\n===Testing Subject===\n" << std::endl;

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
	{
		std::cout << "\n===Testing Animal Sounds===\n" << std::endl;
	
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		dog->makeSound();
		cat->makeSound();

		delete dog;
		delete cat;
	}
}

void test_canonical_form(void)
{
	std::cout << "+---------------------+" << std::endl;
	std::cout << "| Canonical Form Tests|" << std::endl;
	std::cout << "+---------------------+" << std::endl;
	{
		std::cout << "\n===Testing A Copy Of An Animal===\n" << std::endl;
	
		const Animal *dog = new Dog();
		const Animal *copy = dog;

		std::cout << copy->getType() << std::endl;
		copy->makeSound();

		const Dog *first = new Dog();
		const Dog *second = new Dog(*first);

		std::cout << first->getType() << std::endl;
		first->makeSound();

		std::cout << second->getType() << std::endl;
		second->makeSound();

		delete dog;
		delete first;
		delete second;
	}
}

void test_wrong_canonical_form(void)
{
	std::cout << "+---------------------------+" << std::endl;
	std::cout << "| Wrong Canonical Form Tests|" << std::endl;
	std::cout << "+---------------------------+" << std::endl;
	{
		std::cout << "\n===Testing A Copy Of An WrongAnimal===\n" << std::endl;
	
		const WrongAnimal *cat = new WrongCat();
		const WrongAnimal *copy = cat;

		std::cout << copy->getType() << std::endl;
		copy->makeSound();

		const WrongCat *first = new WrongCat();
		const WrongCat *second = new WrongCat(*first);

		std::cout << first->getType() << std::endl;
		first->makeSound();

		std::cout << second->getType() << std::endl;
		second->makeSound();

		delete first;
		delete second;
		delete cat;
	}
}


int main()
{
	test_main();
	test_wrong_canonical_form();
	test_wrong();
	test_wrong_canonical_form();
    return 0;
}
