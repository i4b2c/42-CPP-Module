#include "easyfind.hpp"

int main(void)
{
	{
		std::cout << "Testing with vector: " << std::endl << std::endl;
		std::vector<int> test;
		test.push_back(10);
		test.push_back(20);
		try
		{
			std::vector<int>::iterator it = easyfind(test,20);
			std::cout << *it << std::endl << std::endl;
		}
		catch(int & num)
		{
			std::cout << "Error: the value " << num << " was not found!" << std::endl << std::endl;
		}
	}
	{
		std::cout << "Testing with list: " << std::endl << std::endl;
		std::list<int> test;
		test.push_back(10);
		test.push_back(20);
		test.push_front(100);
		try
		{
			std::list<int>::iterator it = easyfind(test,100);
			std::cout << *it << std::endl << std::endl;
		}
		catch(int & num)
		{
			std::cout << "Error: the value " << num << " was not found!" << std::endl << std::endl;
		}
	}
	{
		std::cout << "Testing with set: " << std::endl << std::endl;
		std::set<int> test;
		test.insert(10);
		test.insert(20);
		test.insert(30);
		try
		{
			std::set<int>::iterator it = easyfind(test,25);
			std::cout << *it << std::endl << std::endl;
		}
		catch(int & num)
		{
			std::cout << "Error: the value " << num << " was not found!" << std::endl << std::endl;
		}
	}
	return 0;
}