#include "Zombie.hpp"

Zombie::Zombie(std::string initName) : zombieName(initName)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "zombie " << this->zombieName << " finally died" << std::endl;
	return ;
}

void Zombie::announce( void )
{
	std::cout << this->returnName() << ':' << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

std::string Zombie::returnName(void)
{
	return(this->zombieName);
}
