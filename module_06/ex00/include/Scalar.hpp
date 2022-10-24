/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:48:17 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 14:02:34 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <cfloat>
#include <climits>
#include <cstdlib>

class Scalar {

    public:
        Scalar(void);
        Scalar(const Scalar &src);
        ~Scalar(void);

        Scalar &operator=(const Scalar &rhs);

        void    convertInput(char *s);

        private :

            bool    isFloat(char *scalar);
            bool    isInt(char *scalar);
            bool    isDouble(char *scalar);
            bool    isChar(char *scalar);

            void    printChar(double value);
            void    printInt(double value);
            void    printFloat(double value);
            void    printDouble(double value);

            void    castToFloat(char *scalar);
            void    castToInt(char *scalar);
            void    castToDouble(char *scalar);
            void    castToChar(char *scalar);

			int _precision;
};

#endif

