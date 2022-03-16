/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:31:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:49:02 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <map>
#include <algorithm>
#include <vector>

class Span
{
	private:
		size_t N;
		std::vector<int> v;
	public:
		Span(size_t n);
		Span(Span const & other);
		~Span();

		class	SpanFilledException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class	NoSpanException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		Span &operator=(Span const &other);

		void addNumber(int i);
		
		template<typename InputIterator>
		void addNumber(InputIterator begin, InputIterator end){
			if (std::distance(begin, end) + this->v.size() > this->N)
				throw Span::SpanFilledException();
			this->v.insert(this->v.end(), begin, end);
		}
		
		size_t shortestSpan();
		size_t longestSpan();
};

#endif