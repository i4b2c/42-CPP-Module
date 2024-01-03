#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

std::ostream &operator<<(std::ostream &stream, const DiamondTrap &obj)
{
	stream << "Hit points: "<< obj.getDtHitPoints() << std::endl \
	<< "Energy Points: " << obj.getDtEnergyPoints() << std::endl \
	<< "Attack Damage: " << obj.getDtAttackDamage(); 
	return stream;
}

int main(void)
{
	DiamondTrap ok("ithalo");
	ok.whoAmI();
	ok.attack("traigu");
	std::cout << ok << std::endl;
	return 0;
}
