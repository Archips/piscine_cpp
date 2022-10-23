#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

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

};

#endif

