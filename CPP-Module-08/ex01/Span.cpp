#include "Span.hpp"

Span::Span(unsigned int num)
: _max_numbers(num)
{
	// std::cout << "Span created" << std::endl;
}

Span::Span(unsigned int num , int value)
: _span_numbers(num),_max_numbers(num)
{
	std::fill(this->_span_numbers.begin(),this->_span_numbers.end(),value);
}

Span::~Span(void)
{
	// std::cout << "Span destroyed" << std::endl;
}

void Span::addNumber(int num)
{
	if(this->_span_numbers.size() >= this->_max_numbers)
		throw std::exception();
	this->_span_numbers.push_back(num);
}

int Span::shortestSpan(void) const
{
	std::vector<int> copy(this->_span_numbers);
	std::sort(copy.begin(),copy.end());
	int min = 0;
	std::vector<int>::iterator it, itn;
	itn = copy.end();
	for(it = copy.begin();it != itn;++it)
	{
		if(it == copy.begin())
			min = *(it+1) - *it;
		else if(it+1 != itn)
		{
			if(*(it+1) - *it < min)
				min = *(it+1) - *it;
		}
	}
	return min;
}

int Span::longestSpan(void) const
{
	std::vector<int> copy(this->_span_numbers);
	std::sort(copy.begin(),copy.end());
	return (*(copy.end()-1) - *(copy.begin()));
}