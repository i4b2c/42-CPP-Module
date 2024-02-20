#include <iostream>

template<typename T>
class Array
{
	private:
		T _array_t[];
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int n);
};

int main(void)
{
	int * p = new int();
	std::cout << *p << std::endl;
}