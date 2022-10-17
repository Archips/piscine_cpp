/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:07:53 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:43:00 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
 ** CONSTRUCTORS
 */

PresidentialPardonForm::PresidentialPardonForm(void): Form("Undefined", 25, 5) {

	std::cout << "Presidential default constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5) {

	std::cout << "Presidential " << target << " constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src.getName(), 25, 5) {

	std::cout << "Presidential copy constructor called" << std::endl;
}

/*
 ** DESTRUCTOR
 */

PresidentialPardonForm::~PresidentialPardonForm(void) {

	std::cout << "Presidential destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {

	std::cout << "Presidential copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	try {
		
		checkForm(executor);	
		std::cout << "Message for " << this->_name << ": \"You've been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (const std::exception &e) {

		std::cout << "Could not execute " << this->_name << " form: " << e.what() << std::endl;
	}
}
