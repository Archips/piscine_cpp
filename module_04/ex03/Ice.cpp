#include "Ice.hpp"

/*
 ** CONSTRUCTORS
 */

Ice::Ice(std::string const &name): AMateria(type) {

    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src){

    std::cout << "Ice copy constructor called" << std::endl;
    this->_type = src._type;
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
    this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

std::string const &getType() const {

    return (this->_type);
}

AMateria &Ice::clone(void) {
    AMateria &ptr = new Ice(this->_type);
    return (ptr);
}

void    Ice::use(ICharacter &target) {

    std::cout << "* shoots an ice bolt at " << target << std::endl;
}
