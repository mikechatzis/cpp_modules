/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:31 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 17:17:28 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap t("Discord mod");

	t.attack("random zerg of trolls");
	t.takeDamage(2);
	t.beRepaired(2);
	for (size_t i = 0; i < 8; i++)
		t.attack("Darth Sidious");
	t.beRepaired(0);
	t.attack("the Sleeper");
	t.takeDamage(9);
	t.takeDamage(1);
	
}