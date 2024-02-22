#include "whatever.hpp"

int main(void)
{
	{
		int num[5] = {1,2,3,4,5};
		std::string teste[3] = {
			"boas",
			"ola",
			"icaldas"
		};
		print_array(num,5,functionAddOne);
		print_array(teste,3,functionAddOne);
	}
}