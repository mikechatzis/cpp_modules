/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:07:58 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:30:22 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->types.push_back("shrubbery");
	this->types.push_back("robotomy");
	this->types.push_back("Presidential Pardon");
}

Intern::Intern(Intern const &other)
{
	this->types = other.types;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Form *Intern::newshrubbery(std::string const &t)
{
	return (new ShrubberyCreationForm(t));
}
Form *Intern::newrobotomy(std::string const &t)
{
	return (new RobotomyRequestForm(t));
}
Form *Intern::newpresidentialpardon(std::string const &t)
{
	return (new PresidentialPardonForm(t));
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	Internfunct f[] = {&Intern::newshrubbery, &Intern::newrobotomy, &Intern::newpresidentialpardon};
	size_t i = -1;
	while (++i < this->types.size())
		if (this->types[i] == name)
			break ;
	if (i == this->types.size())
	{
		std::cout << "Form type not found\n";
		return NULL;
	}
	return ((this->*f[i])(target));
}