/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:56:55 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 15:06:39 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {

	std::string 	string;
	std::string		*stringPTR;
	std::string		stringREF;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	stringREF = string;

	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	/* std::cout << *stringPTR << std::endl; */
	/* std::cout << stringREF << std::endl; */

	/* *stringPTR = "OLALALALA"; */
	/* stringREF = "POPOPOPO"; */

	/* std::cout << "Memory address of string: " << &string << std::endl; */
	/* std::cout << "Memory address of stringPTR: " << stringPTR << std::endl; */
	/* std::cout << "Memory address of stringREF: " << &stringREF << std::endl; */

	/* std::cout << "Value of string: " << string << std::endl; */
	/* std::cout << "Value of stringPTR: " << *stringPTR << std::endl; */
	/* std::cout << "Value of stringREF: " << stringREF << std::endl; */

	return (0);
}
