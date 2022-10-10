#include "AMateria.hpp"

/*
 ** CONSTRUCTORS
 */

AMateria::AMateria(std::string const & type) {

    std::cout << "AMateria constructor called" << std::endl;
    this->_type = type;
}

AMateria::AMateria(AMateria const &src) {

    std::cout << "AMateria copy constructor called" << std::endl;
    this->_type = src._type;
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

AMateria & AMateria::operator=(const AMateria &rhs) {

    std::cout << "AMateria copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}