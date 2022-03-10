/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:10:04 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/03 15:33:27 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_H
# define SHRUBBERY_H

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include <fstream>
#include "form.hpp"

class	ShrubberyCreationForm : virtual public Form
{
	private:
		std::string const target;
	public:
		ShrubberyCreationForm(std::string const &targ);
		~ShrubberyCreationForm(){};
	
	void beExecuted() const;
	void execute(Bureaucrat const & executor) const;
	void execute(Bureaucrat const *executor) const;
};

#endif