/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:28:02 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/03 15:33:22 by mchatzip         ###   ########.fr       */
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
		~RobotomyRequestForm(){};
	
	void beExecuted() const;
	void execute(Bureaucrat const & executor) const;
	void execute(Bureaucrat const *executor) const;
};

#endif