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

int main(void)
{
	int num[5] = {1,2,3,4,5};
	std::string teste[3] = {
		"boas",
		"ola",
		"icaldas"
	};
	print_array(num,5,functionAddOne);
	print_array(teste,3,functionAddOne);
}