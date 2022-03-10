/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:30:38 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/10 15:48:21 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

#include <fstream>
#include <iostream>
#include <string>

struct Data
{
	int i;
	char c;
	long l;
	std::string s;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif