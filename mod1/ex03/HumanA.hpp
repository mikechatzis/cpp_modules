/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 16:11:24 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	const Weapon &weapon;
public:
	HumanA(std::string const name, const Weapon &weapon);
	~HumanA();

	void	attack();
};

#endif