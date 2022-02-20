/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:51:15 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/20 17:50:05 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->HP = 33;
	this->EP = 33;
	this->AD = 33;
	this->HPmax = 33;
	this->gatekeep = false;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->HP = 33;
	this->EP = 33;
	this->AD = 33;
	this->HPmax = 33;
	this->setData(name, 333, 333, 33, 33);
	this->gatekeep = false;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " accepted a high-five !" << std::endl;
}