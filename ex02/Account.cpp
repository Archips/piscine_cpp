/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:16:18 by athirion          #+#    #+#             */
/*   Updated: 2022/08/25 16:27:04 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

static void	Account::_displayTimestamp(void) {
	std::cout << "TIME";
}

static int	Account::getNbAccounts(void) {
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount(void) {
	return (this->_totalAmount);
}

static int	Account::getNbDeposits(void) {
	return (this->_nbDeposits);
}

static	int	Account::getNbWithdrawals(void) {
	return (this->_nbWithdrawals);
}

static void	Account::displayAccountsInfos(void) {

	std::cout << "[" << Account::_displayTimestamp() << "] ";
	std::count << "index:-" << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
}

Account::Account(int initial_deposit) {

	std::cout << "[" << Account::_displayTimestamp() << "] ";
	std::cout << "index:-";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}


~Account::Account(void) {
	std::cout << "[" << Account::_displayTimestamp() << "] ";
	std::cout << "index:-";
	std::cout << "amount:" << Account::getTotalAmout() << ";";
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
	std::cout << "[" << Account::_displayTimestamp() << "] ";
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
}








