/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:00 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 13:15:00 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void) {

    this->_nbContact = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

int		PhoneBook::checkNb(std::string number) const {
	
	for (long unsigned int i = 0; i < number.size(); i ++)
	{
		if (isdigit(number[i]) == 0) {
			return (0);
		}
	}
	return (1);
}


int		PhoneBook::addName(std::string *name) {

	while (1)
	{
		if (name->empty())
			std::cout << "Enter their name : " << std::endl;
		std::getline(std::cin, *name);
		if (std::cin.eof())
			return (1);
		if (!name->empty())
			break ;
	}
	return (0);
}

int		PhoneBook::addLastName(std::string *lastName) {

	while (1)
	{
		if (lastName->empty())
			std::cout << "Enter their lastname : " << std::endl;
		std::getline(std::cin, *lastName);
		if (std::cin.eof())
			return (1);
		if (!lastName->empty())
			break ;
	}
	return (0);
}

int		PhoneBook::addNickName(std::string *nickName) {

	while (1)
	{
		if (nickName->empty())
			std::cout << "Enter their nickname : " << std::endl;
		std::getline(std::cin, *nickName);
		if (std::cin.eof())
			return (1);
		if (!nickName->empty())
			break ;
	}
	return (0);
}

int		PhoneBook::addPhoneNumber(std::string *phoneNumber) {

	while (1)
	{
		if (phoneNumber->empty())
		{
			std::cout << "Enter their phone number : " << std::endl;
			std::getline(std::cin, *phoneNumber);
		}
		if (!PhoneBook::checkNb(*phoneNumber))
		{
			std::cout << "Phone number should only contains digits" << std::endl;
			std::cout << "Enter their phone number :" << std::endl;
			std::getline(std::cin, *phoneNumber);
		}
		if (std::cin.eof())
			return (1);
		if (phoneNumber->length() != 0 && PhoneBook::checkNb(*phoneNumber))
			break ;
	}
	return (0);
}

int		PhoneBook::addSecret(std::string *secret) {
	
	while (1)
	{
		if (secret->empty())
			std::cout << "Enter their darkest secret : " << std::endl;
		std::getline(std::cin, *secret);
		if (std::cin.eof())
			return (1);
		if (secret->length() != 0)
			break ;
	}
	return (0);
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

    std::cout << std::setw(10) << index + 1 << "|";
	if (this->_book[index].getName().size() > 10)
		std::cout << std::setw(9) << this->_book[index].getName().substr(0, 9) << "." << "|";
	else
    	std::cout << std::setw(10) << this->_book[index].getName() << "|";
	if (this->_book[index].getLastName().size() > 10)
		std::cout << std::setw(9) << this->_book[index].getLastName().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->_book[index].getLastName() << "|";
	if (this->_book[index].getNickname().size() > 10)
		std::cout << std::setw(9) << this->_book[index].getNickname().substr(0, 9) << "." << std::endl;
	else
    	std::cout << std::setw(10) << this->_book[index].getNickname() << std::endl;
    return ;
}

void PhoneBook::displayContact(int index) const {

	std::cout << std::endl;
	std::cout << "Name: ";
    std::cout << this->_book[index].getName() << std::endl;
	std::cout << "Last name: ";
    std::cout << this->_book[index].getLastName() << std::endl;
	std::cout << "Nickname: ";
    std::cout << this->_book[index].getNickname() << std::endl;
	std::cout << "Phone number: ";
    std::cout << this->_book[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
    std::cout << this->_book[index].getSecret() << std::endl;
	std::cout << std::endl;
    return ;
}

int PhoneBook::getNbContact(void) const {

    return (_nbContact);
}
