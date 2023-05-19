#include "header.hpp"
//using namespace std

int main(void)
{
	int j = 0;
	int i = 0;
	std::string contacts[8];
	std::string choosen_option;
	std::string search;
	std::string options[3] = {
		"ADD",
		"SEARCH",
		"EXIT"
	};
	while(1)
	{
		std::cout << "Escolha um das opcoes:\n"
			<< options[0] << std::endl << options[1] << std::endl << options[2] << std::endl << std::endl;
		std::cin >> choosen_option;
		if(choosen_option == options[0])
		{
			std::cout << "Nome do contacto: ";
			std::cin >> contacts[i];
			if(i < 7)
				i++;
		}
		else if(choosen_option == options[1])
		{
			std::cout << "Digite o nome do contacto para proucurar: ";
			std::cin >> search;
			j = 0;
			while(j < 8)
			{
				if(contacts[j] == search)
					break ;
				j++;
			}
			if(j == 8 && contacts[j] != search)
				std::cout << "Nao foi possivel encontrar o contacto\n";
			else
				std::cout << "foi encontrado e o contacto numero " << j+1 << std::endl;
		}
		else if(choosen_option == options[2])
			break ;
		else
			std::cout << "Escolha uma opcao valida\n";
		std::cout << std::endl;
	}
}
