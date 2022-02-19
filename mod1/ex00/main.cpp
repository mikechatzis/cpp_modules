/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:31:43 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/07 18:32:20 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie f;
	Zombie *newzombie = newZombie("test");
	
	newzombie->announce();
	randomChump("2ndtest");
	delete newzombie;
	return (0);
}
