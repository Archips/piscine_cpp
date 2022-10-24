/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:48:51 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 14:03:00 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

/*
 ** CONSTRUCTORS
 */

Scalar::Scalar(void){

//    std::cout << "Scalar default constructor called" << std::endl;
	this->_precision = 1;
}

Scalar::Scalar(const Scalar &src) {

//    std::cout << "Scalar copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Scalar::~Scalar(void) {

//    std::cout << "Scalar destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Scalar  &Scalar::operator=(const Scalar &rhs) {

//    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_precision = rhs._precision;
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    Scalar::convertInput(char *s) {

    if (this->isChar(s))
        this->castToChar(s);
    else if (this->isInt(s))
        castToInt(s);
    else if (this->isFloat(s))
        castToFloat(s);
    else if (this->isDouble(s))
        castToDouble(s);
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
