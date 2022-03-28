/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:37:37 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/24 16:22:06 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->setData(name, 100, 50, 20, 100);
	this->gatekeep = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	this->setData(other.getName(), 100, 50, 20, 100);
	this->gatekeep = false;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setData(other.getName(), 100, 50, 20, 100);
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
	if (!this->getEP())
	{
		std::cout << "ScavTrap " << this->getName() << " has no energy left to attack" << std::endl;
		return; 
	}
	this->reduceEP();
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAD() << " points of damage!" << std::endl;
}