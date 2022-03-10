/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:04:01 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/03 12:13:09 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class	Form
{
	private:
		std::string const name;
		bool issigned;
		size_t const reqsigngrade;
		size_t const reqexecgrade;
	public:
		Form(std::string const &nam, size_t const signg, size_t const execg);
		~Form();

		class	GradeTooLowException : public std::exception
		{
			public:		
				const char * what() const throw()
				{
					return "Form: Grade too low.";
				}
		};
		
		class	GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Form: Grade too high.";
				}
		};
		
		std::string const &getName();
		bool getIfsigned();
		size_t getSingrade();
		size_t getExecgrade();
		bool beSigned(Bureaucrat &b);
		bool beSigned(Bureaucrat *b);

	friend std::ostream &operator<<(std::ostream &os, const Form &b);
	friend std::ostream &operator<<(std::ostream &os, const Form *b);
};

#endif