/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:38:43 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/25 16:42:32 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iomanip>
#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string Name;
		int HP, EP, AD, HPmax;
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &other);
		ClapTrap(const std::string name);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(ClapTrap const &other);

		void setData(const std::string& name, int HP, int EP, int AD, int HPmax);
		std::string getName() const ;
		int getHP() const;
		int getEP() const;
		int getAD() const;
		void reduceEP();
};

#endif