/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriasource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:32:45 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 13:19:52 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriasource.hpp"

void IMateriaSource::learnMateria(AMateria* m)
{
	size_t i = 0;
	while (this->templ[i])
	{
		if (this->templ[i] == m)
		{
			std::cout << "Materia template " << m->getType() << " already saved" << std::endl;
			return ;
		}
		i++;
	}
	if (i < 4)
		this->templ[i] = m->clone();
	else
		std::cout << "Template buffer full\nPlease delete an existing template to make space for a new one" << std::endl;	
}

AMateria* IMateriaSource::createMateria(std::string const & type)
{
	size_t i = 0;
	bool f = 0;
	while (i < 5)
	{
		if (this->templ[i]->getType() == type)
		{
			f = 1;
			break;
		}
		i++;	
	}
	if (f == 0)
	{
		std::cout << "Unknown Materia type" << std::endl;
		return 0;
	}
	return (this->templ[i]->clone());
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; this->templ[i]; i++)
		delete this->templ[i];
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	size_t i = 0;
	bool f = 0;
	while (i < 5)
	{
		if (this->templ[i]->getType() == type)
		{
			f = 1;
			break;
		}
		i++;	
	}
	if (f == 0)
	{
		std::cout << "Unknown Materia type" << std::endl;
		return 0;
	}
	return (this->templ[i]->clone());
}

void MateriaSource::learnMateria(AMateria* m)
{
	size_t i = 0;
	while (this->templ[i])
	{
		if (this->templ[i] == m)
		{
			std::cout << "Materia template " << m->getType() << " already saved" << std::endl;
			return ;
		}
		i++;
	}
	if (i < 4)
		this->templ[i] = m->clone();
	else
		std::cout << "Template buffer full\nPlease delete an existing template to make space for a new one" << std::endl;	
}