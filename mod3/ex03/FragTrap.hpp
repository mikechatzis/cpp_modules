/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:34:39 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/20 16:49:06 by mchatzip         ###   ########.fr       */
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
		FragTrap(const std::string name);
		~FragTrap();

		void highFivesGuys(void);
};

#endif