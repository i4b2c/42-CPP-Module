#include "replace.hpp"

void copyToString(std::string avString[],char **av, int ac)
{
	for(int i = 0; i < ac ; i++)
		avString[i] = av[i];
}

int checkSyntax(int ac)
{
	if(ac != 4)
	{
		std::cerr << E_SYNTAX << std::endl;
		return (EXIT_FAILURE);
	}
	return EXIT_SUCCESS;
}

int openFiles(std::string avString[],std::ifstream &openFile,std::ofstream &openFileReplace)
{
	std::string newNameFile = avString[1];

	newNameFile.append(".replace");
	openFile.open(avString[1].c_str(),std::ifstream::in);
	if(!openFile.is_open())
	{
		if(!openFile.is_open())
		{
			std::cerr << E_OFILE << std::endl;
			return (EXIT_FAILURE);
		}
	}
	openFileReplace.open(newNameFile.c_str(),std::ofstream::out);
	if(!openFileReplace.is_open())
	{
		openFile.close();
		if(!openFile.is_open())
		{
			std::cerr << E_OFILE << std::endl;
			return (EXIT_FAILURE);
		}
	}
	return EXIT_SUCCESS;
}

void execReplace(std::string avString[],std::ifstream &openFile,std::ofstream &openFileReplace)
{
	std::string line;
	std::string newLine;
	size_t position;
	size_t positionFound;

	while(1)
	{
		newLine = "";
		if(!(std::getline(openFile, line)))
			break;
		position = 0;
		positionFound = 0;
		while(1)
		{
			positionFound = line.find(avString[2],position);
			if(positionFound == std::string::npos)
				break;
			newLine += line.substr(position, positionFound - position);
			newLine += avString[3];
			position = positionFound + avString[2].length();
		}
		newLine += line.substr(position);
		openFileReplace << newLine << std::endl;
	}
}
