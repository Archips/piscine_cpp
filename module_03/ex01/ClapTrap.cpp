/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:49:15 by athirion          #+#    #+#             */
/*   Updated: 2022/10/06 16:26:56 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
 ** CONSTRUCTORS
 */

ClapTrap::ClapTrap(void) {

	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "ClapTrap";
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

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}


/*
 ** DESTRUCTOR
 */

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {

	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
	if (_HP == 0 || _energy == 0) {

		std::cout << _name << " has not enough ressources to attack " << target << std::endl;
		return ;
	}
	
	this->_energy --;
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_HP <= amount)
		this->_HP = 0;
	else
		this->_HP -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_HP == 0 || _energy == 0) {

		std::cout << _name << " has not enough ressources to be repaired" << std::endl;
		return ;
	}

	_energy --;
	_HP += amount;
	std::cout << "ClapTrap " << _name << " gains " << amount << " HP points" << std::endl;
}
