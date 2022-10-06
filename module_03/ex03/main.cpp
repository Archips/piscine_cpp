/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/06 16:27:57 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	FragTrap archi("Archi");
	ScavTrap rorobot("Rorobot");

	std::cout << archi.getName() << " says : Hello" << std::endl;
	std::cout << rorobot.getName() << " says : Hello" << std::endl;

	archi.setDamage(10);

	archi.attack("rorobot");
	rorobot.takeDamage(archi.getDamage());
	std::cout << "Rorobot has " << rorobot.getHP() << " HP left" << std::endl;

	rorobot.beRepaired(100);

	std::cout << "Rorobot has " << rorobot.getEnergy() << " energy left" << std::endl;
	std::cout << "Archi has " << archi.getEnergy() << " energy left" << std::endl;

	for (int i = 0; i < 10; i++) {
		archi.attack("rorobot");
		rorobot.takeDamage(archi.getDamage());
		std::cout << "Rorobot has " << rorobot.getHP() << " HP left" << std::endl;
		std::cout << "Rorobot has " << rorobot.getEnergy() << " energy left" << std::endl;
		std::cout << "Archi has " << archi.getEnergy() << " energy left" << std::endl;
	}

	archi.beRepaired(100);

	std::cout << "Rorobot has " << rorobot.getEnergy() << " energy left" << std::endl;
	std::cout << "Archi has " << archi.getEnergy() << " energy left" << std::endl;

    rorobot.guardGate();
    archi.highFiveGuys();

	return (0);
}
