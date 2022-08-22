/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 13:39:17 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void    addContact(PhoneBook book) {

    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
    int index;

    index = book.getNbContact() % 8;

    std::cout << "Enter a name :" << std::endl;
    std::cin >> name;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Enter a last name :" << std::endl;
    std::cin >> lastName;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Enter a nickname :" << std::endl;
    std::cin >> nickName;
    std::cout << "Nickname : " << nickName << std::endl;
    std::cout << "Enter a phone number :" << std::endl;
    std::cin >> phoneNumber;
    std::cout << "Phone number : " << phoneNumber << std::endl;
    std::cout << "Enter their darkest secret :" << std::endl;
    std::cin >> secret;
    std::cout << "Darkest Secret : " << secret << std::endl;

    book.fillPhoneBook(name, lastName, nickName, phoneNumber, secret, index);
    return ;
}

void    listContact(PhoneBook book) {
    std::cout << "IN FUNCTION listcontact" << std::endl;
    std::cout << "nb of contact" << book.getNbContact() << std::endl;
    //if (book.getNbContact() != 0) {
        for (int i = 0; i < book.getNbContact() + 1; i ++)
            book.displayContact(i);
    //}
    return ;
}

int	main(void)
{
    PhoneBook book;
    std::string input;

    while (input.compare("EXIT")) {

        std::cin >> input;

        if (input.compare("ADD") == 0){
            addContact(book);
        }
        else if (input.compare("SEARCH") == 0) {
            std::cout << "DEBUG SEARCH" << std::endl;
            listContact(book);
            std::cout << "DEBUG AFTER listcontact()" << std::endl;
        }
        else {
            std::cout << "Wrong instruction: Usage: ADD SEARCH EXIT" << std::endl;
        }

    }
	return (0);
}
