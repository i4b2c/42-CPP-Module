#include "Serialize.hpp"

int	main(int ac, char **av)
{
	if(ac > 1 && av)
	{
		std::cerr << "Error: No arguments required" << std::endl;
		return EXIT_FAILURE;
	}
	Data data;
	uintptr_t ptr;
	Data * dataDeserialize;

	data.data_str = "Hello World!";
	ptr = Serialize::serialize(&data);
	dataDeserialize = Serialize::deserialize(ptr);

	std::cout << std::string(18,'-') << "Data" << std::string(18,'-') << std::endl;
	std::cout << "address serialize data: " << &data << std::endl;
	std::cout << "data value str: " << data.data_str << std::endl;
	std::cout << std::string(40,'-') << std::endl << std::endl;

	std::cout << std::string(15,'-') << "Uintptr_t" << std::string(16,'-') << std::endl;
	std::cout << "uintptr_t data: " << ptr << std::endl;
	std::cout << "uintptr_t data in hex: 0x" << std::hex << ptr << std::endl;
	std::cout << std::string(40,'-') << std::endl << std::endl;
	
	std::cout << std::string(12,'-') << "Deserialize Data" << std::string(12,'-') << std::endl;
	std::cout << "address deserialize data: " << dataDeserialize << std::endl;
	std::cout << "deserialize data value str: " << dataDeserialize->data_str << std::endl;
	std::cout << std::string(40,'-') << std::endl;

    return EXIT_SUCCESS;
}