/*                                                        :::      ::::::::   */
/*   Accounts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:39:57 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/04 15:34:33 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>

class Zombie
{
	private:
		std::string name;

	public:
		void	announce ( void )
		{
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}

		void assignName ( std::string namez )
		{
			name = namez;
		}
		Zombie ();
		 ~Zombie();
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif