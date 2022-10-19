/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:03:52 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:44:39 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main(void) {

/*
 ** EXCEPTIONS TESTS
 */

    ShrubberyCreationForm	s("shrubbery");
    RobotomyRequestForm	r("robot");
    PresidentialPardonForm	p("pardon");

    std::cout << "<<<<< EXCEPTIONS TESTS >>>>>" << std::endl;

    std::cout << std::endl << "<<<<< SHRUBBERY FORM >>>>>>" << std::endl;

    try {

        //Bureaucrat archi("archi", 2);
        Bureaucrat archi("archi", 50);
        //Bureaucrat archi("archi", 149);

        std::cout << s;
        archi.signForm(s);
        archi.executeForm(s);

    } catch (const std::exception &e) {

        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << "<<<<< ROBOTOMY FORM >>>>>>" << std::endl;

    try {

        //Bureaucrat archi("archi", 2);
        Bureaucrat archi("archi", 50);
        //Bureaucrat archi("archi", 149);

        std::cout << r;
        archi.signForm(r);
        archi.executeForm(r);
        archi.executeForm(r);
        archi.executeForm(r);

    } catch (const std::exception &e) {

        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl << "<<<<< PRESIDENTIAL FORM >>>>>>" << std::endl;

    try {

        //Bureaucrat archi("archi", 2);
        Bureaucrat archi("archi", 50);
        //Bureaucrat archi("archi", 149);

        std::cout << p;
        archi.signForm(p);
        archi.executeForm(p);

    } catch (const std::exception &e) {

        std::cout << "Error: " << e.what() << std::endl;
    }

	return (0);
}
