/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:23:59 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/10 16:31:00 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
#define IDENTIFY_H

#include <iostream>
#include <string>

class Base
{
	public:
		virtual~Base(){};
};

class A : virtual public Base
{
};

class B : virtual public Base
{
};

class C : virtual public Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif