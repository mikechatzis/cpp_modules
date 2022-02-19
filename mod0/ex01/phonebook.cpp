/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/03 16:32:17 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	clean(PhoneBook *b)
{
	for (int i = b->in; i<8; i++)
	{
		bzero(b->con[i].darkest_secret, 42);
		bzero(b->con[i].firstname, 22);
		bzero(b->con[i].lastname, 22);
		bzero(b->con[i].nickname, 22);
		bzero(b->con[i].phone_number, 22);
	}
}

void	Add(PhoneBook *book)
{
	fflush(stdin);
	std::cout << "New contact creation. Please type first name> ";
	std::cin >> book->con[book->in].firstname;
	fflush(stdin);
	std::cout << "Please type lastname> ";
	std::cin >> book->con[book->in].lastname;
	fflush(stdin);
	std::cout << "Please type nickname> ";
	std::cin >> book->con[book->in].nickname;
	fflush(stdin);
	std::cout << "Please type phone number> ";
	a: std::cin >> book->con[book->in].phone_number;
	fflush(stdin);
	for (size_t i = 0; book->con[book->in].phone_number[i]; i++)
	{
		if (!isdigit(book->con[book->in].phone_number[i]))
		{
			std::cerr << "number can only contain digits from 0-9\nPlease type phone number> ";
			goto a;
		}	
	}
	std::cout << "Please type darkest secret> ";
	std::cin >> book->con[book->in].darkest_secret;
	fflush(stdin);
	book->con[book->in].on = true;
	std::cout << "Your entry has succesfully been saved\n";
	book->in++; if(book->in > 7) book->in = 0;
	clean(book);
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
			strncpy(buff1, book->con[index].firstname, 10);
			if (strlen(book->con[index].firstname) > 10)
				buff1[9] = '.';
		
			strncpy(buff2, book->con[index].lastname, 10);
			if (strlen(book->con[index].lastname) > 10)
				buff2[9] = '.';
		
			strncpy(buff3, book->con[index].nickname, 10);
			if (strlen(book->con[index].nickname) > 10)
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
		if (!*book->con[i - 1].firstname)
			std::cout << "Empty contact\n";
		else
		{
			std::cout << "Contact information: \nFirstname: " << book->con[i - 1].firstname << '\n' <<
					 "Lastname: " << book->con[i - 1].lastname << '\n' <<
					 "Nickname: " << book->con[i - 1].nickname << '\n' <<
					 "Nickname: " << book->con[i - 1].phone_number << '\n' <<
					 "Darkest secret: " << book->con[i - 1].darkest_secret << '\n';
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
	book.in = 0;
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
