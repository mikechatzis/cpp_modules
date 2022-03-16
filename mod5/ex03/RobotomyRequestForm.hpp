/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:28:02 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:22:37 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
# define ROBOTOMY_H

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include <fstream>
#include <unistd.h>
#include "form.hpp"

class	RobotomyRequestForm : virtual public Form
{
	private:
		std::string const target;
	public:
		RobotomyRequestForm(std::string const &targ);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm(){};

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	
	void beExecuted() const;
	void execute(Bureaucrat const & executor) const;
	void execute(Bureaucrat const *executor) const;
};

#endif