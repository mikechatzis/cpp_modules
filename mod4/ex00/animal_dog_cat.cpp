/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:34:40 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/25 19:51:48 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal_dog_cat.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal typedef constructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
	this->type = other.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called"  << std::endl;
}

Animal const &Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "\"indistinct sounds in the horizon\"" << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return(this->type);
}

/* Dog class functions*/

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Nameless Dog constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
	this->type = "Dog";
	this->name = name;
	std::cout << "Dog \"" << this->name << "\" constructor called" << std::endl;
}

Dog::Dog(Dog const &other)
{
	this->type = "Dog";
	this->name = other.name;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout <<"Dog " << this->name << " destructor called" << std::endl;
}

Dog const &Dog::operator=(Dog const &other)
{
	this->name = other.name;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof woof !!" << std::endl;
}

std::string Dog::getType() const
{
	return(this->type);
}

/* Cat class functions*/

Cat::Cat()
{
	this->type = "Cat";
	this->setType("Cat");
	std::cout << "Nameless Cat constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	this->type = "Cat";
	this->setType("Cat");
	this->name = name;
	std::cout << "Cat \"" << this->name << "\" constructor called" << std::endl;
}

Cat::Cat(Cat const &other)
{
	this->type = "Cat";
	this->name = other.name;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat const &Cat::operator=(Cat const &other)
{
	this->name = other.name;
	return *this;
}

Cat::~Cat()
{
	std::cout <<"Cat " << this->name << " destructor called" << std::endl;
}


void Cat::makeSound() const
{
	std::cout  << "\033[31mwhere is my tuna slave !?\n\033[35m.....I meant \"meow\"\033[37m" << std::endl;
}

std::string Cat::getType() const
{
	return(this->type);
}