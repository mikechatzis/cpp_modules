/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:05:22 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 13:47:47 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal_dog_cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-----------------"<<std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const Animal *rand = j;
	std::cout << "-----------------"<<std::endl;
	std::cout << rand->getType() << " " << std::endl;
	rand->makeSound();
	std::cout << "-----------------"<<std::endl;

	const Animal *rand2(i);
	std::cout << "-----------------"<<std::endl;
	std::cout << rand2->getType() << " " << std::endl;
	rand2->makeSound();
	std::cout << "-----------------"<<std::endl;
	
	delete meta; delete i; delete j;
	return 0;
}