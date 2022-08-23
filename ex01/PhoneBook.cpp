/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:00 by athirion          #+#    #+#             */
/*   Updated: 2022/08/22 16:23:41 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) {

	std::cout << "Phonebook constructor called" << std::endl;
    this->_nbContact = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void    PhoneBook::fillPhoneBook(std::string name, std::string lastName,
                      std::string nickName, std::string phoneNumber,
                      std::string secret, int index) {
    
	this->_book[index].setName(name);
    this->_book[index].setLastName(lastName);
    this->_book[index].setNickname(nickName);
    this->_book[index].setPhoneNumber(phoneNumber);
    this->_book[index].setSecret(secret);
    this->_nbContact ++;

	return ;
}

void    PhoneBook::displayPhoneBook(int index) const {

    std::cout << index + 1 << std::setw(10) << "|";
    std::cout << this->_book[index].getName() << std::setw(10) << "|";
    std::cout << this->_book[index].getLastName() << std::setw(10) << "|";
    std::cout << this->_book[index].getNickname() << std::endl;
    return ;
}

void PhoneBook::displayContact(int index) const {

    std::cout << this->_book[index].getName() << std::endl;
    std::cout << this->_book[index].getLastName() << std::endl;
    std::cout << this->_book[index].getNickname() << std::endl;
    std::cout << this->_book[index].getPhoneNumber() << std::endl;
    std::cout << this->_book[index].getSecret() << std::endl;
    return ;
}

int PhoneBook::getNbContact(void) const {

    return (_nbContact);
}
