/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:38:45 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 14:08:21 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
    PhoneBook 		book;
    std::string 	input;
	int				end;
	
	end = 0;
    while (!end) {
	
		if (std::cin.eof()) {
			std::cout << std::endl << "Exit.." << std::endl;
			return (1);
		}
		std::cout << "Enter an instruction: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			if (book.addContact() == 1) {
				std::cout << std::endl << "Exit.." << std::endl;
				return (1);
			}
        }
        else if (input.compare("SEARCH") == 0) {
			if (book.searchContact() == 1) {
				std::cout << std::endl << "Exit.." << std::endl;
				return (1);
			}
        }
		else if (input.compare("EXIT") == 0) {
			end = 1;
		}
    }
	return (0);
}
