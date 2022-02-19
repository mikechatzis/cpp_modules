/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 16:05:57 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;
public:
	HumanB(std::string const name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &newarm);
};

#endif