/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:29:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/22 11:24:06 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual void expressThoughts() const = 0;
		void setType(std::string type);
		std::string getType() const;
};

class Dog : virtual public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
		std::string name;
	public:
		Dog();
		Dog(std::string name);
		~Dog();

		void makeSound() const;
		std::string getType() const;
		void expressThoughts() const;
};

class Cat : virtual public Animal
{
	private:
		Brain *brain;
	protected:
		std::string type;
		std::string name;
	public:
		Cat();
		Cat(std::string name);
		~Cat();

		void makeSound() const;
		void expressThoughts() const;
		std::string getType() const;
};

#endif