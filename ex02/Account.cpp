 /*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:16:18 by athirion          #+#    #+#             */
/*   Updated: 2022/08/27 16:21:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

void	Account::_displayTimestamp(void) {
	std::time_t t;
    std::tm *local_time;

    time(&t);
    local_time = localtime(&t);

    std::cout << "[" << local_time->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_sec;
    std::cout << "]";
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
		return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp(); 
	std::cout << " accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_nbAccounts << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
    this->_totalAmount += initial_deposit;
    this->_nbAccounts ++;
}


Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits ++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits ++;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";
	if (withdrawal <= Account::checkAmount()) {
        this->_amount -= withdrawal;
		this->_nbWithdrawals ++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals ++;
		std::cout << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	    return true;
	}
	else 
	{
        std::cout << "refused" << std::endl;
        return (false);
    }
}

int	Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const  {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;









