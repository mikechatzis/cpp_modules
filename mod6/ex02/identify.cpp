/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:28:28 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/27 19:51:53 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base *generate()
{
	srand(time(NULL));
	
	int r = 1 + (rand() % 3);
	Base *b;
	switch (r)
	{
		case 1:
			b = new A();
			break;
			
		case 2:
			b = new B();
			break;

		case 3:
			b = new C();
			break;
	
		default:
			std::cerr << "Error" << std::endl;
			return NULL;
			break;
	}
	return b;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class is of type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class is of type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class is of type: C" << std::endl;
	else
		std::cout << "Class type unknown or pointer is NULL" << std::endl;
}

void identify(Base &p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "Class is of type: A" << std::endl;
	}
	catch(std::exception &e){}
	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "Class is of type: B" << std::endl;
	}
	catch(std::exception &e){}
	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "Class is of type: C" << std::endl;
	}
	catch(std::exception &e){}
}
