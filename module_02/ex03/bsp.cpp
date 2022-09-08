/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float   area(int x1, int x2, int x3, int y1, int y2, int y3) {

    return (abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0));
}

bool    Point::bsp(Point const &a, Point const &b, Point const &c, Point const &point) const {

    float A = area(a._x.toInt(), b._x.toInt(), c._x.toInt(), a._y.toInt(), b._y.toInt(), c._y.toInt());
    float A1 = area(point._x.toInt(), b._x.toInt(), c._x.toInt(), point._y.toInt(), b._y.toInt(), c._y.toInt());
    float A2 = area(a._x.toInt(), point._x.toInt(), c._x.toInt(), a._y.toInt(), point._y.toInt(), c._y.toInt());
    float A3 = area(a._x.toInt(), b._x.toInt(), point._x.toInt(), a._y.toInt(), b._y.toInt(), point._y.toInt());
    std::cout << "A: " << A << std::endl;
    std::cout << "A1: " << A1 << std::endl;
    std::cout << "A2: " << A2 << std::endl;
    std::cout << "A3: " << A3 << std::endl;
    std::cout << "A1 + A2 + A3 : " << A1 + A2 + A3 << std::endl;
    return (A == A1 + A2 + A3);
}