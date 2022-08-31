/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:02:53 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 17:08:30 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon) {
	
	this->_name = name;
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << std::endl;
}
