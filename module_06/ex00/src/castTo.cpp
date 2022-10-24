/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   castTo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:32 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 14:01:54 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

void    Scalar::castToChar(char *s) {

    double value;

    value = static_cast<double>(s[0]);
    std::cout << std::fixed << std::setprecision(this->_precision);
    this->printChar(value);
	this->printInt(value);
    this->printFloat(value);
    this->printDouble(value);
}

void    Scalar::castToInt(char *s) {

    int     nb;
    double  value;

    nb = std::atol(s);
    value = static_cast<double>(nb);
    std::cout << std::fixed << std::setprecision(this->_precision);
    this->printChar(value);
    this->printInt(value);
    this->printFloat(value);
    this->printDouble(value);
}

void    Scalar::castToFloat(char *s) {

    float       nb;
    double      value;
    std::string f(s);

    nb = std::strtod(s, NULL);
    value = static_cast<double>(nb);
	if (this->_precision > 1)
    	std::cout << std::fixed << std::setprecision(this->_precision - 1);
	else
    	std::cout << std::fixed << std::setprecision(this->_precision);
    if (!f.compare("-inff") || !f.compare("+inff") | !f.compare("nanf")) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << s <<  std::endl;
    }
    else {
        this->printChar(value);
        this->printInt(value);
        this->printFloat(value);
    }
    this->printDouble(value);
}

void    Scalar::castToDouble(char * s) {

    double      value;
    std::string d(s);

    value = std::strtof(s, NULL);
    std::cout << std::fixed << std::setprecision(this->_precision);
    if (!d.compare("-inf") || !d.compare("+inf") | !d.compare("nan")) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << d << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
    else {
        this->printChar(value);
        this->printInt(value);
        this->printFloat(value);
        this->printDouble(value);
    }
}
