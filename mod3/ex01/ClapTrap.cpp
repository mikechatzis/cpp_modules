/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 19:20:42 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->Name = name;
	this->HP = 10;
	this->EP = 10;
	this->AD = 0;
	this->HPmax = 10;
	std::cout << "Claptrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->EP)
	{
		std::cout << "ClapTrap " << this->Name << " has no energy left to attack" << std::endl;
		return; 
	}
	this->EP -= 1;
	if (this->HPmax == 10)
		std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->AD << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << this->AD << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->HP -= amount;
	if (this->HP <= 0)
	{
		this->HP = 0;
		std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage and died !" << std::endl;
		return; 
	}
	std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->EP)
	{
		std::cout << "ClapTrap " << this->Name << " has no energy left to repair itself" << std::endl;
		return; 
	}
	this->EP -= 1;
	this->HP += amount;
	if (this->HP > this->HPmax)
		this->HP = this->HPmax;
	std::cout << "ClapTrap " << this->Name << " repaired itself for " << amount << " HP !" << std::endl;
}

void ClapTrap::setData(const std::string& name, int HP, int EP, int AD, int HPmax)
{
	this->Name = name; this->HP = HP; this->EP = EP;
	this-> AD = AD; this->HPmax = HPmax;
}

std::string &ClapTrap::getName()
{
	return(this->Name);
}