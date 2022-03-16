/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 15:46:40 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		char firstname[22], lastname[22], nickname[22], darkest_secret[42], phone_number[15];
	public:
		bool on;
		void Add();
		char *getFirstName();
		char *getLastName();
		char *getNickName();
		char *getPhoneNumber();
		char *getDarkestSecret();
		
};

class PhoneBook
{
	public:
		Contact con[8];
};


#endif