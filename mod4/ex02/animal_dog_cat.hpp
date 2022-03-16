/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:29:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:45:47 by mchatzip         ###   ########.fr       */
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
		Animal(Animal const &other);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual void expressThoughts()const = 0;
		void setType(std::string type);
		std::string getType() const;

		Animal const &operator=(Animal const &other);
};

class Dog : virtual public Animal
{
	private:
		Brain *brain;
	protected:
		std::string name;
	public:
		Dog();
		Dog(Dog const &other);
		Dog(std::string name);
		~Dog();

		void makeSound() const;
		void expressThoughts() const;
		void getBrainAddr() const;

		Dog const &operator=(Dog const &other);
};

class Cat : virtual public Animal
{
	private:
		Brain *brain;
	protected:
		std::string name;
	public:
		Cat();
		Cat(Cat const &other);
		Cat(std::string name);
		~Cat();

		void makeSound() const;
		void expressThoughts() const;
		void getBrainAddr() const;

		Cat const &operator=(Cat const &other);
};

#endif