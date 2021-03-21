#include "Span.hpp"
#include <algorithm>
#include <limits>

void Span::addnumber(int n) {
	if (_current >= this->size())
		throw OverFlowsException();
	vector<int>::operator[](_current) = n;
	_current++;
}

void Span::addnumber(int n1, int n2) {
	for (;n1<n2;)
	{
		addnumber(n1);
		n1++;
	}
}

Span::Span(unsigned int n)
	: vector(n),
	  _current(0)
{

}

Span &Span::operator=(const Span &span) {
	vector<int>::operator=(span);
	_current = span._current;
	return (*this);
}

Span::Span(const Span &span)
{
	*this = span;
}

Span::~Span()
{

}

int Span::longestSpan()
{
	int maxSpan = 0;
	if (_current <= 1)
		throw FewMembersExecetion();

	for (size_t i = 0 ; i < _current - 1; i++)
	{
		maxSpan = std::max(abs((*this)[i] - (*this)[i + 1]), maxSpan);
	}
	return (maxSpan);
}

int Span::shortestSpan() {
	int minSpan = __INT_MAX__;

	for (size_t i = 0 ; i < _current - 1; i++)
	{
		minSpan = std::min(abs((*this)[i] - (*this)[i + 1]), minSpan);
	}
	return (minSpan);
}


char const *Span::OverFlowsException::what() const throw() {
	return ("!Exception!: Span is already full");
}

char const *Span::FewMembersExecetion::what() const throw() {
	return ("!Exception!: Not enaugh members to calculate span");
}
