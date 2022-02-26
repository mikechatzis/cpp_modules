/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal_dog_cat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:29:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/21 12:25:23 by mchatzip         ###   ########.fr       */
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
		Animal(std::string type);
		virtual ~Animal();

		virtual void makeSound() const;
		void setType(std::string type);
		std::string getType() const;
};

class Dog : virtual public Animal
{
	protected:
		std::string type;
		std::string name;
	public:
		Dog();
		Dog(std::string name);
		~Dog();

		void makeSound() const;
		std::string getType() const;
};

class Cat : virtual public Animal
{
	protected:
		std::string type;
		std::string name;
	public:
		Cat();
		Cat(std::string name);
		~Cat();

		void makeSound() const;
		std::string getType() const;
};

#endif