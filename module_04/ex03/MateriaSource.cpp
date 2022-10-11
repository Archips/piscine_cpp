/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:57:58 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:57:59 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
 ** CONSTRUCTORS
 */

MateriaSource::MateriaSource(void) {

    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

	std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

MateriaSource::~MateriaSource(void) {

    std::cout << "MateriaSource destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

MateriaSource &MateriaSource operator=(MateriaSource const &rhs) {

    std::cout << "MateriaSource copy assignment operator called" << std::endl;
    if (this != &rhs) {
        delete this->_materiaCopy;
        this->_materiaCopy = new AMateria[4];
        for (int i = 0; i < 4; i ++)
            this->_materiaCopy[i] = rhs._materiaCopy[i];
    }
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void	MateriaSource::learnMateria(AMateria* materia) {

    for (int i = 0; i < 4; i ++) {
        if (this->_materiaCopy[i])
            this->_materiaCopy[i] = materia;
        else
            return;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {

    for (int i = 0; i < 4; i ++) {
        if (this->_materiaCopy[i] && this->materiaCopy._)
    }

}


