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
    ClapTrap::_name = "Unknown_clap_name";
    this->_HP = FragTrap::_hitPoint;
    this->_energy = ScavTrap::_energyPoint;
    this->_damage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
    this->DiamondTrap::_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_HP = FragTrap::_hitPoint;
    this->_energy = ScavTrap::_energyPoint;
    this->_damage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src){

	std::cout << "DiamondTrap " << src._name << " copy constructor called" << std::endl;
    this->_name = src._name;
    ClapTrap::_name = src._name + "_clap_name";
    this->_HP = src._HP;
    this->_energy = src._energy;
    this->_damage = src._damage;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {

	std::cout << "DiamondTrap " << rhs._name << " copy assignment operator called" << std::endl;
    this->_name = rhs._name;
    ClapTrap::_name = rhs._name + "_clap_name";
    this->_HP = rhs._HP;
    this->_energy = rhs._energy;
    this->_damage = rhs._damage;
	return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void	DiamondTrap::whoAmI(void){

	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::setName(std::string name) {

    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
}


void	DiamondTrap::diamondStatus(void) const {

    std::cout << std::endl;
    std::cout << "-----------[ " << this->_name << " ]-----------" << std::endl;
    std::cout << "HP [ " << this->_HP << " ]" << std::endl;
    std::cout << "Energy [ " << this->_energy << " ]" << std::endl;
    std::cout << "Damage [ " << this->_damage << " ]" << std::endl;
    std::cout << std::endl;
}

void    DiamondTrap::attack(const std::string &target) {

    this->ScavTrap::attack(target);
}