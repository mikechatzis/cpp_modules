/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:41:17 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/28 15:07:06 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

Span::Span(size_t n) : N(n) 
{
}
Span::Span(Span const &other) : N(other.N)
{
	this->v.clear();
	this->v = other.v;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
	this->N = other.N;
	this->v.clear();
	this->v = other.v;
	return *this;
}

void Span::addNumber(int i)
{
	if (this->v.size() == this->N)
		throw (Span::SpanFilledException());
	this->v.push_back(i);
}

size_t Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw Span::NoSpanException();
	
	std::vector<int>::iterator f = this->v.begin();
	std::vector<int>::iterator n = ++this->v.begin();
	size_t ndiff = std::abs(*f - *n);
	while (f != this->v.end())
	{
		while(n != this->v.end())
		{
			size_t diff = std::abs(*f - *n);
			if (diff < ndiff)
				ndiff = diff;
			n++;
		}
		f++;
		if (f == this->v.end())
			break;
		n = f + 1;
	}
	return ndiff;
}

size_t Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw Span::NoSpanException();
	
	int big = *std::max_element(this->v.begin(), this->v.end());
	int small = *std::min_element(this->v.begin(), this->v.end());
	return (std::abs(big - small));
}

const char * Span::NoSpanException::what() const throw()
{
	return "Span cannot be determined. Class either empty or has only 1 element";
}

const char * Span::SpanFilledException::what() const throw()
{
	return "Not enough space for new element(s).";
}