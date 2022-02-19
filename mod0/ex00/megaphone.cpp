/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 14:35:31 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	noalnum(char *s)
{
	for (size_t i = 0; s[i]; i++)
	{
		if (isalnum(s[i]))
			return false;
	}
	return true;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "No arguments\n";
			return (1);
	}
	char **s = argv;
	bool nolo[argc];
	memset(nolo, false, argc);
	for(size_t i = 1; s[i]; i++)
	{
		for (size_t j = 0; s[i][j]; j++)
		{
			if (islower(s[i][j]) || noalnum(s[i]))
			{
				nolo[i - 1] = true;	
				break ;
			}
		}
	}
	for (size_t i = 1; s[i]; i++)
	{
		if (nolo[i - 1])
		{
			for (size_t j = 0; s[i][j]; j++)
				s[i][j] = toupper(s[i][j]);
			std::cout << s[i];
		}
	}
	std::cout << '\n';
	return 0;
}
