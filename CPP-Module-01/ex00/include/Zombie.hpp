#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string zombieName;
	public:
		Zombie(std::string newName);
		~Zombie(void);

		void setName(std::string nameToSet);
		void announce(void);

		std::string returnName(void);
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif
