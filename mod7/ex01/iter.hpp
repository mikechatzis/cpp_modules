/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:22:41 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 12:54:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <array>
#include <string>
#include <iostream>

template<typename A> void iter(const A *array, size_t size, void (*f)(const A &c)){
	for (size_t i = 0; i < size; i++)
		(*f)(array[i]);
}

template<typename A> void testfoo(const A &c){
	std::cout << c;
}

#endif