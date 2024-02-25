#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

#ifndef DEBUG_MODE
# define DEBUG_MODE 1
#endif // DEBUG_MODE

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		
		typename std::stack<T>::container_type::iterator begin();
		typename std::stack<T>::container_type::iterator end();

};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	#ifdef DEBUG_MODE
	std::cout << "MutantStack constructor called" << std::endl;
	#endif	
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return this->c.end();
}

#endif //MUTANTSTACK_HPP