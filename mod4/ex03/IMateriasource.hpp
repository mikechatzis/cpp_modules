/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriasource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:37:03 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 13:08:58 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include <string>
#include <iostream>

class AMateria;

class IMateriaSource
{
	protected:
		AMateria *templ[4];
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : virtual public IMateriaSource
{
	public:
		~MateriaSource();
		void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif