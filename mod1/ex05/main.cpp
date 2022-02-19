/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:08 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/09 15:29:33 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main()
{
	karen k;
	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	k.complain("sthelse");
}