/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/04 17:06:15 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

/*
 ** CONSTRUCTORS
 */ 

Point::Point(void) : _x(Fixed()), _y(Fixed()) {

	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)){

    // std::cout << "Float constructor called" << std::endl;
}


Point::Point(const Point &point) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = point;
}

/*
 ** DESTRUCTOR
 */

Point::~Point(void) {

	// std::cout << "Destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Point &Point::operator=(const Point &rhs) {

    // std::cout << "Copy assigment operator called" << std::endl;
    this->_rawBits = rhs._rawBits;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

Fixed Point::get_x(void) const {
	
	return (this->_x);
}

Fixed Point::get_y(void) const {

	return (this->_y);
}
