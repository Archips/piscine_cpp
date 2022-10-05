/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/05 14:03:02 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
 ** CONSTUCTORS
 */

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
	
}


Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nb * (1 << this->_bits));
}

Fixed::Fixed(const float nb) {

    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(nb * (1 << this->_bits)));
}


Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*
 ** DESTRUCTORS
 */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR OVERLOAD
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

	return (this->_nb);
}


void Fixed::setRawBits(int const raw) {

	this->_nb = raw;
}

float	Fixed::toFloat(void) const {

	return ((float)this->_nb / (float)(1 << _bits));
}

int		Fixed::toInt(void) const {

    return (this->_nb / (1 << this->_bits));
}

/*
 ** OVERLOAD << OPERATOR
 */

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

    o << rhs.toFloat();
    return (o);
}
