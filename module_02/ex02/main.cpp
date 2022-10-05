/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:53:18 by athirion          #+#    #+#             */
/*   Updated: 2022/10/05 14:39:13 by athirion         ###   ########.fr       */
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

	Fixed e( Fixed (6.5f) / Fixed (2.0f));

	std::cout << "e / 2" << std::endl;
	std::cout << "e -> " << e.toFloat() << std::endl;
	std::cout << "e -> " << e.toInt() << std::endl;

	e = e + Fixed(4);

	std::cout << "e + 4" << std::endl;
	std::cout << "e -> " << e.toInt() << std::endl;

	e = e - Fixed(1);

	std::cout << "e - 1" << std::endl;
	std::cout << "e -> " << e.toInt() << std::endl;

	e = e * Fixed(2);
	std::cout << "e * 2" << std::endl;
	std::cout << "e -> " << e.toInt() << std::endl;
	std::cout << "e -> " << e.toFloat() << std::endl;
	std::cout << "e -> " << e.toInt() << std::endl;

	return 0;
}
