/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:49:15 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 14:21:03 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
 ** CONSTRUCTORS
 */

ClapTrap::ClapTrap(void) {

	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_HP = 10;
	this->_energy = 10;
	this->_damage = 0;
}


ClapTrap::ClapTrap(std::string name) {

	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
	this->_name = name;
	this->_HP = 10;
	this->_energy = 10;
	this->_damage = 0;

}


ClapTrap::ClapTrap(const ClapTrap &src) {

	std::cout << "ClapTrap " << src._name << " copy constructor called" << std::endl;
	this->_name = src._name;
	this->_HP = src._HP;
	this->_energy = src._energy;
	this->_damage = src._damage;
}


/*
 ** DESTRUCTOR
 */

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {

	std::cout << "ClapTrap " << rhs._name << " copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HP = rhs._HP;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

std::string	ClapTrap::getName(void) const {

	return (this->_name);
}

unsigned int	ClapTrap::getHP(void) const {

	return (this->_HP);
}

unsigned int	ClapTrap::getEnergy(void) const {

	return (this->_energy);
}

unsigned int	ClapTrap::getDamage(void) const {

	return (this->_damage);
}

void	ClapTrap::setName(std::string name) {

	this->_name = name;
}

void	ClapTrap::setHP(unsigned int hp) {

	this->_HP = hp;
}

void	ClapTrap::setEnergy(unsigned int energy) {

	this->_energy = energy;
}

void	ClapTrap::setDamage(unsigned int damage) {

	this->_damage = damage;
}
 
void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0) {

		std::cout << "Attack failed " << this->_name << " has not enough resources" << std::endl;
		return ;
	}
    if (this->_HP <= 0) {

        std::cout << "Attack failed " << this->_name << " is dead" << std::endl;
        return;
    }
	
	this->_energy --;
	std::cout << this->_name << " attacks " << target
		<< ", causing " << this->_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_HP <= amount) {
        this->_HP = 0;
        std::cout << this->_name << " has died" << std::endl;
    }
	else {
        this->_HP -= amount;
        std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
    }
}

void	ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energy <= 0) {

        std::cout << "Reparation failed " << this->_name << " has not enough resources" << std::endl;
        return ;
    }
    if (this->_HP <= 0) {

        std::cout << "Reparation failed " << this->_name << " is dead" << std::endl;
        return;
    }

	this->_energy --;
	this->_HP += amount;
	std::cout << this->_name << " gains " << amount << " HP points" << std::endl;
}

void	ClapTrap::clapStatus(void) const {

    std::cout << std::endl;
    std::cout << "-----------[ " << this->_name << " ]-----------" << std::endl;
    std::cout << "HP [ " << this->_HP << " ]" << std::endl;
    std::cout << "Energy [ " << this->_energy << " ]" << std::endl;
    std::cout << "Damage [ " << this->_damage << " ]" << std::endl;
    std::cout << std::endl;
}
