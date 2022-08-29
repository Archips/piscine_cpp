/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 13:04:43 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int    addContact(PhoneBook *book) {

    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
    int index;

    index = book->getNbContact() % 8;

    if (book->addName(&name) == 1) {
        return (1);
	}
	if (book->addLastName(&lastName) == 1) {
		return (1);
	}
	if (book->addNickName(&nickName) == 1) {
		return (1);
	}
	if (book->addPhoneNumber(&phoneNumber) == 1) {
		return (1);
	}
	if (book->addSecret(&secret) == 1) {
		return (1);
	}

	book->fillPhoneBook(name, lastName, nickName, phoneNumber, secret, index);
    return (0);
}

int    searchContact(PhoneBook *book) {
   
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
				return (1);
			if (std::atoi(index.c_str()) < 1 || std::atoi(index.c_str()) > 8
					|| std::atoi(index.c_str()) > book->getNbContact())
				std::cout << std::endl << "Invalid index" << std::endl;
			else {
				book->displayContact(std::atoi(index.c_str()) - 1);
				valid_index = 1;
			}
		}
	}
    else
		std::cout << "The phone book is empty" << std::endl;
    return (0);
}

int	main(void)
{
    PhoneBook 		book;
    std::string 	input;
	int				end;
	
	end = 0;
    while (!end) {
	
		if (std::cin.eof()) {
			std::cerr << std::endl << "Exit.." << std::endl;
			return (1);
		}
		std::cout << "Enter an instruction: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			if (addContact(&book) == 1) {
				std::cerr << std::endl << "Exit.." << std::endl;
				return (1);
			}
        }
        else if (input.compare("SEARCH") == 0) {
			if (searchContact(&book) == 1) {
				std::cerr << std::endl << "Exit.." << std::endl;
				return (1);
			}
        }
		else if (input.compare("EXIT") == 0) {
			end = 1;
		}
    }
	return (0);
}
