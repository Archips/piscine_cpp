/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:13:49 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 16:24:28 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {

	this->_type = weapon;
}

Weapon::~Weapon(void) {
}

const std::string&	Weapon::getType(void) const {

	return (this->_type);
}

void			Weapon::setType(std::string type) {

	this->_type = type;
}
