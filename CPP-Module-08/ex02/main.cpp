#include <iostream>
#include <cstdlib>
#include "MutantStack.hpp"

int main(void)
{
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
	return EXIT_SUCCESS;
}