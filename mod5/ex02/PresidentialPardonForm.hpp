/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:28:02 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 19:19:33 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDON_H
# define PARDON_H

#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include <fstream>
#include <unistd.h>
#include "form.hpp"

class	PresidentialPardonForm : virtual public Form
{
	private:
		std::string const target;
	public:
		PresidentialPardonForm(std::string const &targ);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm(){};

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	
	void beExecuted() const;
	void execute(Bureaucrat const & executor) const;
	void execute(Bureaucrat const *executor) const;
};

#endif