/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:33 by athirion          #+#    #+#             */
/*   Updated: 2022/10/26 10:17:59 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
T const	&min(T const &x, T const &y) {

	if (x < y)
		return (x);
	else
		return (y);
}

template<typename T>
T const &max(T const &x, T const &y) {

	if (x > y)
		return (x);
	else
		return (y);
}

template<typename T>
void	swap(T &x, T &y) {

	T	temp;

	temp = x;
	x = y;
	y = temp;
}

#endif
