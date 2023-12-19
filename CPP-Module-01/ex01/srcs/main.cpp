#include "../include/Zombie.hpp"

int main(void)
{
	std::string input;
	int N;
	Zombie *zombies;

	std::cout << "set a name for the horde of zombies 🧟 : ";
	std::getline(std::cin, input);

	std::cout << "set amout of zombies 🧟 : ";
	std::cin >> N;
	zombies = zombieHorde(N,input);
	for(int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}
