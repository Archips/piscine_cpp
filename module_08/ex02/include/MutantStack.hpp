/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:22:04 by athirion          #+#    #+#             */
/*   Updated: 2022/10/31 09:22:05 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    iterator begin(void) {
        return (this->c.begin());
    }
    iterator end(void) {
        return (this->c.end());
    }

    reverse_iterator rbegin(void) {
        return (this->c.rbegin());
    }

    reverse_iterator rend(void) {
        return (this->c.rend());
    }
};

#endif
