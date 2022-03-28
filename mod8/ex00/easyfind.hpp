/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:37:07 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/28 12:47:01 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <vector>
#include <map>
#include <algorithm>

template<typename T> typename T::iterator easyfind(T &t, int i){
	typename T::iterator it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		std::cout << "int: " << i << " ,not found in container" << std::endl;
	else
		std::cout << "int: " << i << " ,found in container" << std::endl;
	return(it);
}

template<typename key_type, typename value_type>
typename std::map<key_type, value_type>::iterator easyfind(std::map<key_type, value_type> &m, int i){
	typename std::map<key_type, value_type>::iterator it = m.begin();
	while (it != m.end())
	{
		if (it->second == i)
		{	
			std::cout << "int: " << i << " ,found in container" << std::endl;
			return it;
		}
		it++;
	}
	std::cout << "int: " << i << " ,not found in container" << std::endl;
	return m.end();
}

template<typename key_type, typename value_type>
typename std::multimap<key_type, value_type>::iterator easyfind(std::multimap<key_type, value_type> &m, int i){
	typename std::multimap<key_type, value_type>::iterator it = m.begin();
	while (it != m.end())
	{
		if (it->second == i)
		{	
			std::cout << "int: " << i << " ,found in container" << std::endl;
			return it;
		}
		it++;
	}
	std::cout << "int: " << i << " ,not found in container" << std::endl;
	return m.end();
}

#endif