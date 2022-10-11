/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:33 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:33 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
 ** CONSTRUCTORS
 */

Dog::Dog(void) {

    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const &src) {

    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Dog::~Dog(void) {

    std::cout << "Dog destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Dog &Dog::operator=(const Dog &rhs) {

    std::cout << "Dog copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    Dog::makeSound(void) const{

    std::cout << "<<< BAAAAAAAAARKING >>>" << std::endl;
}
