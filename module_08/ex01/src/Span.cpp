#include "Span.hpp"

/*
 ** CONSTRUCTORS
 */

Span::Span(void): _N(0){

}

Span::Span(unsigned int N) {
    this->_N = N;
}

Span::Span(const Span &src) {
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Span::~Span(void) {

}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Span    &Span::operator=(const Span &rhs) {

    if (this != &rhs) {
        this->_vector = rhs._vector;
        this->_N = rhs._N;
    }
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void    Span::addNumber(int nb) {

    if (this->_vector.size() == this->_N)
        throw Span::SpanIsFull();
    this->_vector.push_back(nb);
}

void    Span::display(void) {

    std::vector<int>::iterator it;
    for (it = this->_vector.begin(); it != this->_vector.end(); it ++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int     Span::shortestSpan(void) {
    if (this->_vector.size() <= 1)
        throw Span::ImpossibleSpan();

    int shortest = INT_MAX;
    std::vector<int>::iterator it;

    sort(this->_vector.begin(), this->_vector.end());
    for (it = this->_vector.begin() + 1; it != this->_vector.end(); it ++) {
        if (*it - *(it - 1) < shortest)
            shortest = *it - *(it - 1);
    }
    return (shortest);
}

int     Span::longestSpan(void) {

    if (this->_vector.size() <= 1)
        throw Span::ImpossibleSpan();

    int min = *min_element(this->_vector.begin(), this->_vector.end());
    int max = *max_element(this->_vector.begin(), this->_vector.end());

    return (std::abs(max - min));
}

void    Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

    std::vector<int>    v = std::vector<int>(begin, end);
    if (this->_vector.size() + v.size() > this->_N)
        throw Span::SpanIsFull();
    this->_vector.insert(this->_vector.end(), begin, end);
}

unsigned int    Span::getSize(void) {
    return (this->_vector.size());
}

