/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:27:45 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:17:46 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{

	this->Name = name;
	name.append("_clap_name");
	this->setData(name, FragTrap::HP, ScavTrap::EP, FragTrap::AD, FragTrap::HPmax);
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	std::string name = other.Name;
	this->Name = other.Name;
	name.append("_clap_name");
	this->setData(name, FragTrap::HP, ScavTrap::EP, FragTrap::AD, FragTrap::HPmax);
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	std::string name = other.Name;
	this->Name = other.Name;
	name.append("_clap_name");
	this->setData(name, FragTrap::HP, ScavTrap::EP, FragTrap::AD, FragTrap::HPmax);
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name << std::endl << "My parent's name is " << this->getName() << std::endl;
}