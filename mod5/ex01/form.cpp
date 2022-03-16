/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:18:24 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:16:59 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"
#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &os, const Form *b)
{
	std::string s;
	if (b->issigned == true)
		s = "signed";
	else
		s = "not signed";
	os << "Form: " << b->name << ", Sign status: " << s << "\nMin grade required to sign: " << b->reqsigngrade << ", Min grade required to execute: " << b->reqexecgrade;
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Form &b)
{
	std::string s;
	if (b.issigned == true)
		s = "signed";
	else
		s = "not signed";
	os << "Form: " << b.name << ", Sign status: " << s << "\nMin grade required to sign: " << b.reqsigngrade << ", Min grade required to execute: " << b.reqexecgrade;
	return (os);
}

Form &Form::operator=(Form const &other)
{
	this->issigned = other.issigned;
	return (*this);
}

Form::Form(std::string const &nam, size_t const signg, size_t const execg) : name(nam), reqsigngrade(signg), reqexecgrade(execg)
{
	this->issigned = false;
	if (this->reqexecgrade < 1 || this->reqsigngrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->reqexecgrade > 150 || this->reqsigngrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &other) : name(other.name), reqsigngrade(other.reqsigngrade), reqexecgrade(other.reqexecgrade)
{
	this->issigned = false;
	if (this->reqexecgrade < 1 || this->reqsigngrade < 1)
		throw (Form::GradeTooHighException());
	else if (this->reqexecgrade > 150 || this->reqsigngrade > 150)
		throw (Form::GradeTooLowException());
}

Form::~Form(){}

std::string const &Form::getName()
{
	return(this->name);
}

bool Form::getIfsigned()
{
	return(this->issigned);
}

size_t Form::getSingrade()
{
	return(this->reqsigngrade);
}

size_t Form::getExecgrade()
{
	return(this->reqexecgrade);
}

bool Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->getSingrade())
	{
		throw (Form::GradeTooLowException());	
		return false;
	}
	else
	{
		this->issigned = true;
		return true;
	}
}

bool Form::beSigned(Bureaucrat *b)
{
	if (b->getGrade() > this->getSingrade())
	{
		throw (Form::GradeTooLowException());	
		return false;
	}
	else
	{
		this->issigned = true;
		return true;
	}
}