#include "WrongCat.hpp"

/*
 ** CONSTRUCTORS
 */

WrongCat::WrongCat(void) {

    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) {

    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

WrongCat::~WrongCat(void) {

    std::cout << "WrongCat destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

WrongCat &WrongCat::operator=(const WrongCat &rhs) {

    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    WrongCat::makeSound(void) const{

    std::cout << "<<< MEOOOOOOOOOOOOW >>>" << std::endl;
}
