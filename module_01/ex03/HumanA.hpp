/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:21:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 17:11:44 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
	
		void	attack(void) const;

	private:

		Weapon&		_weapon;
		std::string	_name;

};

#endif
