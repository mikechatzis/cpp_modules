/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:37:37 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:04:30 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->HP = 22;
	this->EP = 22;
	this->AD = 22;
	this->HPmax = 22;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->HP = 22;
	this->EP = 22;
	this->AD = 22;
	this->HPmax = 22;
	this->setData(name, 22, 22, 22, 22);
	this->gatekeep = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	this->HP = 22;
	this->EP = 22;
	this->AD = 22;
	this->HPmax = 22;
	this->setData(other.getName(), 22, 22, 22, 22);
	this->gatekeep = false;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setData(other.getName(), 22, 22, 22, 22);
	this->gatekeep = other.gatekeep;
	return *this;
}

void ScavTrap::guardGate()
{
	if (this->gatekeep == true)
	{
		std::cout << "ScavTrap " << this->getName() << " is already guarding the gateZ !" << std::endl;
		return;
	}
	this->gatekeep = true;
	std::cout << "ScavTrap " << this->getName() << " now guards the gateZ !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->EP)
	{
		std::cout << "DiamondTrap " << this->getName() << " has no energy left to attack" << std::endl;
		return; 
	}
	this->EP -= 1;
		std::cout << "DiamondTrap " << this->getName() << " attacks " << target << " causing " << this->AD << " points of damage!" << std::endl;
}
