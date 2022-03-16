/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:29:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:35:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &other);
		Animal(std::string type);
		virtual ~Animal();

		virtual void makeSound() const;
		void setType(std::string type);
		std::string getType() const;

		Animal const &operator=(Animal const &other);
};

class Dog : virtual public Animal
{
	protected:
		std::string name;
	public:
		Dog();
		Dog(Dog const &other);
		Dog(std::string name);
		~Dog();

		void makeSound() const;
		std::string getType() const;

		Dog const &operator=(Dog const &other);
};

class Cat : virtual public Animal
{
	protected:
		std::string name;
	public:
		Cat();
		Cat(Cat const &other);
		Cat(std::string name);
		~Cat();

		void makeSound() const;
		std::string getType() const;

		Cat const &operator=(Cat const &other);
};

#endif