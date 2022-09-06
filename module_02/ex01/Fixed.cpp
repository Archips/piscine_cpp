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
	std::cout << "Parametric constructor called" << std::endl;
	this->_nb = nb;
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


std::ostream & operator<<(std::ostream & o, int const & rhs) {

	o << rhs.getRawBits();
	return (o);
}

int	Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}


void Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}

float	Fixed::toFloat(void) const {
	return (roundf(this->_nb);
}

/* int		Fixed::toInt(void) const { */
		
/* } */
