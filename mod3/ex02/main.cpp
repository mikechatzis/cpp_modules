/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/20 13:06:18 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap t("Discord mod");
	ScavTrap s("The big bad Z");
	FragTrap f("Morphogenic");

	t.attack("random zerg of trolls");
	t.takeDamage(2);
	t.beRepaired(2);
	for (size_t i = 0; i < 8; i++)
		t.attack("Darth Sidious");
	t.beRepaired(0);
	t.attack("the Sleeper");
	t.takeDamage(9);
	t.takeDamage(1);
	s.attack("random zerg of trolls");
	s.takeDamage(2);
	s.beRepaired(2);
	for (size_t i = 0; i < 8; i++)
		s.attack("the Sleeper");
	s.beRepaired(0);
	s.attack("Darth Sidious");
	s.guardGate();
	s.guardGate();
	s.takeDamage(9);
	s.takeDamage(1);
	f.attack("random zerg of trolls");
	f.takeDamage(2);
	f.beRepaired(2);
	for (size_t i = 0; i < 8; i++)
		s.attack("Crimson wyrm");
	f.beRepaired(0);
	f.attack("Darth Sidious");
	f.highFivesGuys();
	f.takeDamage(9);
	f.takeDamage(100);
	
}