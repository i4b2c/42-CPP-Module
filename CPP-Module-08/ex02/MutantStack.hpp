#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

// #ifndef DEBUG_MODE
// # define DEBUG_MODE 1
// #endif // DEBUG_MODE

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		
		typedef typename std::stack<T>::container_type Container;

		typedef typename Container::iterator iterator;

		iterator begin();
		iterator end();

		typedef typename Container::reverse_iterator reverse_iterator;

		reverse_iterator rbegin();
		reverse_iterator rend();

		typedef typename Container::const_iterator const_iterator;

		const_iterator cbegin();
		const_iterator cend();

		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		const_reverse_iterator crbegin();
		const_reverse_iterator crend();
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	#ifdef DEBUG_MODE
	std::cout << "MutantStack constructor called" << std::endl;
	#endif	
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	#ifdef DEBUG_MODE
	std::cout << "MutantStack destructor called" << std::endl;
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

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cbegin()
{
	return MutantStack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::cend()
{
	return MutantStack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crbegin()
{
	return MutantStack<T>::c.rbegin();
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::crend()
{
	return MutantStack<T>::c.rend();
}

#endif //MUTANTSTACK_HPP