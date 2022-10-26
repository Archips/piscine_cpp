/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:45:39 by athirion          #+#    #+#             */
/*   Updated: 2022/10/26 14:08:16 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template< typename T>
void	increment(T &x) {

	x += 1;
}


int main(void) {

	{
		double *a = new double[10];
	
		for (int i = 0; i < 10; i++)
			a[i] = 0.0;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}
	{
		int *a = new int[10];
	
		for (int i = 0; i < 10; i++)
			a[i] = i;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}

	return (0);
}
