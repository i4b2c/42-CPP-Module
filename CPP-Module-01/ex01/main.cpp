#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);

		void setName(std::string name);
		void announce(void);
};

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "";
}

Zombie::~Zombie(void)
{
	std::cout << "zombie " << this->name << " died" << std::endl;
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *newZombie = new Zombie[N];

	for(int i = 0; i < N ; i++)
	{
		newZombie[i].setName(name);
	}
	return newZombie;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": Brainzzzzzzzzzzzz ..." << std::endl;
}

int main(void)
{
	std::string input;
	int N;
	Zombie *zombies;

	std::cout << "set a name for the horde of zombies : ";
	std::getline(std::cin, input);

	std::cout << "set amout of zombies : ";
	std::cin >> N;
	zombies = zombieHorde(N,input);
	for(int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}
