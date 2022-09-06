/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/09/06 17:07:27 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
	
}


Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb << this->_bits ;
}

Fixed::Fixed(const float nb) {

    std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(nb * (1 << this->_bits));
}


Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &rhs) 
		this->_nb = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {

	return (this->_nb);
}


void Fixed::setRawBits(int const raw) {

	this->_nb = raw;
}

float	Fixed::toFloat(void) const {

    float nb;

    nb = this->_nb / (float)(1 << _bits);

	return (nb);
}

int		Fixed::toInt(void) const {

    int nb;

    nb = this->_nb;
    nb = nb >> this->_bits;
    return (nb);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

    o << rhs.toFloat();
    return (o);
}
