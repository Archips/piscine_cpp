/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:45:39 by athirion          #+#    #+#             */
/*   Updated: 2022/10/28 11:03:54 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template< typename T>
void	increment(T &x) {
	
	x += 1;
}

template<>
void	increment(std::string &x) {

	std::string s = " Ca va ?";
	x += s;
}

int main(void) {

	std::cout << ">>>>>> ITER ON DOUBLE <<<<<<" << std::endl;
	{
		double *a = new double[10];
		
		std::cout << std::fixed << std::setprecision(1);
		
		for (int i = 0; i < 10; i++)
			a[i] = 42.0;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}
	std::cout << std::endl;
	std::cout << ">>>>>> ITER ON INT <<<<<<" << std::endl;
	{
		int *a = new int[10];
	
		for (int i = 0; i < 10; i++)
			a[i] = i;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}
	
	std::cout << std::endl;
	std::cout << ">>>>>> ITER ON FLOAT <<<<<<" << std::endl;
	{
		float *a = new float[10];
		
		std::cout << std::fixed << std::setprecision(1);
		
		for (int i = 0; i < 10; i++)
			a[i] = 42.0f;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}
	std::cout << std::endl;
	std::cout << ">>>>>> ITER ON STRING <<<<<<" << std::endl;
	{
		std::string *a = new std::string[10];
		std::string s = "salut";
		for (int i = 0; i < 10; i++)
			a[i] = s;
	
		iter(a, 10, print);
		iter(a, 10, increment);
		iter(a, 10, print);
	
		delete [] a;
	}
	return (0);
}
