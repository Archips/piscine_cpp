/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:30 by athirion          #+#    #+#             */
/*   Updated: 2022/09/06 17:07:10 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed & operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);	
		float	toFloat(void) const;
		/* int		toInt(void) const; */

	private:

		int					_nb;
		static const int	_bits = 8;
	

};

std::ostream & operator<<(std::ostream & o, int const & rhs);

#endif
