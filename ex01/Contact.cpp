/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:35:12 by athirion          #+#    #+#             */
/*   Updated: 2022/08/22 13:06:30 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {

	std::cout << "Contact destructor called" << std::endl;
	return ;
}

std::string	Contact::getName(void) const {

	return (this->_name);

}

std::string	Contact::getLastName(void) const {

    return (this->_lastName);

}

std::string	Contact::getNickname(void) const {

    return (this->_nickname);

}

std::string	Contact::getPhoneNumber(void) const {

    return (this->_phoneNumber);

}

std::string	Contact::getSecret(void) const {

    return (this->_darkestSecret);

}

void Contact::setName(std::string name) {

    this->_name = name;
    return ;
}

void Contact::setLastName(std::string lastName) {

    this->_lastName = lastName;
    return ;
}

void Contact::setNickname(std::string nickname) {

    this->_nickname = nickname;
    return ;
}

void Contact::setPhoneNumber(std::string phoneNumber) {

    this->_phoneNumber = phoneNumber;
    return ;
}

void Contact::setSecret(std::string secret) {

    this->_darkestSecret = secret;
    return ;
}

