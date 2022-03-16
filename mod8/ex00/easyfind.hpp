/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:37:07 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 13:18:15 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <vector>
#include <map>
#include <algorithm>

template<typename T> typename T::iterator easyfind(T &t, int i){
	return(std::find(t.begin(), t.end(), i));
}

template<typename key_type, typename value_type>
typename std::map<key_type, value_type>::iterator easyfind(std::map<key_type, value_type> &m, int i){
	typename std::map<key_type, value_type>::iterator it = m.begin();
	while (it != m.end())
	{
		if (it->second == i)
			return it;	
		it++;
	}
	return m.end();
}

template<typename key_type, typename value_type>
typename std::multimap<key_type, value_type>::iterator easyfind(std::multimap<key_type, value_type> &m, int i){
	typename std::multimap<key_type, value_type>::iterator it = m.begin();
	while (it != m.end())
	{
		if (it->second == i)
			return it;	
		it++;
	}
	return m.end();
}

#endif