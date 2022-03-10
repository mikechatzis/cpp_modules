/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:28:28 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/10 17:10:54 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main()
{
	Base *p = generate();
	A a;
	B b;
	C c;
	
	Base *ref = NULL;
	Base &r = *ref;

	identify(p);
	identify(a);
	identify(b);
	identify(c);
	identify(r);
	identify(ref);
}