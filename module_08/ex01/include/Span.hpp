#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>
#include <iostream>
#include <cstdlib>
#include <algorithm>

class Span {

    public:

        Span(void);
        Span(unsigned int N);
        Span(const Span &src);
        ~Span(void);

        Span    &operator=(const Span &rhs);
        void            addNumber(int nb);
        void            fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void            display(void) ;
        int             shortestSpan(void);
        int             longestSpan(void);
        unsigned int    getSize(void);

    private:

        unsigned int _N;
        std::vector<int>   _vector;

        class SpanIsFull : public std::exception {
            const char * what() const throw() {
                return ("The span is full");
            }
        };

        class ImpossibleSpan : public std::exception {
            const char * what() const throw() {
                return ("Impossible span : The span is either empty or contains only one number");
            }
        };
};

#endif


