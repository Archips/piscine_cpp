#include "../include/ShrubberyCreationForm.hpp"

/*
 ** CONSTRUCTORS
 */

ShrubberyCreationForm::ShrubberyCreationForm(void):
    _name("Undefined"), _signed(false), _signedGrade(145), _execGrade(137) {

    std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
    _name(name), _signed(false), _signedGrade(145), _execGrade(137) {

    std::cout << "Shrubbery " << name << " constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {

    std::cout << "Shrubbery copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

    std::cout << "Shrubbery destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

ShrubberyCreationForm &Shrubbery::operator=(const ShrubberyCreationForm &rhs) {

    std::cout << "Shrubbery copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_signed = rhs._signed;
    }
    return (*this);
}

