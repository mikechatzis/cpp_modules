/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:15:04 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/24 13:59:24 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	replace(std::string const &s, std::string const &needle, std::string const &replace)
{
	std::stringstream buff;
	size_t	j = 0;
	size_t	nlen (needle.length());

	if (!nlen)
	{
		std::cerr << "String empty, content will not be modified. Please provide a non empty valid string" << std::endl;
		return s;
	}
	for (size_t i = 0; i < s.length(); i++)
	{
		j = 0;
		while (s[i + j] == needle[j] && j < nlen)
			j++;
		if (j == nlen)
		{
			buff << replace;
			i += (j - 1);
		}
		else
			buff << s[i];
	}
	return (buff.str());
}

int main(int argc, char **argv)
{
	std::stringstream s;
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;	
		return 1;
	}
	std::string outfilename = argv[1]; outfilename.append(".replace");
	std::ifstream file (argv[1]);
	std::ofstream out;
	out.open(outfilename, std::ios::trunc);
	if (!file.is_open())
	{
		std::cerr << "File inaccessible or corrupt" << std::endl;;	
		return 1;
	}
	if (!out.is_open())
	{
		std::cerr << "Out file corrupt or failed to be created" << std::endl;;
		return 1;
	}
	s << file.rdbuf();
	std::string b = s.str(); std::string rpl = replace(b, argv[2], argv[3]);
	out << rpl;
	file.close(); out.close();
	return 0;
}