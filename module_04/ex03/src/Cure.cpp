/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:32 by athirion          #+#    #+#             */
/*   Updated: 2022/10/12 16:56:23 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
 ** CONSTRUCTORS
 */

Cure::Cure(void): AMateria("cure") {

    std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure const &src){

    std::cout << "Cure copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Cure::~Cure(void) {

    std::cout << "Cure destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Cure & Cure::operator=(const Cure &rhs) {

    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

std::string const &Cure::getType() const {

    return (this->_type);
}

AMateria *Cure::clone(void) const {

    return (new Cure());
}

void    Cure::use(ICharacter &target) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
