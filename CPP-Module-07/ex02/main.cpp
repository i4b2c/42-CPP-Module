#include "Array.hpp"

int main(void)
{
	{
		Array<double> teste(10);
		Array<int> teste1(1);
		Array<char> teste2(2);
		Array<float> teste3(4);
		Array<std::string> teste4(2);

		try
		{
			teste[0] = 1.0;
			teste1[0] = 1;
			teste2[0] = 'a';
			teste3[0] = 4.4f;
			teste4[0] = "Hello World!";
			std::cout << teste[0] << std::endl;
			std::cout << teste1[0] << std::endl;
			std::cout << teste2[0] << std::endl;
			std::cout << teste3[0] << std::endl;
			std::cout << teste4[0] << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int> teste(1);
		teste[0] = 1;
		Array<int> teste1(teste);

		teste[0] = 3;
		teste1[0] = 2;
		std::cout << teste[0] << " " << teste1[0] << std::endl;
	}
	{
		Array<int> teste(1);
		teste[0] = 1;
		Array<int> teste1;

		teste1 = teste;
		// teste[0] = 3;
		// teste1[0] = 2;
		std::cout << teste[0] << " " << teste1[0] << std::endl;
	}
	{
		Array<int> teste;

		try
		{
			teste[0] = 1;
			std::cout << teste[0] << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}