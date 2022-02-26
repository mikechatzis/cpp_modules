/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:41:00 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 12:17:47 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
}

std::string const & ICharacter::getName() const
{
	return(this->name);
}

void ICharacter::equip(AMateria* m)
{
	std::cout << "abstract class cannot hold item " << m->getType() << std::endl;
}	
void ICharacter::unequip(int idx)
{
	std::cout << "abstract class cannot unequip item at position " << idx << std::endl;
}
void ICharacter::use(int idx, ICharacter& target)
{
	std::cout << "abstract class cannot use item at position" << idx << " on target " << target.getName() << std::endl;
}

/* Character class functions */

Character::Character(std::string const name)
{
	this->name = name;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	 for (unsigned short i = 0; i<4; i++)
	 	if (this->inventory[i])
			delete this->inventory[i];
}

std::string const & Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	unsigned short i = 0;
	while (this->inventory[i] && i < 5)
		i++;
	if (i < 4)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->inventory[i] == m)
			{
				std::cout << "The materia you try to equip is already equiped at slot " << i << std::endl;
				return ;
			}
		}
		this->inventory[i] = m;	
		std::cout << "Material " << m->getType() << " successfully equiped at slot " << i << std::endl;
	}
	else
		std::cout << "Character " << this->name << " can't hold more materials\nInventory is full" << std::endl;
	
}
void Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		patoma.insert(patoma.begin(), this->inventory[idx]);
		std::cout << "Character " <<  this->getName() << " dropped item " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = 0;
	}
	else
		std::cout << "Nothing to unequip at inventory position: " << idx << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		std::cout << "Character " << this->getName() << " used " << this->inventory[idx]->getType() << " on target " << target.getName() << std::endl;
	else
		std::cout << "No suitable item" << std::endl;
}