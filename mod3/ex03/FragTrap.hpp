/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:34:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/12 16:06:41 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		bool gatekeep;
	public:
		int HP, EP, AD, HPmax;
		FragTrap();
		FragTrap(FragTrap const &other);
		FragTrap(const std::string name);
		~FragTrap();

		FragTrap &operator=(FragTrap const &other);

		void highFivesGuys(void);
};

#endif