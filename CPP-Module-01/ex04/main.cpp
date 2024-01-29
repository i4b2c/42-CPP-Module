#include "replace.hpp"

int main(int ac, char **av)
{
	std::string avString[ac];
	std::ifstream openFile;
	std::ofstream openFileReplace;

	if(checkSyntax(ac) == EXIT_FAILURE)
		return EXIT_FAILURE;
	copyToString(avString,av,ac);
	if(openFiles(avString,openFile,openFileReplace) == EXIT_FAILURE)
		return EXIT_FAILURE;
	execReplace(avString,openFile,openFileReplace);
	openFileReplace.close();
	openFile.close();
	return 0;
}
