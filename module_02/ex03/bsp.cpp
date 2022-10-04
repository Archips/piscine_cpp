/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/04 17:00:50 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float   area(int x1, int x2, int x3, int y1, int y2, int y3) {

    return (std::abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0));
}

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point) const {

    float A = area(a.get_x().toInt(), b.get_x().toInt(), c.get_x().toInt(), a.get_y().toInt(), b.get_y().toInt(), c.get_y().toInt());
    float A1 = area(point.get_x().toInt(), b.get_x().toInt(), c.get_x().toInt(), point.get_y().toInt(), b.get_y().toInt(), c.get_y().toInt());
    float A2 = area(a.get_x().toInt(), point.get_x().toInt(), c.get_x().toInt(), a.get_y().toInt(), point.get_y().toInt(), c.get_y().toInt());
    float A3 = area(a.get_x().toInt(), b.get_x().toInt(), point.get_x().toInt(), a.get_y().toInt(), b.get_y().toInt(), point.get_y().toInt());
    std::cout << "A: " << A << std::endl;
    std::cout << "A1: " << A1 << std::endl;
    std::cout << "A2: " << A2 << std::endl;
    std::cout << "A3: " << A3 << std::endl;
    std::cout << "A1 + A2 + A3 : " << A1 + A2 + A3 << std::endl;
    return (A == A1 + A2 + A3);
}
