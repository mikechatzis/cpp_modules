/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:01:03 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/02 13:19:25 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <iomanip>
#include <string>

class Bureaucrat
{
private:
	std::string const name;
	size_t grade;
public:
	Bureaucrat(std::string const &nam, size_t grad);
	~Bureaucrat();
	std::string getName();
	size_t getGrade();
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
	
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat *b);
};

#endif