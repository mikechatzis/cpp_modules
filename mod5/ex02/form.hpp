/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:04:01 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:15:05 by mchatzip         ###   ########.fr       */
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
		Form(Form const &other);
		virtual~Form();

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

		class	FormNotSignedException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Form: not signed.";
				}
		};
		
		std::string const &getName() const;
		bool getIfsigned() const;
		size_t getSingrade() const;
		size_t getExecgrade() const;
		bool beSigned(Bureaucrat &b);
		bool beSigned(Bureaucrat *b);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual void execute(Bureaucrat const *executor) const = 0;

	Form &operator=(Form const &other);

	friend std::ostream &operator<<(std::ostream &os, const Form &b);
	friend std::ostream &operator<<(std::ostream &os, const Form *b);
};

#endif