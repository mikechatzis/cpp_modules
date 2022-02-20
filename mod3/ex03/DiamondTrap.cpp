/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:27:45 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/20 17:38:28 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	std::string clapname;
	this->Name = name;
	name.append("_clap_name");
	this->setData(name, FragTrap::HP, ScavTrap::EP, FragTrap::AD, FragTrap::HPmax);
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name << std::endl << "My parent's name is " << this->getName() << std::endl;
}