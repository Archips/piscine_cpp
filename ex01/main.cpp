/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/22 16:25:31 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>
#include <limits>

int addName(std::string *name)
{
	while (name->empty())
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

int	addPhoneNumber(std::string *phoneNumber)
{	
	while (1)
	{
        if (phoneNumber->empty())
            std::cout << "Enter their phone number : " << std::endl;
		std::getline(std::cin, *phoneNumber);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (phoneNumber->length() != 0)
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

    if (addName(&name) == 1)
        return (EXIT_FAILURE);
	if (addLastName(&lastName) == 1)
		return (EXIT_FAILURE);
	if (addNickName(&nickName) == 1)
		return (EXIT_FAILURE);
	if (addPhoneNumber(&phoneNumber) == 1)
		return (EXIT_FAILURE);
	if (addSecret(&secret) == 1)
		return (EXIT_FAILURE);
 
	book->fillPhoneBook(name, lastName, nickName, phoneNumber, secret, index);
    return (EXIT_SUCCESS);
}

void    listContact(PhoneBook *book) {
    
	if (book->getNbContact() != 0) {
        std::cout << "---------- ---------- ---------- ----------" << std::endl;
        std::cout << "INDEX     |NAME      |LASTNAME  |NICKNAME  " << std::endl;
        std::cout << "---------- ---------- ---------- ----------" << std::endl;
        for (int i = 0; i < book->getNbContact() % 8; i++)
            book->displayPhoneBook(i);
    }
    else
		std::cout << "The phone book is empty" << std::endl;
    return ;
}

int	main(void)
{
    PhoneBook book;
    std::string input;
	int	end;
	int index;

	end = 0;
    while (!end) {

		std::cout << "Enter an instruction: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin,input);
		if (std::cin.eof())
			return (1);
        if (input.compare("ADD") == 0) {
            
			if (addContact(&book) == 1)
				return (EXIT_FAILURE);
        }
        else if (input.compare("SEARCH") == 0) {
            
			listContact(&book);
			std::cout << "Enter index's contact : " << std::endl;
			std::cin >> index;
			if (index < 1 || index > 8) {

				std::cout << "Invalid index" << std::endl;
				continue ;
			}
			book.displayContact(index - 1);
        }
		else if (input.compare("EXIT") == 0) {
		
			end = 1;
		}
        else {
            
			std::cout << "Wrong instruction: Usage: ADD | SEARCH |  EXIT" << std::endl;
        }

    }
	return (0);
}
