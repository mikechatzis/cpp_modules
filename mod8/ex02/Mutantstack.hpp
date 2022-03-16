/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:32:10 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:49:38 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &other);
		virtual~MutantStack();

		MutantStack<T> &operator=(MutantStack<T> const &other)
		{
			this->c = other.c;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(){
			return this->c.begin();
		}
		const_iterator begin() const{
			return this->c.begin();
		}
		
		reverse_iterator rbegin(){
			return this->c.rbegin();
		}
		const_reverse_iterator rbegin() const{
			return this->c.rbegin();
		}

		iterator end(){
			return this->c.end();
		}
		const_iterator end() const{
			return this->c.end();
		}

		reverse_iterator rend(){
			return this->c.rend();
		}
		const_reverse_iterator rend() const{
			return this->c.rend();
		}
};

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other) : std::stack<T>(other)
{
}

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif