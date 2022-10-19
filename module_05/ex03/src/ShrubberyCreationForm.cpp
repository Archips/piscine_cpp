/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:09:20 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:09:22 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
 ** CONSTRUCTORS
 */

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Undefined", 145, 137) {

    std::cout << "Shrubbery default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137) {

    std::cout << "Shrubbery " << name << " constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src.getName(), 145, 137) {

    std::cout << "Shrubbery copy constructor called" << std::endl;
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

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {

    std::cout << "Shrubbery copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_signed = rhs._signed;
    }
    return (*this);
}


/*
 ** MEMBER FUNCTIONS
 */

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	try {

        checkForm(executor);
        executeShrubbery();
        return (1);
    }
	catch (const std::exception &e) {

        std::cout << this->_name << " form couldn't be executed: " << e.what() << std::endl;
	}
    return (0);
}

void		ShrubberyCreationForm::executeShrubbery(void) const {

	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

    infile.open("ShrubberyTree.txt");
    if (!infile.is_open()) {
        throw ShrubberyCreationForm::OpenError();
    }
    outfile.open((this->_name + "_shrubbery").c_str());
    if (!outfile.is_open()) {
        throw ShrubberyCreationForm::OpenError();
    }
	while (getline(infile, line))
		outfile << line << std::endl;
	infile.close();
	outfile.close();
}
