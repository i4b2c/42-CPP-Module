#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#define E_OFILE "Error: opening the file."
#define E_SYNTAX "Syntax Error: ./replace [file] [string 1] [string 2]."
#define E_PARAM "Error: the find and replace strings can't be empty."

void copyToString(std::string avString[],char **av, int ac);
int checkSyntax(int ac,char **av);
int openFiles(std::string avString[],std::ifstream &openFile,std::ofstream &openFileReplace);
void execReplace(std::string avString[],std::ifstream &openFile,std::ofstream &openFileReplace);

#endif
