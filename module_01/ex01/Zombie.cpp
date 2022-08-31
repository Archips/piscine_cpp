/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:15:32 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 14:30:20 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
	std::cout << _name << " has been detroyed" << std::endl;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
}

void	Zombie::announce(void) const {

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
