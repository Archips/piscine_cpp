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
    this->_weapon = NULL;
}

HumanB::~HumanB(void) {

}

void	HumanB::setWeapon(Weapon &weapon) {

    this->_weapon = &weapon;
}

void    HumanB::attack(void) const {

    if (!this->_weapon)
        std::cout << this->_name << " has no weapon" << std::endl;
    else
	    std::cout << this->_name << " attacks with their "
		    << this->_weapon->getType() << std::endl;
}
