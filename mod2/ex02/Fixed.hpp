/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:49:24 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/19 15:15:03 by mchatzip         ###   ########.fr       */
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
		
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif