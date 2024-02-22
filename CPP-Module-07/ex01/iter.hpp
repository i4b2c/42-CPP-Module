#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

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