#include "MateriaSource.hpp"

/*
 ** CONSTRUCTORS
 */

MateriaSource::MateriaSource(void) {

    std::cout << "MateriaSource default constructor called" << std::endl;
}



MateriaSource::~MateriaSource(void) {

    std::cout << ""
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

MateriaSource &MateriaSource operator=(MateriaSource const &rhs) {

    std::cout << "MateriaSource copy assignment operator called" << std::endl;
}