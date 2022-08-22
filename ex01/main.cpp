/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/22 15:31:08 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>

int addName(std::string *name)
{
	while (1)
	{
		std::getline(std::cin, *name);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (name->length() != 0)
			return (EXIT_SUCCESS);
		else
			std::cout << "Enter their name : " << std::endl;
	}
}

int	addLastName(std::string *lastName)
{	
	while (1)
	{
		std::getline(std::cin, *lastName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (lastName->length() != 0)
			return (EXIT_SUCCESS);
		else
			std::cout << "Enter their lastname : " << std::endl;
	}
}

int	addNickName(std::string *nickName)
{	
	while (1)
	{
		std::getline(std::cin, *nickName);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (nickName->length() != 0)
			return (EXIT_SUCCESS);
		else
			std::cout << "Enter their nickname : " << std::endl;
	}
}

int	addPhoneNumber(std::string *phoneNumber)
{	
	while (1)
	{
		std::getline(std::cin, *phoneNumber);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (phoneNumber->length() != 0)
			return (EXIT_SUCCESS);
		else
			std::cout << "Enter their phone number : " << std::endl;
	}
}

int	addSecret(std::string *secret)
{	
	while (1)
	{
		std::getline(std::cin, *secret);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if (secret->length() != 0)
			return (EXIT_SUCCESS);
		else
			std::cout << "Enter their darkest secret : " << std::endl;
	}
}

int    addContact(PhoneBook *book) {

    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
    int index;

    index = book->getNbContact() % 8;

	if (addName(&name)== 1)
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
        for (int i = 0; i < book->getNbContact() % 8; i ++)
        {
			std::cout << "----- In for loop : [" << i << "]" << std::endl;
			book->displayContact(i);
		}
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

	end = 0;
    while (!end) {

		std::cout << "Enter an instruction: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin,input);
		if (std::cin.eof())
			return (1);
        if (input.compare("ADD") == 0){
            
			if (addContact(&book) == 1)
				return (EXIT_FAILURE);
        }
        else if (input.compare("SEARCH") == 0) {
            
			listContact(&book);
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
