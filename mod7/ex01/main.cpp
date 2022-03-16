/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:23:28 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/11 12:54:12 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int arr[] = {1, 21, 31, 41};
	char str[] = "Trip hard with cpp";
	std::string str2[] = {"sth", "to", "test", "further"};
	std::string str3 = "sth to test even further";
	
	iter(arr, 4, &testfoo); std::cout << std::endl;
	iter(str, 19, &testfoo); std::cout << std::endl;
	iter(str2, 4, &testfoo); std::cout << std::endl;
	iter(&str3, 5, &testfoo); std::cout << std::endl;
}