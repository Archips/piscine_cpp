/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:08:38 by athirion          #+#    #+#             */
/*   Updated: 2022/10/05 10:34:05 by athirion         ###   ########.fr       */
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

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;

	private:

        Fixed const         _x;
        Fixed const         _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
/* float area(Point const a, Point const b, Point const c); */

#endif
