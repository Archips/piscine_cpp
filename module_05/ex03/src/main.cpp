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

    {
        Intern someRandomIntern;
        Form* rrf;
        try {
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            std::cout << *rrf << std::endl;
            delete rrf;
        }
        catch (const std::exception &e) {
            std::cout << "error : " << e.what() << std::endl;
        }
        std::cout << *rrf << std::endl;
    }

    {
        Intern someRandomIntern;
        Form* rrf;
        try {
            rrf = someRandomIntern.makeForm("robotomy form", "Bender");
            std::cout << *rrf << std::endl;
            delete rrf;
        }
        catch (const std::exception &e) {
            std::cout << "error : " << e.what() << std::endl;
        }

    }

	Bureaucrat		bob("bob", 2);
	Bureaucrat		bib("bib", 45);
	Bureaucrat		bab("bab", 145);

    std::cout << std::endl << bob << std::endl;
    std::cout << std::endl << bib << std::endl;
    std::cout << std::endl << bab << std::endl;

	return (0);
}
