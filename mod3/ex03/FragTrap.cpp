/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:51:15 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/25 16:45:56 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const name)
{
	this->setData(name, 100, 100, 30, 100);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & other)
{
	this->setData(other.getName(), 100, 100, 30, 100);
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->setData(other.getName(), 100, 100, 30, 100);
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " accepted a high-five !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->getEP())
	{
		std::cout << "FragTrap " << this->getName() << " has no energy left to attack" << std::endl;
		return; 
	}
	this->reduceEP();
	std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing " << this->getAD() << " points of damage!" << std::endl;
}