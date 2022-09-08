/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:08:38 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:16:53 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	public:

	    Point(void);
        Point(float const x, float const y);
	    Point(Point const &src);
	    ~Point(void);

	    Point & operator=(Point const &rhs);

    bool  bsp(Point const &a, Point const &b, Point const &c, Point const &point) const;

	private:

        int	_rawBits;
        Fixed const         _x;
        Fixed const         _y;
};

float area(int x1, int x2, int x3, int y1, int y2, int y3) ;

#endif
