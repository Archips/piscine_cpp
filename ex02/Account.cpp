/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:16:18 by athirion          #+#    #+#             */
/*   Updated: 2022/08/25 16:38:33 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

void	Account::_displayTimestamp(void) {
	std::time_t t;
    std::tm *local_time;

    time(&t);
    local_time = localtime(&t);

    std::cout << "[" << local_time->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mday;
    std::cout << "-";
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << local_time->tm_sec;
    std::cout << "]";
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_nbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp(); 
	std::cout << "index:-" << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
}

Account::Account(int initial_deposit) {
    
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:-";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;

    this->_nbAccounts ++;
}


Account::~Account(void) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:-";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	this->_nbDeposits ++;
}

bool	Account::makeWithdrawal(int withdrawal) {

	if (withdrawal <= this->_amount) {
		this->_amount -= withdrawal;
		this->_nbWithdrawals ++;
		return true;
	}
	else {
		std::cout << "refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
}








