/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 15:52:06 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

std::string const &Weapon::getType() const
{
	return(Weapon::type);
}
void	Weapon::setType(std::string const newWeapon)
{
	Weapon::type = newWeapon;
}

Weapon::Weapon(std::string const type)
{
	Weapon::type = type;
}

Weapon::~Weapon()
{
}