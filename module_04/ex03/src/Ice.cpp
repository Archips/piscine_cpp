/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:46 by athirion          #+#    #+#             */
/*   Updated: 2022/10/12 16:55:38 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
 ** CONSTRUCTORS
 */

Ice::Ice(void): AMateria("ice") {

    std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const &src){

    std::cout << "Ice copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Ice::~Ice(void) {

    std::cout << "Ice destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Ice & Ice::operator=(const Ice &rhs) {

    std::cout << "Ice copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

std::string const &Ice::getType() const {

    return (this->_type);
}

AMateria *Ice::clone(void) const {

    return (new Ice());
}

void    Ice::use(ICharacter &target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
