/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:19:21 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/02 13:22:44 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Max", 151);
		std::cout << a << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b("Bob", 0);
		std::cout << b << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat c("Chad", 150);
	Bureaucrat d("Cuck", 1);
	try
	{
		c.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cerr << c.getName() << ": " << e.what() << '\n';
	}
	std::cout << c << std::endl;
	try
	{
		d.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cerr << d.getName() << ": " << e.what() << '\n';
	}
	std::cout << d << std::endl;

	Bureaucrat *e = new Bureaucrat("Alex", 12);
	std::cout << e << std::endl;
	delete e;
}




		