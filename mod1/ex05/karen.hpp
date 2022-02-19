/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/09 14:23:30 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>
# include <string>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

class	karen{

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	
	public:
		karen();
		~karen();
		void complain(std::string level);
};

#endif