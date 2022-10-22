#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <string>
#include <iostream>

class Scalar {

    public:
        Scalar(void);
        Scalar(const Scalar &src);
        ~Scalar(void);

        Scalar &operator=(const Scalar &rhs);
        bool    isFloat(char *scalar);
        bool    isInt(char *scalar);
        bool    isDouble(char *scalar);
        bool    isChar(char *scalar);

//        void    castToFloat(char *scalar);
//        void    castToInt(char *scalar);
//        void    castToDouble(char *scalar);
//        void    castToChar(char *scalar);

        void    convertInput(char *s);

    private:

};

//std::ostream & operator<<(std::ostream & o, Scalar const & rhs);

#endif

