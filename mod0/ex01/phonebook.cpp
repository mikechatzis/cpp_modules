/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/16 15:44:11 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// void	clean(PhoneBook *b, int in)
// {
// 	for (int i = in; i<8; i++)
// 	{
// 		bzero(b->con[i].darkest_secret, 42);
// 		bzero(b->con[i].firstname, 22);
// 		bzero(b->con[i].lastname, 22);
// 		bzero(b->con[i].nickname, 22);
// 		bzero(b->con[i].phone_number, 22);
// 	}
// }

char	*Contact::getFirstName(){
	return this->firstname;
}
char	*Contact::getNickName(){
	return this->lastname;
}
char	*Contact::getPhoneNumber(){
	return this->phone_number;
}
char	*Contact::getDarkestSecret(){
	return this->darkest_secret;
}
char	*Contact::getLastName(){
	return this->lastname;
}

void Add(PhoneBook *book)
{
	static int in = 0;
	book->con[in].Add();
	in++; 
	if(in > 7) in = 0;
}

void	Contact::Add()
{
	fflush(stdin);
	std::cout << "New contact creation. Please type first name> ";
	std::cin >> this->firstname;
	fflush(stdin);
	std::cout << "Please type lastname> ";
	std::cin >> this->lastname;
	fflush(stdin);
	std::cout << "Please type nickname> ";
	std::cin >> this->nickname;
	fflush(stdin);
	std::cout << "Please type phone number> ";
	a: std::cin >> this->phone_number;
	fflush(stdin);
	for (size_t i = 0; this->phone_number[i]; i++)
	{
		if (!isdigit(this->phone_number[i]))
		{
			std::cerr << "number can only contain digits from 0-9\nPlease type phone number> ";
			goto a;
		}	
	}
	std::cout << "Please type darkest secret> ";
	std::cin >> this->darkest_secret;
	fflush(stdin);
	this->on = true;
	std::cout << "Your entry has succesfully been saved\n";
}

void	Search(PhoneBook *book)
{
	char buff1[11], buff2[11], buff3[11];
	bzero(buff1, 11); bzero(buff2, 11); bzero(buff3, 11);

	std::cout << "  FIRSTNAME  " << " LASTNAME  " << " NICKNAME  " << '\n';
	for (unsigned short index = 0; index < 8; index++)
	{
		if (book->con[index].on)
		{
			strncpy(buff1, book->con[index].getFirstName(), 10);
			if (strlen(book->con[index].getFirstName()) > 10)
				buff1[9] = '.';
		
			strncpy(buff2, book->con[index].getLastName(), 10);
			if (strlen(book->con[index].getLastName()) > 10)
				buff2[9] = '.';
		
			strncpy(buff3, book->con[index].getNickName(), 10);
			if (strlen(book->con[index].getNickName()) > 10)
				buff3[9] = '.';
		}
		std::cout << index + 1 << '|'; 
		std::cout << std::setw(10);
		std::cout << buff1 << '|';
		std::cout << std::setw(10);
		std::cout<< buff2 << '|';
		std::cout << std::setw(10);
		std::cout << buff3 << '\n' << std::endl;
		bzero(buff1, 11); bzero(buff2, 11); bzero(buff3, 11);
	}
	std::cout << "Please specify which contact you wish to view details about, with index.> ";
	char str[100];
	std::cin >> str;
	int i = atoi(str); 
	fflush(stdin);
	if (i > 0 && i < 9)
	{
		if (!*book->con[i - 1].getFirstName())
			std::cout << "Empty contact\n";
		else
		{
			std::cout << "Contact information: \nFirstname: " << book->con[i - 1].getFirstName() << '\n' <<
					 "Lastname: " << book->con[i - 1].getLastName() << '\n' <<
					 "Nickname: " << book->con[i - 1].getNickName() << '\n' <<
					 "Nickname: " << book->con[i - 1].getPhoneNumber() << '\n' <<
					 "Darkest secret: " << book->con[i - 1].getDarkestSecret() << '\n';
		} 
	}
	else
		std::cout << "Contact index can be 1-8\n";
}

int	main()
{
	PhoneBook book;
	
	std::cout << "Welcome to the phonebook\n";
	char input[7];
	for (short i = 0; i < 8; i++)
		book.con[i].on = false;
	for (;;)
	{
		std::cout << "What can we do for you?> ";
		scanf("%s", input);
		fflush(stdin);
		if (!strcmp(input, "ADD"))
			Add(&book);
		else if (!strcmp(input, "SEARCH"))
			Search(&book);
		else if (!strcmp(input, "EXIT"))
		{
			std::cout << "Thank you for using phonebook, the program will now exit\n";
			return 0;
		}
		else
			std::cerr << "Command not recognized.\nAvailable commands are: \"ADD\", \"SEARCH\" and \"EXIT\"\n"; 
	}
}
