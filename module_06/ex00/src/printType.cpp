/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:59:29 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 13:59:53 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

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
