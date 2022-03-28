/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:38 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/28 12:42:46 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include "easyfind.hpp"

int main(void)
{
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		easyfind(vec, 2);
		easyfind(vec, 99);
	}

	{
		std::deque<int> deque;
		for (int i = 0; i < 5; i++)
			deque.push_back(i);
		easyfind(deque, 3);
		easyfind(deque, 99);
	}

	{
		std::list<int> lst;
		for (int i = 0; i < 5; i++)
			lst.push_back(i + 42);
		easyfind(lst, 42);
		easyfind(lst, 99);
	}

	{	std::set<int> set;
		for (int i = 0; i < 5; i++)
			if (!set.insert(42 + i).second)
				std::cout << "failed to insert " << 42 + i << " in set !" << std::endl;
		easyfind(set, 42);
		easyfind(set, 99);
	}

	{
		std::multiset<int> multiset;
		for (int i = 0; i < 5; i++)
			multiset.insert(42 + i);
		easyfind(multiset, 42);
		easyfind(multiset, 99);

	}

	{
		std::map<int, int> map;
		for (int i = 0; i < 5; i++)
			map[i] = i + 42;
		easyfind(map, 44);
		easyfind(map, 99);
	}

	{
		std::multimap<int, int> multimap;
		for (int i = 0; i < 5; i++)
			multimap.insert(std::pair<int, int>(i, i + 42));
		easyfind(multimap, 44);
		easyfind(multimap, 99);
	}

	return (0);
}