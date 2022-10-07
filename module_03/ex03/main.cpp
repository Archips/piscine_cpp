/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/07 12:55:12 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap rorobot("Rorobot");
	
	std::cout << "--------------------------" << std::endl;
	std::cout << rorobot.getName() << "'s HP " << rorobot.getHP() << std::endl;
	std::cout << rorobot.getName() << "'s energy " << rorobot.getEnergy() << std::endl;
	std::cout << rorobot.getName() << "'s damage " << rorobot.getDamage() << std::endl;
	/* std::cout << "--------------------------" << std::endl; */
	/* rorobot.attack("archi"); */
	/* std::cout << "--------------------------" << std::endl; */
	/* std::cout << rorobot.getName() << "'s HP " << rorobot.getHP() << std::endl; */
	/* std::cout << rorobot.getName() << "'s HP " << rorobot.getEnergy() << std::endl; */
	/* std::cout << rorobot.getName() << "'s HP " << rorobot.getDamage() << std::endl; */
	std::cout << "--------------------------" << std::endl;
	rorobot.takeDamage(10);
	std::cout << "--------------------------" << std::endl;
	std::cout << rorobot.getName() << "'s HP " << rorobot.getHP() << std::endl;
	std::cout << rorobot.getName() << "'s energy " << rorobot.getEnergy() << std::endl;
	std::cout << rorobot.getName() << "'s damage " << rorobot.getDamage() << std::endl;
	std::cout << "--------------------------" << std::endl;
	rorobot.beRepaired(10);
	std::cout << "--------------------------" << std::endl;
	std::cout << rorobot.getName() << "'s HP " << rorobot.getHP() << std::endl;
	std::cout << rorobot.getName() << "'s energy " << rorobot.getEnergy() << std::endl;
	std::cout << rorobot.getName() << "'s damage " << rorobot.getDamage() << std::endl;
	std::cout << "--------------------------" << std::endl;
	rorobot.guardGate();
	std::cout << "--------------------------" << std::endl;
	rorobot.highFiveGuys();
	std::cout << "--------------------------" << std::endl;
	rorobot.whoAmI();
	return (0);
}
