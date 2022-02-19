/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/09 15:58:36 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr<<"karen complains only at one level. She's tooo busy for more!!!"<<std::endl;
		return 1;
	}
	karen k;
	std::string buff = argv[1];
	std::string cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int n = 4;
	for (int i = 0; i<4; i++)
		if (cases[i] == buff)
			n = i;
	switch (n)
	{
	case 0:
		k.complain("DEBUG");
		k.complain("INFO");
		k.complain("WARNING");
		k.complain("ERROR");
		break;
	case 1:
		k.complain("INFO");
		k.complain("WARNING");
		k.complain("ERROR");
		break ;
	case 2:
		k.complain("WARNING");
		k.complain("ERROR");
		break ;
	case 3:
		k.complain("ERROR");
		break ;
	default:
		k.complain("sthelse");
		break;
	}
}