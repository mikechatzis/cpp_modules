/*                                                        :::      ::::::::   */
/*   Accounts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:39:57 by mchatzip          #+#    #+#             */
/*   Updated: 2022/02/04 15:34:33 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string.h>

int p_amount[100];
int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

/*ACCOUNT CLASS CONSTRUCTOR*/
Account::Account(int initial_deposit)
{
	static size_t index = 0;
	if (initial_deposit < 0)
	{
		_displayTimestamp();
		std::cout << "Warning, the initial deposit cannot be a negative value, account balance set to 0\n";
		Account::_amount = 0;
	}
	else
		Account::_amount = initial_deposit;
	p_amount[Account::_accountIndex] = Account::_amount;
	if (!index)
	{
		Account::_totalAmount = Account::_amount;
		Account::_totalNbDeposits = 0;
		Account::_totalNbWithdrawals = 0;
		Account::_nbAccounts = 1;
	}
	else
	{
		Account::_nbAccounts += 1;
		Account::_totalAmount += Account::_amount;
	}
	Account::_accountIndex = index++;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';' << "amount:" << Account::_amount << ';' << "created\n";
}

/*ACCOUNT CLASS DESTRUCTOR*/
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';' << "amount:" << Account::_amount << ';' << "closed\n";
}

void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
	{
		std::cout << "Error, deposit has to be a positive value\n";
		return;
	}
	p_amount[Account::_accountIndex] = Account::_amount;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';' << "p_amount:" << p_amount[Account::_accountIndex] << ';' <<
	  "deposit:" << deposit << ';' << "amount:" << Account::_amount << ';' << "nb_deposits:" << Account::_nbDeposits << '\n';

}
void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(nullptr);
	std::string localt = std::asctime(std::localtime(&result));
	localt.erase(remove(localt.begin(), localt.end(), ':'));
	std::cout << '[' << result << '_' << localt.substr(11, 6) << "] ";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= 0 || (Account::_amount - withdrawal) < 0)
	{
		_displayTimestamp();
		std::cerr << "index:" << Account::_accountIndex << ';' << "p_amount:" << p_amount[Account::_accountIndex] << ';' <<
	    "withdrawal:refused\n";
		return 1;
	}
	else
	{
		p_amount[Account::_accountIndex] = Account::_amount;
		Account::_amount -= withdrawal;
		Account::_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout << "index:" << Account::_accountIndex << ';' << "p_amount:" << p_amount[Account::_accountIndex] << ';' <<
	    "withdrawal:" << withdrawal << ';' << "amount:" << Account::_amount << "nb_withdrawals:" << Account::_nbWithdrawals << '\n';
	}
	
	return 0;
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';' << "amount:" << Account::_amount << ':' <<
	  "deposits:" << Account::_nbDeposits << ';' << "withdrawals:" << Account::_nbWithdrawals << '\n';
	
}

void	Account::displayAccountsInfos ( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";" << "total:" << Account::getTotalAmount() << ";"
			  << "deposits:" << Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << '\n';
}

// int main()
// {
// 	Account::_displayTimestamp();
// }