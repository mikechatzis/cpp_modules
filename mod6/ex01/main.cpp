/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:43:22 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/26 18:36:16 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
	Data *d = new Data;
	d->c = 'R';
	d->i = 99;
	d->l = 1234567890;
	d->s = "Hi";

	std::cout << "\nOriginal object data: c = " << d->c << ", i = " << d->i << ", l = " << d->l << ", s = 'Hi'" << std::endl << std::endl;

	uintptr_t demo = serialize(d);
	std::cout << "ptr converted to uintptr_t type of value: " << demo << std::endl << std::endl;

	Data *neu = deserialize(demo);
	std::cout << "New object data: c = " << neu->c << ", i = " << neu->i << ", l = " << neu->l << ", s = 'Hi'" << std::endl << std::endl;
	
	delete d;
}