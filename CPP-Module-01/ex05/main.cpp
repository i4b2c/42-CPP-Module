#include "Harl.hpp"

int main(void)
{
	std::string level;
	Harl harl;

	std::cout << "write the a harl level: "; std::cin >> level;
	harl.complain(level);
}
