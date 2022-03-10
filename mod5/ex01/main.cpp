/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:19:21 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/02 13:11:08 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "form.hpp"

int main()
{
	Bureaucrat a("Mariah", 12);
	Form f("std form", 9, 9);
	Form f2("second form", 13, 13);

	try
	{
		a.SignForm(f);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;	
	}

	std::cout << "\n" << f << "\n" << std::endl;
	
	a.SignForm(f2);
	std::cout << "\n" << f2 << "\n" << std::endl;

	try
	{
		Form q("Noform", 0, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Form q("Noform", 154, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form q("Noform", 132, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form q("Noform", 132, 167);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}




		