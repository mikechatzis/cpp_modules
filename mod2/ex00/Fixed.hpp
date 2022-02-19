/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:49:24 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/17 10:11:55 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed
{
	private:
		int value;
		static int const bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &other);
		virtual ~Fixed();

		Fixed &operator=(Fixed const &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif