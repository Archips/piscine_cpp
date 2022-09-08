/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:44:42 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{

    //Point const a(0, 1);
    //Point const b(2.5, 3);
    //Point const c(2.5, 1);
    //Point point(2, 2);

    Point const a(12, 3.5);
    Point const b(2, 5.4);
    Point const c(0.4, 19);
    Point point(-90, -90);

    if (point.bsp(a, b, c, point))
        std::cout << "Inside";
    else
        std::cout << "Not Inside";

    return 0;
}