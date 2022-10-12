/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:07 by athirion          #+#    #+#             */
/*   Updated: 2022/10/12 17:45:26 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
 ** CONSTRUCTORS
 */

AMateria::AMateria(std::string const & type): type(type) {

    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {

    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

AMateria::~AMateria(void) {

    std::cout << "AMateria destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

AMateria & AMateria::operator=(AMateria const &rhs) {

    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const {

	return (this->_type);
}


