/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/25 13:59:25 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <limits>

int addName(std::string *name)
{
	while (1)
	{
        if (name->empty())
            std::cout << "Enter their name : " << std::endl;
		std::getline(std::cin, *name);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (!name->empty())
			break ;
	}
    return (EXIT_SUCCESS);
}

int	addLastName(std::string *lastName)
{	
	while (1)
	{
        if (lastName->empty())
            std::cout << "Enter their lastname : " << std::endl;
		std::getline(std::cin, *lastName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (lastName->length() != 0)
            break ;
	}
    return (EXIT_SUCCESS);
}

int	addNickName(std::string *nickName)
{	
	while (1)
	{
        if (nickName->empty())
            std::cout << "Enter their nickname : " << std::endl;
		std::getline(std::cin, *nickName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (nickName->length() != 0)
            break ;
	}
    return (EXIT_SUCCESS);
}

int checkNb(std::string number)
{
	for (long unsigned int i = 0; i < number.size(); i ++) {

		if (isdigit(number[i]) == 0) {
			return (0);
		}
	}
	return (1);
}

int	addPhoneNumber(std::string *phoneNumber)
{	
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
            std::cout << "Enter their phone number : " << std::endl;
			std::getline(std::cin, *phoneNumber);
		}
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (phoneNumber->length() != 0 && checkNb(*phoneNumber))
            break ;
	}
    return (EXIT_SUCCESS);
}

int	addSecret(std::string *secret)
{	
	while (1)
	{
        if (secret->empty())
            std::cout << "Enter their darkest secret : " << std::endl;
		std::getline(std::cin, *secret);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (secret->length() != 0)
			break ;
	}
    return (EXIT_SUCCESS);
}

int    addContact(PhoneBook *book) {

    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
    int index;

    index = book->getNbContact() % 8;

    if (addName(&name) == 1) {
        return (EXIT_FAILURE);
	}
	if (addLastName(&lastName) == 1) {
		return (EXIT_FAILURE);
	}
	if (addNickName(&nickName) == 1) {
		return (EXIT_FAILURE);
	}
	if (addPhoneNumber(&phoneNumber) == 1) {
		return (EXIT_FAILURE);
	}
	if (addSecret(&secret) == 1) {
		return (EXIT_FAILURE);
	}

	book->fillPhoneBook(name, lastName, nickName, phoneNumber, secret, index);
    return (EXIT_SUCCESS);
}

int    listContact(PhoneBook *book) {
   
	std::string	index;
	int			valid_index;

	valid_index = 0;
	if (book->getNbContact() != 0) {
        std::cout << "---------- ---------- ---------- ----------" << std::endl;
        std::cout << "INDEX     |NAME      |LASTNAME  |NICKNAME  " << std::endl;
        std::cout << "---------- ---------- ---------- ----------" << std::endl;
		if (book->getNbContact() >= 8) 
			for (int i = 0; i < 8; i++)
           		book->displayPhoneBook(i);
		else
			for (int i = 0; i < book->getNbContact() % 8; i++)
            	book->displayPhoneBook(i);
		while (!valid_index) {
			std::cout << std::endl << "Enter index's contact : " << std::endl;
			std::getline(std::cin, index);
			if (std::cin.eof())
				return (EXIT_FAILURE);
			if (std::atoi(index.c_str()) < 1 || std::atoi(index.c_str()) > book->getNbContact()) 
				std::cout << std::endl << "Invalid index" << std::endl;
			else {
				book->displayContact(std::atoi(index.c_str()) - 1);
				valid_index = 1;
			}
		}
	}
    else
		std::cout << "The phone book is empty" << std::endl;
    return (EXIT_SUCCESS);
}

int	main(void)
{
    PhoneBook 		book;
    std::string 	input;
	int				end;
	
	end = 0;
    while (!end) {
	
		if (std::cin.eof()) {
			std::cout << std::endl << "Exit.." << std::endl;
			return (EXIT_FAILURE);
		}
		std::cout << "Enter an instruction: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			if (addContact(&book) == 1) {
				std::cout << std::endl << "Exit.." << std::endl;
				return (EXIT_FAILURE);
			}
        }
        else if (input.compare("SEARCH") == 0) {
			if (listContact(&book) == 1) {
				std::cout << std::endl << "Exit.." << std::endl;
				return (EXIT_FAILURE);
			}
        }
		else if (input.compare("EXIT") == 0) {
			end = 1;
		}
    }
	return (EXIT_SUCCESS);
}
