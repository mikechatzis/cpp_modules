/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:41:30 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/08 14:08:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

int main()
{
	std::string var = std::string("HI THIS IS BRAIN");
	std::string *stringPTR = &var;
	std::string &stringREF = var;
	
	std::cout << "memory addr of 'var' variable: " << &var << '\n' << "memory addr of stringPTR: "
				<< stringPTR << '\n' << "memory addr of stringREF: " << &stringREF << '\n'
				<< "value of 'var': " << var << '\n' << "value pointed to by stringPTR: " << *stringPTR
				<< '\n' << "value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}