/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:49:24 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/17 10:18:00 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int value;
		static int const bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed(int const value);
		Fixed(float const value);
		virtual ~Fixed();

		Fixed &operator=(Fixed const &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif