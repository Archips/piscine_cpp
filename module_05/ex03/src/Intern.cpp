#include "Intern.hpp"

/*
 ** CONSTRUCTORS
 */


Intern::Intern(void) {

    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src) {

    std::cout << "Intern copy constructor called" << std::endl;
    (void) src;
}

/*
 ** DESTRUCTOR
 */

Intern::~Intern(void) {

    std::cout << "Intern destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Intern  &Intern::operator=(const Intern &rhs) {

    std::cout << "Intern copy assignment operator called" << std::endl;
    (void) rhs;
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

Form    *shrubberyForm(std::string target) {

    return (new ShrubberyCreationForm(target));
}
Form    *robotomyForm(std::string target) {

    return (new RobotomyRequestForm(target));
}
Form    *presidentialForm(std::string target) {

    return (new PresidentialPardonForm(target));
}

Form    *Intern::makeForm(std::string form, std::string target) {

    std::string forms[3] = {"shrubbery creation", "robotomy request", "president pardon"};
    Form *(*formPtr[3])(std::string) = {shrubberyForm, robotomyForm, presidentialForm};

    for (int i = 0; i < 3; i ++) {
        if (forms[i] == form) {
            std::cout << "Intern creates " << form << std::endl;
            return (formPtr[i](target));
        }
    }
    throw Intern::InvalidName();
}