/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

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


Point::~Point(void) {

	// std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(const Point &rhs) {

    // std::cout << "Copy assigment operator called" << std::endl;
    this->_rawBits = rhs._rawBits;
    return (*this);
}