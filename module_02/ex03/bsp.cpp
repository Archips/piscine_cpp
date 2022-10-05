/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/05 11:25:18 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(Point const a, Point const b, Point const c) {

	float x1 = a.get_x().toFloat();
	float x2 = b.get_x().toFloat();
	float x3 = c.get_x().toFloat();
	float y1 = a.get_y().toFloat();
	float y2 = b.get_y().toFloat();
	float y3 = c.get_y().toFloat();
	
	float area = (x1 * (y2 - y3) + x2 * (y3 - y1)+ x3 * (y1 - y2)) / 2.0;
	
	if (area < 0)
		area *= -1;

    return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {


	float A = area(a, b, c);
    float A1 = area(point, b, c);
    float A2 = area(a, point, c);
    float A3 = area(a, b, point);
   
	return (A1 != 0 && A2 != 0 && A3 != 0 && A == A1 + A2 + A3);
}
