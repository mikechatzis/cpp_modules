/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:41:00 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 11:29:05 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria *AMateria::clone() const
{
	std::cout << "this is a virtual representation of the clone function, to be used by non abstract AMaterias" << std::endl;
	return 0;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

/* Ice materia functions */

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const
{
	Ice *clone = new Ice();
	return(clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}
std::string const & Ice::getType() const
{
	return(this->type);
}

/* Cure materia functions */

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone() const
{
	Cure *clone = new Cure();
	return(clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "Heals " << target.getName() << "'s wounds" << std::endl;
}

std::string const & Cure::getType() const
{
	return(this->type);
}
