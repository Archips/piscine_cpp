#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:

    MutantStack(void): std::stack<T>(){}
    MutantStack(const MutantStack<T> &src): std::stack<T>(src) {*this = src;}
    ~MutantStack(void){}

    MutantStack<T>  operator=(const MutantStack<T> &rhs) {
        if (this != &rhs)
            this->c = rhs.c;
        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(void) {
        return (this->c.begin());
    }
    iterator end(void) {
        return (this->c.end());
    }

};

#endif