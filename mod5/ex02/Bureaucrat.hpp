/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:01:03 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:37:45 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <iomanip>
#include <string>

class Form;

class Bureaucrat
{
private:
	std::string const name;
	size_t grade;
public:
	Bureaucrat(std::string const &nam, size_t grad);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();
	std::string getName() const;
	size_t getGrade() const;
	void incrementGrade();
	void decrementGrade();

	class	GradeTooLowException : public std::exception
	{
		public:
			const char * what() const throw()
			{
				return "Bureaucrat: Grade too low.";
			}
	};
	
	class	GradeTooHighException : public std::exception
	{
		public:
			const char * what() const throw()
			{
				return "Bureaucrat: Grade too high.";
			}
	};

	void SignForm(Form &f);
	void SignForm(Form *f);
	void executeForm(Form const & form);

	Bureaucrat &operator=(Bureaucrat const &other);
	
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat *b);
};

#endif