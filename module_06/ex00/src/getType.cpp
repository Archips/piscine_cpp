/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:57:45 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 13:58:52 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

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
