/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:28:28 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/27 19:51:08 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main()
{
	Base *p = generate();
	A a;
	B b;
	C c;
	D d;
	
	Base *ref = NULL;

	identify(p);
	identify(a);
	identify(b);
	identify(c);
	identify(ref);
	identify(d);
	
	delete p;
}