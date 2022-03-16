/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:55:11 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:04:59 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain const &Brain::operator=(Brain const &other)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}