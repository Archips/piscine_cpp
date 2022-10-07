/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:49:24 by athirion          #+#    #+#             */
/*   Updated: 2022/10/07 14:15:32 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
 ** CONSTRUCTORS
 */


ScavTrap::ScavTrap(void) {

    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_name = "ScavTrap";
    this->_HP = 100;
    this->_energy = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {

    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    this->_name = name;
    this->_HP = 100;
    this->_energy = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) {

    std::cout << "ScavTrap " << src._name << " copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {

    std::cout << "ScavTrap " << rhs._name << " copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_HP = rhs._HP;
        this->_energy = rhs._energy;
        this->_damage = rhs._damage;
    }
    return (*this);
}

/*
 ** MEMBER FUNCTION
 */

void    ScavTrap::guardGate(void) {

    std::cout << this->_name << " gate keeper mode activated" << std::endl;
}
