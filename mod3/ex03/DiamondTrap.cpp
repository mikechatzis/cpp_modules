/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:27:45 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/25 16:53:20 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->Name = name;
	this->setData(name + "_clap_name", this->FragTrap::getHP(), this->ScavTrap::getEP(), this->FragTrap::getAD(), this->FragTrap::getHP());
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ScavTrap(other.Name), FragTrap(other.Name)
{
	std::string name = other.Name;
	this->Name = other.Name;
	this->setData(name + "_clap_name", FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD(), FragTrap::getHP());
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	std::string name = other.Name;
	this->Name = other.Name;
	name.append("_clap_name");
	this->setData(name, FragTrap::getHP(), ScavTrap::getEP(), FragTrap::getAD(), FragTrap::getHP());
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is \"" << this->Name << "\"" << std::endl << "My parent's name is \"" << this->ClapTrap::Name << "\"" << std::endl;
}

void DiamondTrap::printStats()
{
	std::cout << "AD: " << this->getAD() << ", EP: " << this->getEP() << ", HP: " << this->getHP() << std::endl;
}