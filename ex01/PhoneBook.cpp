/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:00 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 13:41:54 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}
