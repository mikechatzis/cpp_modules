/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:23:28 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/27 22:02:50 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 10; int b = 22;
	char c = 'A'; char d = 'B';
	std::string s1 = "Hello"; std::string s2 = "World";
	
	/* SWAP */
    ////////////////////////////////////////////////////////////////////////////////////////
	::swap(a ,b);																	 	  //
	std::cout << "\nint swap: a = " << a << ", b = " << b << std::endl << std::endl;	  //
																						  //
	::swap(c ,d);																		  //
	std::cout << "char swap: c = " << c << ", d = " << d << std::endl << std::endl;		  //
																						  //
	::swap(s1 ,s2);														 				  //
	std::cout << "string swap: s1 = " << s1 << ", s2 = " << s2 << std::endl << std::endl; //
 	////////////////////////////////////////////////////////////////////////////////////////

	/* MIN */
    ///////////////////////////////////////////////////////////////////////////
	std::cout << "\nint min = " << ::min(a ,b) << std::endl << std::endl;	 //
	std::cout << "char min = " << ::min(c ,d) << std::endl << std::endl;	 //
	std::cout << "string min = " << ::min(s1 ,s2) << std::endl << std::endl; //
 	///////////////////////////////////////////////////////////////////////////

	/* MAX */
    ///////////////////////////////////////////////////////////////////////////
	std::cout << "\nint max = " << ::max(a ,b) << std::endl << std::endl;	 //
	std::cout << "char max = " << ::max(c ,d) << std::endl << std::endl;	 //
	std::cout << "string max = " << ::max(s1 ,s2) << std::endl << std::endl; //
 	///////////////////////////////////////////////////////////////////////////

}