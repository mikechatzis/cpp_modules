/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:22:41 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/27 12:01:25 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

#include <array>
#include <string>
#include <iostream>

template<typename type> void swap(type &a, type &b){
	type temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename type> type min(type &a, type &b){
	if (a < b)
		return a;
	else
		return b;
}

template<typename type> type max(type &a, type &b){
	if (a < b)
		return b;
	else 
		return a;
}

#endif