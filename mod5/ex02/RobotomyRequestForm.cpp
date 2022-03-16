/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:19:48 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:23:31 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &targ) : Form("robotomy", 72, 45), target(targ)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other), target(other.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::beExecuted() const
{
	srand(time(NULL));
	bool TrueFalse = (rand() % 100) < 75;
	std::cout << "Vzzzzzzzzziiiiiiiiiiiiiiiiiiiiii" << std::endl;
	sleep(2);
	std::cout << "Vzzzzzzzzziawwwwwwwooooooooorrrrrrrrr" << std::endl;
	sleep(2);
	std::cout << "'''Crack'''" << std::endl;
	sleep(2);
	if (TrueFalse)
		std::cout << "Target: "<< this->target << ", Robotomy successful" << std::endl;
	else
		std::cout<< "Target: "<< this->target << ", Robotomy failed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecgrade() < executor.getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}

void RobotomyRequestForm::execute(Bureaucrat const *executor) const
{
	if (this->getExecgrade() < executor->getGrade())
		throw(Bureaucrat::GradeTooLowException());
	if (!this->getIfsigned())
		throw(Form::FormNotSignedException());
	else
		this->beExecuted();
}