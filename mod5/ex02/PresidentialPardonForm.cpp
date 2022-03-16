/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:19:48 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:20:39 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &targ) : Form("Presidential Pardon", 25, 5), target(targ)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	Form(other), target(other.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::beExecuted() const
{
	std::cout<< this->target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecgrade() < executor.getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}

void PresidentialPardonForm::execute(Bureaucrat const *executor) const
{
	if (this->getExecgrade() < executor->getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}