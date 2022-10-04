/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:53:18 by athirion          #+#    #+#             */
/*   Updated: 2022/10/04 14:57:28 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(3);
	Fixed d(5);

	std::cout << "c -> " << c << std::endl;
	std::cout << "d -> " << d << std::endl;

	c = --d;

	std::cout << "c = --d" << std::endl;
	std::cout << "c -> " << c.toInt() << std::endl;
	std::cout << "d -> " << d.toInt() << std::endl;

	d = c++;

	std::cout << "d = c++" << std::endl;
	std::cout << "c -> " << c.toInt() << std::endl;
	std::cout << "d -> " << d.toInt() << std::endl;

	return 0;
}
