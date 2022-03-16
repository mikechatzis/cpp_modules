/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:19:48 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:25:51 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &targ) : Form("shrubbery", 145, 137), target(targ)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other), target(other.target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::beExecuted() const
{
	std::string s = this->target;
	std::ofstream f;
	f.open(s.append("_shrubbery"));
	std::string c = "tree >> ";
	c += s;
	system(c.c_str());
	f.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecgrade() < executor.getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}

void ShrubberyCreationForm::execute(Bureaucrat const *executor) const
{
	if (this->getExecgrade() < executor->getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}