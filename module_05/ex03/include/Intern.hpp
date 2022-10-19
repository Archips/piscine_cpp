#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include <string>
# include <iostream>
# include <exception>

class Form;
class Bureaucrat;

class Intern {

    public:

        Intern(void);
        Intern(const Intern &src);
        ~Intern(void);

        Intern  &operator=(const Intern &rhs);

        Form    *makeForm(std::string form, std::string target);

        class InvalidName : public std::exception {

            const char* what() const throw() {

                return ("Invalid form's name");
            }
        };
};

#endif