/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:20:00 by athirion          #+#    #+#             */
/*   Updated: 2022/10/28 11:02:03 by athirion         ###   ########.fr       */
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
void	print(T &obj) {
	
	std::cout << obj << std::endl;
}

#endif
