#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "Error: Non arguments\n"; 
		return EXIT_FAILURE;
	}
	else if(!checkNumbers(av + 1))
	{
		std::cout << "Error: Invalid numeric arguments\n";
		return EXIT_FAILURE;
	}
	else
	{
		PMerge<std::vector<int> > vector_data_temp(av + 1);
		clock_t init,end;
		double time;
		std::cout << "Before: ";
		vector_data_temp.printArray();
		vector_data_temp.MergeInsertionSort();
		std::cout << "After:  ";
		vector_data_temp.printArray();

		PMerge<std::vector<int> > vector_data(av + 1);
		std::cout << "Time to process a range of " << ac-1 << " elements with std::vector : ";
		init = clock();
		vector_data.MergeInsertionSort();
		end = clock();
		time = (double)(end - init) / CLOCKS_PER_SEC;
		std::cout << std::setiosflags(std::ios::fixed) << time << " us" << std::endl;

		PMerge<std::deque<int> > deque_data(av + 1);
		std::cout << "Time to process a range of " << ac-1 << " elements with std::deque  : ";
		init = clock();
		deque_data.MergeInsertionSort();
		end = clock();
		time = (double)(end - init) / CLOCKS_PER_SEC;
		std::cout << std::setiosflags(std::ios::fixed) << time << " us" << std::endl;
	}
}