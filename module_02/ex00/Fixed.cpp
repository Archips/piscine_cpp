/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/04 16:36:59 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/*
 ** CONSTRUCTORS
 */

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
	
}


Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*
 ** DESTRUCTOR
 */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &rhs) 
		this->_nb = rhs.getRawBits();
	return *this;
}

/*
 ** MEMBER FUNCTIONS
 */

int	Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}
