/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:34:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/24 16:12:56 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool gatekeep;
	public:
		ScavTrap(const std::string name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &other);

		void attack(const std::string& target);
		void guardGate();
};

#endif