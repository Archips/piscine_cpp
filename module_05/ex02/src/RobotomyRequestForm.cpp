/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:09:14 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:09:15 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
 ** CONSTRUCTORS
 */

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Undefined", 72, 45) {

	std::cout << "Robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {

	std::cout << "Robotomy " << target << " constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src.getName(), 72, 45) {

	std::cout << "Robotomy copy constructor called" << std::endl;
}

/*
 ** DESTRUCTOR
 */

RobotomyRequestForm::~RobotomyRequestForm(void) {

	std::cout << "Robotomy destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {

	std::cout << "Robotomy copy assigment operator called" << std::endl;
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	try {

		checkForm(executor);
		std::cout << ">>> #1 <<<" << std::endl;
		if (!executeRobotomy())
			std::cout << executor.getName() << " executed " << this->_name << " form" << std::endl;
		std::cout << ">>> #2 <<<" << std::endl;
	}
	catch (const std::exception &e) {

		std::cout << ">>> #3 <<<" << std::endl;
		std::cout << "Could not execute " << this->_name << " form: " << e.what() << std::endl;
		std::cout << ">>> #4 <<<" << std::endl;
	}
}

int		RobotomyRequestForm::executeRobotomy(void) const {

	std::cout << "**** Drilling noises ****" << std::endl;
	if (rand() % 2 == 0) {
		std::cout << this->_name << " has been robotomized" << std::endl;
		return (0);
	}	
	else
		throw RobotomyRequestForm::RobotomyError();
}
	
