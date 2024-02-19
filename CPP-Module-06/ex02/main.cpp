#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>
#include <time.h>

Base * generate(void)
{
	std::srand(std::time(NULL));
	int num_random = std::rand() % 3;
	switch (num_random)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		case 2:
			return new C;
			break;
		default:
		break;
	}
	return NULL;
}

int main(void)
{
	Base * teste = generate();
	delete teste;
	return 0;
}
