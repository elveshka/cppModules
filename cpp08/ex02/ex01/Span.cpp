#include "Span.hpp"

Span::~Span() {}

Span::Span(Span const &src) {
	*this = src;
}

Span & Span::operator=(Span const & rhs) {
	if (this == &rhs)
		return *this;
	this->seq = rhs.seq;
	this->n = rhs.n;
	return *this;
}
Span::Span(unsigned int n) : n(n) {}

void	Span::addNumber(int num) throw(std::exception) {
	if (this->seq.capacity() == this->n)
		throw(std::runtime_error("Full sequence"));
	else
		this->seq.push_back(num);
}

int		Span::shortestSpan() throw(std::exception) {
	if (this->seq.capacity() < 2)
		throw std::runtime_error("Not enough elements");
	std::vector<int> tmp = this->seq;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator first = tmp.begin();
	std::vector<int>::iterator second = ++tmp.begin();
	int min = *second - *first;
	while (second != tmp.end()) {
		min = (*second - *first < min) ? *second - *first : min;
		++first;
		++second;
	}
	return min;
}

int		Span::longestSpan() throw(std::exception) {
	if (this->seq.capacity() < 2)
		throw std::runtime_error("Not enough elements");
	return *std::max_element(this->seq.begin(), this->seq.end()) - \
			*std::min_element(this->seq.begin(), this->seq.end());
}

std::vector<int> & Span::getSeq() { return this->seq; }
