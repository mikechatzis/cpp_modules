/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 15:49:05 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	this->Name = name;
	this->HP = 10;
	this->EP = 10;
	this->AD = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->Name = other.Name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->Name = other.Name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->EP)
	{
		std::cout << "ClapTrap " << this->Name << " has no energy left to attack" << std::endl;
		return; 
	}
	this->EP -= 1;
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->AD << " points of damage!" << std::endl;
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
	if (this->HP > 10)
		this->HP = 10;
	std::cout << "ClapTrap " << this->Name << " repaired itself for " << amount << " HP !" << std::endl;
}