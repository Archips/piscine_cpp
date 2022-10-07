/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:49:24 by athirion          #+#    #+#             */
/*   Updated: 2022/10/07 12:46:30 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
 ** CONSTRUCTORS
 */ 

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor called" <<std::endl;
	this->_name = "DiamondTrap";
	this->setHP(FragTrap::_HP);
	this->setDamage(FragTrap::_damage);
	this->setEnergy(ScavTrap::_energy);
}

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
	this->_name = name;
	this->setName(name + "_clap_name");
	this->setHP(FragTrap::_HP);
	this->setDamage(FragTrap::_damage);
	this->setEnergy(ScavTrap::_energy);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

/*
 ** DESTRUCTOR
 */

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {

	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	(void) rhs;
	return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void	DiamondTrap::whoAmI(void) {

	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}
