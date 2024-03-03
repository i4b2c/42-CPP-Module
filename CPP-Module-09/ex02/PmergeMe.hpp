#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
#include <climits>

template<typename T>
class PMerge
{
	private:
		T data;
	public:
		PMerge(char **data);
		virtual ~PMerge(void);
		void printArray(void) const;
		std::vector<T>  dividePair(void);
		void MergeInsertionSort(void);
		static void organizeInsertion(std::vector<T> & arg);
		static std::vector<T> finishMerge(std::vector<T> arg);
};

template <typename T>
std::vector<T> PMerge<T>::finishMerge(std::vector<T> arg)
{
    std::vector<T> temp;
    for(size_t i = 0; i < arg.size(); i += 2)
    {
        T temp_array;
		if(i + 1 >= arg.size())
		{
			while(arg[i].size() > 0)
			{
				temp_array.insert(temp_array.begin(),arg[i].back());
				arg[i].pop_back();
			}
		}
		else
		{
			while(arg[i].size() > 0 || arg[i + 1].size() > 0)
			{
				if(arg[i].size() == 0)
				{
					temp_array.insert(temp_array.begin(),arg[i+1].back());
					arg[i+1].pop_back();
				}
				else if(arg[i + 1].size() == 0)
				{
					temp_array.insert(temp_array.begin(),arg[i].back());
					arg[i].pop_back();
				}
				else if(arg[i].back() >= arg[i+1].back())
				{
					temp_array.insert(temp_array.begin(),arg[i].back());
					arg[i].pop_back();
				}
				else if(arg[i].back() < arg[i+1].back())
				{
					temp_array.insert(temp_array.begin(),arg[i+1].back());
					arg[i+1].pop_back();
				}
			}
		}
        temp.push_back(temp_array);
    }
    return temp;
}

template <typename T>
void PMerge<T>::organizeInsertion(std::vector<T> & arg)
{
	for (size_t i = 0; i < arg.size(); ++i)
	{
		for(size_t idx = 0;idx < arg[i].size();++idx)
		{
			if(arg[i].size() > 1 && arg[i][0] > arg[i][1])
			{
				int num = arg[i][0];
				arg[i][0] = arg[i][1];
				arg[i][1] = num;
			}
		}
	}
}

template<typename T>
void PMerge<T>::MergeInsertionSort(void)
{
	std::vector<T> temp_data;
	temp_data = this->dividePair();
	PMerge::organizeInsertion(temp_data);
	while(temp_data.size() > 1)
		temp_data = finishMerge(temp_data);
	for(size_t i = 0;i < this->data.size();++i)
		data.at(i) = temp_data[0].at(i);
}

template<typename T>
void PMerge<T>::printArray(void) const
{
	for (size_t i = 0; i < this->data.size(); ++i)
	{
		std::cout << this->data.at(i);
		if(!(i + 1 == this->data.size()))
			std::cout << ' ';
	}
	std::cout << std::endl;
}

template<typename T>
PMerge<T>::PMerge(char **data)
: data()
{
	for(;*data != NULL;++data)
		this->data.push_back(atoi(*data));
}

template<typename T>
PMerge<T>::~PMerge(void) {};

template<typename T>
std::vector<T> PMerge<T>::dividePair(void)
{
	std::vector<T> temp;
	for(size_t i = 0;i <= this->data.size() - 1; i += 2)
	{
		T temp_ult;
		temp_ult.push_back(data.at(i));
		if(i + 1 < data.size())
			temp_ult.push_back(data.at(i+1));
		temp.push_back(temp_ult);
	}
	return temp;
}

bool checkNumbers(char **av);

bool checkNumbers(char **av)
{
	int num;
	char *buffer;
	while(*av)
	{
		num = strtol(*av,&buffer,10);
		if(num < 0 || num > INT_MAX || buffer[0])
			return false;
		av++;
	}
	return true;
}

#endif