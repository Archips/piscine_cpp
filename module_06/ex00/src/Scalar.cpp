/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:48:51 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 13:55:20 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

/*
 ** CONSTRUCTORS
 */

Scalar::Scalar(void){

//    std::cout << "Scalar default constructor called" << std::endl;
	this->_precision = 1;
}

Scalar::Scalar(const Scalar &src) {

//    std::cout << "Scalar copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Scalar::~Scalar(void) {

//    std::cout << "Scalar destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Scalar  &Scalar::operator=(const Scalar &rhs) {

//    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
		this->_precision = rhs._precision;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

bool    Scalar::isChar(char *s) {

    if (s[0] && !s[1] && isprint(s[0]) && !isdigit(s[0]))
        return (true);
    return (false);
}

bool    Scalar::isInt(char *s) {

    unsigned int    i;
    long int        nb;

    i = 0;
    if (s[i] == '-' || s[i] == '+')
        i ++;
    while (s[i]) {
        if (!isdigit(s[i])) {
            return (false);
        }
        i++;
    }
    nb = std::atol(s);
    if (nb >= INT_MIN && nb <= INT_MAX)
        return (true);
    return (false);
}

bool    Scalar::isFloat(char *s) {

    std::string             nb(s);
    unsigned int            i;
    unsigned int            comma;
	int						precision;
    float                   fNb;

    comma = 0;
    i = 0;
	precision = 0;
    if (!nb.compare("-inff") || !nb.compare("+inff") | !nb.compare("nanf"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+')
        i++;
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.') {
			comma++;
			if (comma == 1)
				precision = i;
		}
        else if (nb[i] != 'f' && !isdigit(nb[i]))
            return (false);
    }
    fNb = std::strtof(s, NULL);
	if (precision)
		this->_precision = nb.size() - precision - 1;
    if (nb[nb.size() - 1] == 'f' && comma <= 1 && fNb >= -FLT_MAX && fNb <= std::numeric_limits<float>::max())
        return (true);
    return (false);
}

bool    Scalar::isDouble(char *s) {

    std::string             nb(s);
    unsigned int            i;
    unsigned int            comma;
	int						precision;
    double                  dNb;

    comma = 0;
    i = 0;
	precision = 0;
    if (!nb.compare("-inf") || !nb.compare("+inf") | !nb.compare("nan"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+')
        i++;
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.') { 
            comma++;
			if (comma == 1)
				precision = i;
		}
        if (nb[i] != '.' && !isdigit(nb[i]))
            return (false);
    }
    dNb = std::strtod(s, NULL);
	if (precision)
		this->_precision = nb.size() - precision - 1;
    if (nb[nb.size() -1] != '.' && comma == 1 && dNb >= -DBL_MAX && dNb <= std::numeric_limits<double>::max())
        return (true);
    return (false);
}

void    Scalar::printChar(double value) {

    char c;

    c = static_cast<char>(value);
	if (value < 32 || value > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void    Scalar::printInt(double value) {

    int nb;

    nb = static_cast<int>(value);
    std::cout << "int: " << nb << std::endl;
}

void    Scalar::printFloat(double value) {

    float nb;

    nb = static_cast<float>(value);
    std::cout << "float: " << nb << "f" << std::endl;
}

void    Scalar::printDouble(double value) {

    std::cout << "double: " << value << std::endl;
}

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

void    Scalar::convertInput(char *s) {

    if (this->isChar(s))
        this->castToChar(s);
    else if (this->isInt(s))
        castToInt(s);
    else if (this->isFloat(s))
        castToFloat(s);
    else if (this->isDouble(s))
        castToDouble(s);
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
