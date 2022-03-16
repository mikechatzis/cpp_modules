/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:51:15 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:09:40 by mchatzip         ###   ########.fr       */
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
	this->gatekeep = other.gatekeep;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " accepted a high-five !" << std::endl;
}