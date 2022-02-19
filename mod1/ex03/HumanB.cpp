/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 16:08:04 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string const name): name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << HumanB::name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack, they have no weapon" << std::endl;
}
void	HumanB::setWeapon(Weapon &newarm)
{
	this->weapon = &newarm;
}