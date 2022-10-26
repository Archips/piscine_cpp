/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:20:00 by athirion          #+#    #+#             */
/*   Updated: 2022/10/26 14:11:43 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>

template< typename T>
void	iter(T *array, unsigned int len, void (*f)(T &)) {

	for (unsigned int i = 0; i < len; i++)
		f(array[i]);
}

template< typename T>
void	incr(T &x) {

	x += 1;
}



template< typename T>
void	print(T &obj) {
	
	std::cout << std::setprecision(1);
	std::cout << obj << std::endl;
}

#endif
