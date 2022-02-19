/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:31:43 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 13:48:34 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	std::vector<Zombie*> horde;
	horde.reserve(N);
	for (int i=0; i<N; i++)
	{
		horde[i] = new Zombie;
		horde[i]->assignName(name);
		horde[i]->announce();
	}
	for (int i = 1; i < N; i++)
		delete horde[i];
	return (horde[0]);
}