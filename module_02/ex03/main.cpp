/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/05 11:34:57 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{

    Point const a(1, 3);
    Point const b(2, 1);
    Point const c(6.5, 3);

    Point const in(2.5, 2);
    Point const out(3, 4);
    Point const edge(1.5, 2);
    Point const side(4, 3);

	std::cout << "IN point: " << bsp(a, b, c, in) << std::endl;
	std::cout << "OUT point: " << bsp(a, b, c, out) << std::endl;
	std::cout << "EDGE point: " << bsp(a, b, c, edge) << std::endl;
	std::cout << "SIDE point: " << bsp(a, b, c, side) << std::endl;

	return 0;
}
