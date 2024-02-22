#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
const char * Array<T>::invalidIndex::what() const throw()
{
	return "Invalid index size";
}

template<typename T>
Array<T> & Array<T>::operator=(const Array<T> & copy)
{
	this->_size = copy.size();
	if(this->_array_t)
		delete [] this->_array_t;
	if(copy.size() == 0)
		return *this;
	else
	{
		this->_array_t = new T[copy.size()];
		this->_size = copy.size();
		for(size_t i = 0; i < copy.size(); i++)
			this->_array_t[i] = copy._array_t[i];
	}
	return *this;
}

template<typename T>
Array<T>::Array(void)
: _array_t(0), _size(0)
{
	std::cout << "created with size 0" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
: _array_t(new T[n]), _size(n)
{
	std::cout << "created with size " << n << std::endl;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->_array_t;
	std::cout << "destroyed" << std::endl;
}

template<typename T>
Array<T>::Array(const Array<T> & arg)
{
	this->_size = arg.size();
	this->_array_t = new T[arg.size()];
	for(size_t i = 0; i < this->_size; i++)
		this->_array_t[i] = arg._array_t[i];
}

template<typename T>
unsigned int Array<T>::size(void) const { return _size; };

template<typename T>
std::ostream &operator<<(std::ostream & stream,const Array<T> & arg)
{
	stream << std::endl <<"size: " << arg.getSize() << std::endl;
	return stream;
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if(n >= this->_size)
		throw Array::invalidIndex();
	return this->_array_t[n];
}

#endif