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
#include "Intern.hpp"
#include "Form.hpp"

int main(void) {

    Bureaucrat archi("archi", 2);
    //Bureaucrat archi("archi", 50);
    //Bureaucrat archi("archi", 149);

    std::cout << std::endl << "-----------------------------------" << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf) {
            std::cout << *rrf << std::endl;
            archi.signForm(*rrf);
            archi.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << std::endl << "-----------------------------------" << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("wrong name", "Bender");
        if (rrf) {
            std::cout << *rrf << std::endl;
            delete rrf;
        }
    }

    std::cout << std::endl << "-----------------------------------" << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if (rrf) {
            std::cout << *rrf << std::endl;
            archi.signForm(*rrf);
            archi.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << std::endl << "-----------------------------------" << std::endl;

    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("president pardon", "Bender");
        if (rrf) {
            std::cout << *rrf << std::endl;
            archi.signForm(*rrf);
            archi.executeForm(*rrf);
            delete rrf;
        }
    }

    std::cout << std::endl << "-----------------------------------" << std::endl;

	return (0);
}
