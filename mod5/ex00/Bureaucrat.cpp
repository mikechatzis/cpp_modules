/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:19:21 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/02 13:21:27 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &nam, size_t grad) : name(nam)
{
	this->grade = grad;
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName()
{
	return(this->name);
}

size_t Bureaucrat::getGrade()
{
	return(this->grade);
}

void Bureaucrat::incrementGrade()
{
	if ((this->grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if ((this->grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade += 1;
}

/* 
"<<" OPERATOR OVERLOADS,BOTH FOR CLASS REFERENCE AND POINTER
*/
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << "Bureaucrat: " << b.name << ", Grade: " << b.grade;
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat *b)
{
	os << "Bureaucrat: " << b->name << ", Grade: " << b->grade;
	return (os);
}