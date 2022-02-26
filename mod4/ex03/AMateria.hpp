/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:37:03 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 11:56:26 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "ICharacter.hpp"

extern std::vector<AMateria*> patoma;

class AMateria
{
	protected:
		std::string  type;
	public:
		AMateria(){};
		AMateria(std::string const & type);
		virtual ~AMateria();
		virtual std::string const & getType() const = 0; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : virtual public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);
};

class Cure : virtual public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif