#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _span_numbers;
		unsigned int _max_numbers;
	public:
		Span(unsigned int num);
		Span(unsigned int num, int value);
		~Span(void);
		void addNumber(int num);
		int shortestSpan(void) const; //vai retornar a menor distancia entre dois numeros dentro do container
		int longestSpan(void) const; //vai retornar a maior distancia entre dois numeros dentro do container
};

#endif