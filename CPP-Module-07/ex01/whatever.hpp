#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//example of function
template <typename T>
void functionAddOne(T num)
{
	num += 33;
}

template <typename T, size_t N>
void print_array(T (& array)[N], size_t length, void (*func)(T &))
{
	size_t i = 0;
	while(i < length)
	{
		func(array[i]);
		std::cout << array[i] << std::endl;
		i++;
	}
}


#endif