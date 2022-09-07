/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:30 by athirion          #+#    #+#             */
/*   Updated: 2022/09/07 14:04:50 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

	public:

		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed & operator=(Fixed const &rhs);

		bool operator>(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);

		Fixed & operator+(Fixed const &rhs);
		Fixed & operator-(Fixed const &rhs);
		Fixed & operator*(Fixed const &rhs);
		Fixed & operator/(Fixed const &rhs);

		Fixed	operator++(Fixed const &rhs);
		Fixed	operator++(void);
		Fixed	operator--(Fixed const &rhs);
		Fixed	oeprator--(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);	
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b) const;
		static const Fixed &min(const Fixed &a, const Fixed &b) const;
		static Fixed &max(Fixed &a, Fixed &b) const;
		static const Fixed &max(const Fixed &a, const Fixed &b) const;
		

	private:

		int					_nb;
		static const int	_bits = 8;
	

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
