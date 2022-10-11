/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:55:06 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:55:07 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
 ** CONSTRUCTORS
 */

WrongAnimal::WrongAnimal(void) {

    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {

    std::cout << "WrongAnimal of type " << type << " constructor called" << std::endl;
    this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

WrongAnimal::~WrongAnimal(void) {

    std::cout << "WrongAnimal destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {

    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void    WrongAnimal::setType(std::string type) {

    this->_type = type;
}

std::string WrongAnimal::getType(void) const{

    return (this->_type);
}

void    WrongAnimal::makeSound(void) const{

    std::cout << "<<< Default animal sound >>>" << std::endl;
}
