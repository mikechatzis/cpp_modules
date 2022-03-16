/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:47:33 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 14:01:35 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &other);
		~Brain();
		
	std::string ideas[100];
	
	Brain const &operator=(Brain const &other);
};

#endif