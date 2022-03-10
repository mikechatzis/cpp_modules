/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:10:04 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/04 15:53:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	typedef Form *(Intern::*Internfunct)(std::string const &t);
	private:
		Form *newshrubbery(std::string const &t);
		Form *newrobotomy(std::string const &t);
		Form *newpresidentialpardon(std::string const &t);
	public:
		Intern();
		~Intern(){}
		
		std::vector<std::string> types;
		Form *makeForm(std::string const &name, std::string const &target);
};

#endif