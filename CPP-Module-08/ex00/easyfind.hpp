#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T & arg,int num)
{
	typename T::iterator it = std::find(arg.begin(),arg.end(),num);
	if(it == arg.end())
		throw num;
	else
	{
		std::cout << "The value " << *it << " was found!" << std::endl;
		return it; 
	}
}

#endif