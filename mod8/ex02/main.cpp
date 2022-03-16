/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:12:34 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 13:23:19 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << "-----------------" << std::endl;
	
	MutantStack<int> s(mstack);
	s.push(100);
	s.push(1324);
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.size() << std::endl;
	s.push(798);
	s.push(50);
	s.push(665);
	//[...]
	s.push(0);
	MutantStack<int>::iterator ita = s.begin();
	MutantStack<int>::iterator itea = s.end();
	++ita;
	--ita;
	while (ita != itea)
	{
	std::cout << *ita << std::endl;
	++ita;
	}
	return 0;
}