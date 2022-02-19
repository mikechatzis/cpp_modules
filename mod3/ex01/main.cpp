/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 19:09:44 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap t("Discord mod");
	ScavTrap s("The big bad Z");

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
	
}