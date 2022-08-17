/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:35:12 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 14:40:12 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Contact::getNb(void) {

	return this->_nbContact;

}

void	Contact::setNb(void) {

	this->_nbContact ++;
	return ;

}
