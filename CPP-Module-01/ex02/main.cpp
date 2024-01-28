#include <iostream>

int main(void)
{
	std::string stringNormal = "HI THIS IS BRAIN";
	
	std::string * stringPTR = &stringNormal;
	std::string & stringREF = stringNormal;

	std::cout << "String Normal address : " << &stringNormal << std::endl;
	std::cout << "String Pointer address : " << stringPTR << std::endl;
	std::cout << "String Reference address : " << &stringREF << std::endl;


	std::cout << "String Normal : " << stringNormal << std::endl;
	std::cout << "String Pointer : " << *stringPTR << std::endl;
	std::cout << "String Reference : " << stringREF << std::endl;
}
