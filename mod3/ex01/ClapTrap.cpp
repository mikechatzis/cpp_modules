/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/24 17:16:10 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->Name = other.Name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
	std::cout << "Copy constructor called" << std::endl;
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
	if (!this->getEP())
	{
		std::cout << "ClapTrap " << this->getName() << " has no energy left to attack" << std::endl;
		return; 
	}
	this->reduceEP();
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->getAD() << " points of damage!" << std::endl;
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

std::string ClapTrap::getName() const
{
	return(this->Name);
}

int ClapTrap::getHP() const
{
	return(this->HP);
}

int ClapTrap::getEP() const
{
	return(this->EP);
}

int ClapTrap::getAD() const
{
	return(this->AD);
}

void ClapTrap::reduceEP()
{
	if (this->EP > 0)
		this->EP -= 1;
}
