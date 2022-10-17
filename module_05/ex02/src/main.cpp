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

	ShrubberyCreationForm	f("shrubbery");
	RobotomyRequestForm	r("robot");
	PresidentialPardonForm	p("random");
	Bureaucrat		bob("bob", 2);
	Bureaucrat		bib("bib", 45);
	Bureaucrat		bab("bab", 145);
	std::cout << std::endl << f <<  std::endl;
	std::cout << std::endl << r <<  std::endl;
	std::cout << std::endl << p <<  std::endl;
	std::cout << "/////// " << bob << " ////////" << std::endl;
	f.beSigned(bob);
	f.execute(bob);
	std::cout << std::endl;
	r.beSigned(bob);
    r.execute(bob);
    r.execute(bob);
	std::cout << std::endl;
	p.beSigned(bob);
    p.execute(bob);
    std::cout << std::endl << std::endl;
	std::cout << "//////// " <<  bib << " /////////" <<  std::endl;
	f.beSigned(bib);
    f.execute(bib);
    std::cout << std::endl;
    r.beSigned(bib);
    r.execute(bib);
    r.execute(bib);
    std::cout << std::endl;
    p.beSigned(bib);
    p.execute(bib);
    std::cout << std::endl << std::endl;

	std::cout << " ////////" << bab << " /////////" << std::endl;
	f.beSigned(bab);
    f.execute(bab);
    std::cout << std::endl;
    r.beSigned(bab);
    r.execute(bab);
    r.execute(bab);
    std::cout << std::endl;
    p.beSigned(bab);
    p.execute(bab);
    std::cout << std::endl << std::endl;

	return (0);
}
