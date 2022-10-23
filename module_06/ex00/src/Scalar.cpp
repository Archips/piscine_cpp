#include "Scalar.hpp"

/*
 ** CONSTRUCTORS
 */

Scalar::Scalar(void){

//    std::cout << "Scalar default constructor called" << std::endl;
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
    (void) rhs;
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
    float                   fNb;

    comma = 0;
    i = 0;
    if (!nb.compare("-inff") || !nb.compare("+inff") | !nb.compare("nanf"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+') {
        std::cout << "operator in isFloat" << std::endl;
        i++;
    }
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.')
            comma++;
        else if (nb[i] != 'f' && !isdigit(nb[i]))
            return (false);
    }
    fNb = std::stof(s, NULL);
    std::cout << "fNb -> " << fNb << std::endl;
    if (nb.back() == 'f' && comma <= 1 && fNb >= std::numeric_limits<float>::lowest() && fNb <= std::numeric_limits<float>::max())
        return (true);
    return (false);
}

bool    Scalar::isDouble(char *s) {

    std::string             nb(s);
    unsigned int            i;
    unsigned int            comma;
    double                  dNb;

    comma = 0;
    i = 0;
    if (!nb.compare("-inf") || !nb.compare("+inf") | !nb.compare("nan"))
        return (true);
    if (nb[i] == '-' || nb[i] == '+')
        i++;
    for (; i < nb.size(); i ++) {
        if (nb[i] == '.')
            comma++;
        if (nb[i] != '.' && !isdigit(nb[i]))
            return (false);
    }
    dNb = std::stod(s, NULL);
    if (comma == 1 && dNb >= std::numeric_limits<double>::lowest() && dNb <= std::numeric_limits<double>::max())
        return (true);
    return (false);
}

void    Scalar::printChar(double value) {

    char c;

    c = static_cast<char>(value);
    if (!isprint(c))
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
    std::cout << "char: '" << s[0] << "'" << std::endl;
    this->printInt(value);
    this->printFloat(value);
    this->printDouble(value);
}

void    Scalar::castToInt(char *s) {

    int     nb;
    double  value;

    nb = std::atol(s);
    value = static_cast<double>(nb);
    this->printChar(value);
    std::cout << "int: " << nb << std::endl;
    this->printFloat(value);
    this->printDouble(value);
}

void    Scalar::castToFloat(char *s) {

    float       nb;
    double      value;
    std::string f(s);

    nb = std::stod(s, NULL);
    value = static_cast<double>(nb);
    if (!f.compare("-inff") || !f.compare("+inff") | !f.compare("nanf")) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << s <<  std::endl;
    }
    else {
        this->printChar(value);
        this->printInt(value);
        std::cout << "float: " << nb << "f" <<  std::endl;
    }
    this->printDouble(value);
}

void    Scalar::castToDouble(char * s) {

    double      value;
    std::string d(s);

    value = std::stof(s, NULL);
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

    std::cout << std::fixed << std::setprecision(1);
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