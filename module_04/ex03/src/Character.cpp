/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:23 by athirion          #+#    #+#             */
/*   Updated: 2022/10/13 14:55:46 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

/*
 ** CONSTRUCTORS
 */

Character::Character(void) {

    std::cout << "Character default constructor called" << std::endl;
	this->_name = "stranger";
	initInventory(this->_inventory);
}

Character::Character(const std::string name) {

    std::cout << "Character " << name << " constructor called" << std::endl;
    this->_name = name;
	initInventory(this->_inventory);
}

Character::Character(Character const &src) {

    std::cout << "Character copy constructor called" << std::endl;
	
	this->_name = src._name;
	for (int i = 0; i < 4; i ++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (src._inventory[i])
			this->_inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

/*
 ** DESTRUCTOR
 */

Character::~Character(void) {

    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i ++) {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Character &Character::operator=(const Character &rhs) {

    std::cout << "Character copy assignment called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i ++) {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

std::string const &Character::getName() const {

    return (this->_name);
}

void    Character::equip(AMateria *m) {

    for (int i = 0; i < 4; i ++) {
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            return ;
        }
    }
    std::cout << "Couldn't equip " << this->_name << ". Inventory is full" << std::endl;
}

void    Character::unequip(int idx) {

    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter &target) {

    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}

void	Character::initInventory(AMateria **inventory) {

	for (int i = 0; i < 4; i ++)
		inventory[i] = NULL;
}
