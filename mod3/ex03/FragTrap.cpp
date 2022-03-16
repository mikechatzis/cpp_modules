/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:51:15 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:10:56 by mchatzip         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap const & other)
{
	this->HP = 33;
	this->EP = 33;
	this->AD = 33;
	this->HPmax = 33;
	this->setData(other.getName(), 333, 333, 33, 33);
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->setData(other.getName(), 333, 333, 33, 33);
	this->gatekeep = other.gatekeep;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " accepted a high-five !" << std::endl;
}