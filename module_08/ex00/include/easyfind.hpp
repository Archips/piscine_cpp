#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <array>
#include <vector>
#include <list>


class NoOccurrence : public std::exception {

    const char * what() const throw() {

        return ("No occurrence found");
    }
};

template< typename T>
int easyfind(T c, int nb) {

    typename T::iterator it;
    for (it = c.begin(); it != c.end(); it++) {
        if (nb == *it)
            return (nb);
    }
    throw NoOccurrence();
}

#endif
