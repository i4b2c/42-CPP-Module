#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

template<typename T>
class Array
{
	private:
		T * _array_t;
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> & arg);
		~Array(void);
		T &operator[](unsigned int n);
		Array<T> &operator=(const Array<T> & copy);
		unsigned int size(void) const;

		class invalidIndex: public std::exception
		{
			const char* what() const throw();
		};

};

#include "Array.tpp"

#endif