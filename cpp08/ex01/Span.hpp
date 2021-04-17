#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
private:
	std::vector<int> seq;
	unsigned long n;
	Span();
public:
//coplien
	~Span();
	Span(Span const &src);
	Span & operator=(Span const & rhs);

	Span(unsigned int n);
	void	addNumber(int num) throw(std::exception);
	template<typename IT>
	void	addNumber(IT start, IT end) throw(std::exception) {
		if (std::distance(start, end) > static_cast<long>(n - this->seq.capacity()))
			throw std::runtime_error("Space left smaller");
		std::vector<int>::iterator point = this->seq.begin();
		point += this->seq.capacity();
		this->seq.insert(point, start, end);
	}
	int		shortestSpan() throw(std::exception);
	int		longestSpan() throw(std::exception);

//getters
	std::vector<int> & getSeq();
};

#endif
