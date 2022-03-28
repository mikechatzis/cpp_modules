/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:05:22 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/25 20:24:51 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal_dog_cat.hpp"
#include "brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	i->expressThoughts();
	j->expressThoughts();
	meta->expressThoughts();

	const Cat kitty("Queen");
	const Cat cat = kitty;
	std::cout << "------------------" << std::endl;
	std::cout << &cat << std::endl;
	std::cout << &kitty << std::endl;
	kitty.getBrainAddr();
	cat.getBrainAddr();
	cat.expressThoughts();
	std::cout << kitty.getType() << std::endl;
	std::cout << "------------------" << std::endl;

	const Dog dogo("Lassie");
	const Dog dog(dogo);
	std::cout << "------------------" << std::endl;
	std::cout << &dog << std::endl;
	std::cout << &dogo << std::endl;
	dogo.getBrainAddr();
	dog.getBrainAddr();
	dog.expressThoughts();
	std::cout << dog.getType() << std::endl;
	std::cout << "------------------" << std::endl;

	Dog *b = new Dog("Maxie");
	b->setTestIdea("1st idea");
	Dog *bc = new Dog(*b);
	std::cout << "------------------" << std::endl;
	b->printTestIdea();
	bc->printTestIdea();
	b->setTestIdea("2nd idea");
	std::cout << "------------------" << std::endl;
	b->printTestIdea();
	bc->printTestIdea();
	std::cout << "------------------" << std::endl;
	
	delete meta; delete i; delete j; delete b; delete bc;
	return 0;
}