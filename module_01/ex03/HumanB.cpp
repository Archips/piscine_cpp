/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:17:42 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 17:30:53 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string name) {

	this->_name = name;
}

HumanB::~HumanB(void) {

}

void	HumanB::setWeapon(Weapon weapon) {

		if (!weapon)
			this->_weapon = &weapon;
}

void    HumanB::attack(void) const {
	
	std::cout << this->_name << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}
