#include "../include/Zombie.hpp"

void randomChump( std::string name )
{
	Zombie chumpZombie(name);

	chumpZombie.announce();
}
