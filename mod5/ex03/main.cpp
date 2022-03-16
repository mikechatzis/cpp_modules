/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:19:21 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:44:19 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i; 
	Form *newbush = i.makeForm("Presidential Pardon", "joy");
	std::cout << newbush << std::endl;

	RobotomyRequestForm drill("malfunctioning protocol droid");
	std::cout << &drill << std::endl;

	Bureaucrat b("Slave", 1);

	b.SignForm(drill);
	b.SignForm(newbush);
	// std::cout << &drill << std::endl;
	std::cout << newbush << std::endl;

	b.executeForm(drill);
	// b.executeForm(*newbush);
	if (newbush)
		newbush->execute(b);
	delete newbush;
}




		