#include <iostream>
#include <cstdlib>
#include "MutantStack.hpp"

int main(void)
{
	{
		std::cout << "Testing with normal iterators" << std::endl << std::endl;
		MutantStack<int> teste;
		MutantStack<int>::stack<int>::container_type::iterator it,itn;

		teste.push(10);
		teste.push(20);
		teste.push(30);
		teste.push(40);

		it = teste.begin();
		itn = teste.end();

		while(it != itn)
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Testing with reverse iterators" << std::endl << std::endl;
		MutantStack<int> teste;
		MutantStack<int>::stack<int>::container_type::reverse_iterator rit, ritn;

		teste.push(10);
		teste.push(20);
		teste.push(30);
		teste.push(40);

		rit = teste.rbegin();
		ritn = teste.rend();

		while(rit != ritn)
		{
			std::cout << *rit << std::endl;
			rit++;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Testing with const iterators" << std::endl << std::endl;
		MutantStack<int> teste;


		teste.push(10);
		teste.push(20);
		teste.push(30);
		teste.push(40);

		MutantStack<int>::stack<int>::container_type::const_iterator cit = teste.cbegin();
		MutantStack<int>::stack<int>::container_type::const_iterator citn = teste.cend();

		while(cit != citn)
		{
			std::cout << *cit << std::endl;
			cit++;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Testing with const reverse iterators" << std::endl << std::endl;
		MutantStack<int> teste;

		teste.push(10);
		teste.push(20);
		teste.push(30);
		teste.push(40);

		MutantStack<int>::stack<int>::container_type::const_reverse_iterator crit = teste.crbegin();
		MutantStack<int>::stack<int>::container_type::const_reverse_iterator critn = teste.crend();

		while(crit != critn)
		{
			std::cout << *crit << std::endl;
			crit++;
		}
	}
	return EXIT_SUCCESS;
}