#include "Scalar.hpp"

/*
 ** CONSTRUCTORS
 */

Scalar::Scalar(void){

    std::cout << "Scalar default constructor called" << std::endl;
}

Scalar::Scalar(const Scalar &src) {

    std::cout << "Scalar copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Scalar::~Scalar(void) {

    std::cout << "Scalar destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Scalar  &Scalar::operator=(const Scalar &rhs) {

    std::cout << "Copy assignment operator called" << std::endl;
    (void) rhs;
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

bool    Scalar::isChar(char *s) {

    if (s[0] && !s[1] && std::strtod(s, NULL) == 0)
        return (true);
    return (false);
}

bool    Scalar::isInt(char *s) {

    unsigned int    i;

    i = 0;
    if (s[i] == '-' || s[i] == '+')
        i ++;
    while (s[i]) {
        if (s[i] < 48 || s[i] > 57) {
            return (false);
        }
        i++;
    }
    return (true);
}

bool    Scalar::isFloat(char *s) {

    std::string             nb(s);
    unsigned int            i;
    unsigned int            comma;

    comma = 0;
    i = 0;
    if (!nb.compare("-inff") || !nb.compare("+inff") | !nb.compare("nanf"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+')
        i++;
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.')
            comma++;
        if (nb[i] != '.' && nb[i] != 'f' && (nb[i] < 48 || nb[i] > 57))
            return (false);
    }
    if (nb.back() == 'f' && comma <= 1 && std::strtod(s, NULL) != 0)
        return (true);
    return (false);
}

bool    Scalar::isDouble(char *s) {

    std::string             nb(s);
    unsigned int            i;
    unsigned int            comma;

    comma = 0;
    i = 0;
    if (!nb.compare("-inf") || !nb.compare("+inf") | !nb.compare("nan"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+')
        i++;
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.')
            comma++;
        if (nb[i] != '.' && nb[i] != 'f' && (nb[i] < 48 || nb[i] > 57))
            return (false);
    }
    if (comma <= 1 && std::strtod(s, NULL) != 0)
        return (true);
    return (false);
}

void    Scalar::convertInput(char *s) {

    if (this->isFloat(s))
        std::cout << s << " is a float" << std::endl;
    else if (this->isDouble(s))
        std::cout << s << " is double" << std::endl;
    else if (this->isInt(s))
        std::cout << s << " is an int" << std::endl;
    else if (this->isChar(s))
        std::cout << s << " is a char" << std::endl;
}