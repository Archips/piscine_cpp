/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:21:06 by athirion          #+#    #+#             */
/*   Updated: 2022/10/31 09:53:38 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
/* #include <array> */


class NoOccurrence : public std::exception {

    const char * what() const throw() {

        return ("No occurrence found");
    }
};

/* template< typename T> */
/* int easyfind(T c, int nb) { */

/*     typename T::iterator it; */
/*     for (it = c.begin(); it != c.end(); it++) { */
/*         if (nb == *it) */
/*             return (nb); */
/*     } */
/*     throw NoOccurrence(); */
/* } */

template <typename T>
int	easyfind(T c, int nb) {
	typename T::iterator it;
	it = std::find(c.begin(), c.end(), nb);
	if (it != c.end())
		return (nb);
	throw NoOccurrence();
}

#endif
