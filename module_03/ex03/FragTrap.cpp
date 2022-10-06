/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:49:24 by athirion          #+#    #+#             */
/*   Updated: 2022/10/06 16:51:37 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
 ** CONSTRUCTORS
 */

FragTrap::FragTrap(void) {

    std::cout << "FragTrap default constructor called" << std::endl;
    this->_name = "FragTrap";
    this->_HP = 100;
    this->_energy = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(std::string name) {

    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->_name = name;
    this->_HP = 100;
    this->_energy = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) {

    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

/*
 ** DESTRUCTOR
 */

FragTrap::~FragTrap(void) {

    std::cout << "FragTrap destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

FragTrap &FragTrap::operator=(const FragTrap &rhs) {

    std::cout << "FragTrap copy assignment operator called" << std::endl;
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

void    FragTrap::highFiveGuys(void) {

    std::cout << "Hey you! Wanna high five ?" << std::endl;
}
