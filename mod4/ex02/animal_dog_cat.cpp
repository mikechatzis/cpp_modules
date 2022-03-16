/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:34:40 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:41:25 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal_dog_cat.hpp"
#include "brain.hpp"

Animal::Animal() : type("Abstract")
{
	std::cout << "Animal default constructor called" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal destructor called"  << std::endl;
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

void Animal::expressThoughts() const
{
	std::cout << "Archetype \"Animal\" has no functional brain" << std::endl;
}

Animal::Animal(Animal const &other)
{
	this->type = other.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal const &Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return *this;
}

/* Dog class functions*/

Dog::Dog()
{
	this->brain = new Brain();
	this->type = "Dog";
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i].append("whatever dogs think");
	std::cout << "Nameless Dog constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
	this->brain = new Brain();
	this->type = "Dog";
	this->name = name;
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i].append("whatever dogs think");
	std::cout << "Dog \"" << this->name << "\" constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout <<"Dog " << this->name << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof !!" << std::endl;
}

void Dog::expressThoughts() const
{
	std::cout << this->brain->ideas[0] << std::endl;
}

Dog::Dog(Dog const &other)
{
	this->type = "Dog";
	this->name = other.name;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog const &Dog::operator=(Dog const &other)
{
	this->name = other.name;
	delete this->brain;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return *this;
}

void Dog::getBrainAddr() const
{
	std::cout << "Address of Cat: " << this->name << ", is " << this->brain << std::endl;;
}

/* Cat class functions*/

Cat::Cat()
{
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i].append("whatever cats think");
	this->type = "Cat";
	std::cout << "Nameless Cat constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i].append("whatever cats think");
	this->type = "Cat";
	this->name = name;
	std::cout << "Cat \"" << this->name << "\" constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout <<"Cat " << this->name << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "where is my tuna slave !?\n.....I meant \"meow\"" << std::endl;
}

void Cat::expressThoughts() const
{
	std::cout << this->brain->ideas[0] << std::endl;
}

Cat::Cat(Cat const &other)
{
	this->type = "Cat";
	this->name = other.name;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat const &Cat::operator=(Cat const &other)
{
	this->name = other.name;
	delete this->brain;
	this->brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return *this;
}

void Cat::getBrainAddr() const
{
	std::cout << "Address of Cat: " << this->name << ", is " << this->brain << std::endl;
}