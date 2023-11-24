#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string avString[ac];
	int i;

	if(ac != 4)
	{
		std::cerr << "Syntax Error: ./exe [file] [string 1] [string 2]" << std::endl;
		return -1;
	}
	for(i = 0; i < ac ; i++)
	{
		avString[i] = av[i];
	}

	std::ifstream openFile(avString[1]);
	std::ofstream openFileReplace(avString[1] + ".replace");
	if(!openFile.is_open())
	{
		std::cerr << "Error opening the file" << std::endl;
		return -1;
	}
	else
	{
		std::string line;
		while(1)
		{	
			std::string newLine = "";
			std::getline(openFile, line);
			if(line == "")
				break;
			size_t position = 0;
			size_t positionFound = 0;
			while(line.find(avString[2],position) != std::string::npos)
			{

				newLine += line.substr(position, positionFound - position);
				newLine += avString[3];
				position = positionFound + avString[2].length();
			}
			newLine += line.substr(position);
			openFileReplace << newLine << std::endl;
		}
	}
	openFileReplace.close();
	openFile.close();
	return 0;
}
