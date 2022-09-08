/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _nb(0) {

	// std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int nb) {

	// std::cout << "Int constructor called" << std::endl;
	this->_nb = nb << this->_bits ;
}


Fixed::Fixed(const float nb) {

    // std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(nb * (1 << this->_bits));
}


Fixed::Fixed(const Fixed &fixed) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed::~Fixed(void) {

	// std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &rhs) {

	// std::cout << "Copy assigment operator called" << std::endl;
	if (this != &rhs) 
		this->_nb = rhs.getRawBits();
	
	return (*this);
}


bool Fixed::operator>(const Fixed &rhs) const {

	return (this->_nb > rhs.getRawBits());
}


bool Fixed::operator<(const Fixed &rhs) const {

	return (this->_nb < rhs.getRawBits());
}


bool Fixed::operator>=(const Fixed &rhs) const {

	return (this->_nb >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const {

	return (this->_nb <= rhs.getRawBits());
}


bool Fixed::operator==(const Fixed &rhs) const {

	return (this->_nb == rhs.getRawBits());
}


bool Fixed::operator!=(const Fixed &rhs) const {

	return (this->_nb != rhs.getRawBits());
}


Fixed Fixed::operator+(Fixed const &rhs) const {

	return (this->toFloat() + rhs.toFloat());
}


Fixed Fixed::operator-(Fixed const &rhs) const {

	return (this->toFloat() - rhs.toFloat());
}


Fixed Fixed::operator*(Fixed const &rhs) const {

	return (this->toFloat() * rhs.toFloat());
}


Fixed Fixed::operator/(Fixed const &rhs) const {

	return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++(void) {

    Fixed temp(*this);

    temp._nb = ++this->_nb;
    return (temp);
}


Fixed Fixed::operator++(int) {

    Fixed temp;

    temp._nb = this->_nb++;
    return (temp);
}


Fixed Fixed::operator--(void) {

    Fixed temp(*this);

    temp._nb = --this->_nb;
    return (temp);
}


Fixed Fixed::operator--(int) {

    Fixed temp;

    temp._nb = this->_nb++;
    return (temp);
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


Fixed &Fixed::min(Fixed &a, Fixed &b) {

	if (a._nb < b._nb)
		return (a);
    return (b);
}


Fixed const &Fixed::min(const Fixed &a, const Fixed &b) {

    if (a._nb < b._nb)
        return (a);
    return (b);
}


Fixed &Fixed::max(Fixed &a, Fixed &b) {

	if (a._nb > b._nb)
		return (a);
    return (b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b) {

    if (a._nb > b._nb)
        return (a);
    return (b);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

    o << rhs.toFloat();
    
	return (o);
}
