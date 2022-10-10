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
