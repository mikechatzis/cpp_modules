/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:05:16 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/10 16:21:50 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
	/* initial error check */
	if (argc != 2)
	{
		std::cerr << "Error: please provide exactly one(1) argument." << std::endl;
		return 1; 
	}
	std::string s = argv[1];
	char **err = new char*; 
	double d = strtod(s.c_str(), err);
	float f = strtof(s.c_str(), err);
	if (**err && (strlen(*err) != 1 || strlen(*err) != strlen(s.c_str())) && (**err != 'f' || strlen(*err) != 1))
	{
		std::cerr << "Error: argument cannot be parsed." << std::endl;
		delete err;
		return 1;
	}
	if (!d && errno == ERANGE)
	{
		std::cerr << "input out of range" << std::endl;	
		delete err;
		return 1;
	}

	// std::cout.precision(1);
	
	/* display double */
	if (!d && s[0] != 48)
		std::cout << "double: " << std::fixed << static_cast<double>(s[0]) << std::endl;
	else
		std::cout << "double: " << std::fixed << d << std::endl;
		
	/* display float */
	if (!f && s[0] != 48)
		std::cout << "float: " << static_cast<float>(s[0]) << "f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	
	/* display int */
	if (d >= INT32_MAX || d < INT32_MIN)
		std::cout << "int: Non displayable" << std::endl;
	else if (isnan(d))
		std::cout << "int: Undefined" << std::endl;
	else if (!d && s[0] != 48)
		std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	
	/*display char*/
	if (isprint(d))
		std::cout<< "char: " << static_cast<char>(atoi(s.c_str())) << std::endl; 
	else if (isprint(s[0]) && strlen(s.c_str()) == 1)
	{
		if (s[0] >= '0' && s[0] <= '9')
			std::cout<< "char: " << "Non displayable" << std::endl;
		else
			std::cout<< "char: " << s[0] << std::endl;
	}
	else if ((atoi(s.c_str()) < 0 || atoi(s.c_str()) > 250) || isnan(d))
		std::cout<< "char: " << "Impossible" << std::endl;
	else
		std::cout<< "char: " << "Non displayable" << std::endl;
	/**/
	
	delete err;
	return 0;
}
