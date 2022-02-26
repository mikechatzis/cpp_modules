/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:41:00 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/26 13:22:29 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriasource.hpp"

std::vector<AMateria*> patoma;

int main()
{
	Ice *i = new Ice();
	Cure *c = new Cure();
	Ice *k = new Ice();
	Cure *l = new Cure();
	Cure *r = new Cure();

	Character *bab = new Character("Bob");
	Character *max = new Character("Max");
	Character &m = *max;
	Character &b = *bab;
	
	std::cout << i->getType() << std::endl;
	std::cout << c->getType() << std::endl;
	i->use(b);
	c->use(b);
	bab->equip(i);
	bab->equip(c);
	bab->equip(i);
	bab->equip(k);
	bab->equip(l);
	bab->equip(r);
	bab->use(0, m);
	bab->use(1, m);
	bab->unequip(0);
	bab->equip(i);
	bab->unequip(1); bab->unequip(2); bab->unequip(3);
	for (size_t i = 0; patoma[i]; i++)
	{
		std::cout << "Floor position "<< i << ": " << patoma[i]->getType() << std::endl;
	}
	delete c; delete k; delete l; delete r; delete bab; delete max;

	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	Ice *ic = new Ice();
	Cure *cu = new Cure();
	src->learnMateria(ic);
	src->learnMateria(cu);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete ic; delete cu;

	return 0;
}