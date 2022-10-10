#include "Dog.hpp"

/*
 ** CONSTRUCTORS
 */

Dog::Dog(void) {

    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &src) {

    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = src._type;
    this->_brain = new Brain();
    this->_brain->cpyBrain(src._brain);
}

/*
 ** DESTRUCTOR
 */

Dog::~Dog(void) {

    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Dog &Dog::operator=(const Dog &rhs) {

    std::cout << "Dog copy assignment operator called" << std::endl;
    this->_type = rhs._type;
    this->_brain->cpyBrain(rhs._brain);
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    Dog::makeSound(void) const{

    std::cout << "<<< BAAAAAAAAARKING >>>" << std::endl;
}
