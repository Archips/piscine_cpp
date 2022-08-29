/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:00 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 14:07:33 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>
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
		if (!checkNb(*phoneNumber))
		{
			std::cout << "Phone number should only contains digits" << std::endl;
			std::cout << "Enter their phone number :" << std::endl;
			std::getline(std::cin, *phoneNumber);
		}
		if (std::cin.eof())
			return (1);
		if (phoneNumber->length() != 0 && checkNb(*phoneNumber))
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

int		PhoneBook::addContact(void) {

	std::string	name;
	std::string lastName;
	std::string nickName;
	std::string	phoneNumber;
	std::string	secret;
	int			index;

	index = getNbContact() % 8;

	if (addName(&name) == 1)
		return (1);
	if (addLastName(&lastName) == 1)
		return (1);
	if (addNickName(&nickName) == 1)
		return (1);
	if (addPhoneNumber(&phoneNumber) == 1)
		return (1);
	if (addSecret(&secret) == 1)
		return (1);

	fillPhoneBook(name, lastName, nickName, phoneNumber, secret, index);
	return (0);
}
int		PhoneBook::searchContact(void) const {

	std::string	index;
	int			valid_index;

	valid_index = 0;
	if (getNbContact() != 0) {
		std::cout << "---------- ---------- ---------- ----------" << std::endl;
		std::cout << "INDEX     |NAME      |LASTNAME  |NICKNAME  " << std::endl;
		std::cout << "---------- ---------- ---------- ----------" << std::endl;
		if (getNbContact() >= 8)
			for (int i = 0; i < 8; i ++)
				displayPhoneBook(i);
		else
			for (int i = 0; i < getNbContact() % 8; i++)
				displayPhoneBook(i);
		while (!valid_index) {
			std::cout << std::endl << "Enter index's contact : " << std::endl;
			std::getline(std::cin, index);
			if (std::cin.eof())
				return (1);
			if (std::atoi(index.c_str()) < 1 || std::atoi(index.c_str()) > 8
					|| std::atoi(index.c_str()) > getNbContact())
				std::cout << std::endl << "Invalid index" << std::endl;
			else {
				displayContact(std::atoi(index.c_str()) -1 );
				valid_index = 1;
			}
		}
	}
	else
		std::cout << "The phone book is empty" << std::endl;
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
