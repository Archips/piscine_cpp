/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:17 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:18 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
 ** CONSTRUCTORS
 */

Cat::Cat(void) {

    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const &src) {

    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Cat::~Cat(void) {

    std::cout << "Cat destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Cat &Cat::operator=(const Cat &rhs) {

    std::cout << "Cat copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    Cat::makeSound(void) const{

    std::cout << "<<< MEOOOOOOOOOOOOW >>>" << std::endl;
}
