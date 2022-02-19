/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/09 15:37:47 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

karen::karen()
{
}

karen::~karen(){}

void	karen::debug()
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
	"I really do!" << std::endl;
}

void karen::info()
{
	std::cout<< "[ INFO ]\n"  <<  "I cannot believe adding extra bacon costs more money. You didn’t put "
    "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void karen::warning()
{
	std::cout << "[ WARNING ]\n" <<  "I think I deserve to have some extra bacon for free. I’ve been coming for "
	"years whereas you started working here since last month." << std::endl;
}

void karen::error()
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void karen::complain(std::string level)
{
	bool o = false;
	typedef void (karen::*levels)(void);
	levels  arr[4] = {&karen::debug, &karen::info, &karen::warning, &karen::error};
	std::string lv[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for	(int i = 0; i < 4; i++)
	{
		if (lv[i] == level)
		{
			o = true;
			(this->*(arr[i]))();	
		}
	}
	if (!o)
		std::cout << "probably complaining about insignificant things" << std::endl;
}