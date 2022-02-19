/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:37:37 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 19:06:18 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->setData(name, 100, 50, 20, 100);
	this->gatekeep = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
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