/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/07 14:09:09 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	status(ScavTrap &clapTrap) {
	
	std::cout << std::endl;
	std::cout << "-----------[ " << clapTrap.getName() << " ]-----------" << std::endl;
	std::cout << "HP [ " << clapTrap.getHP() << " ]" << std::endl;
	std::cout << "Energy [ " << clapTrap.getEnergy() << " ]" << std::endl;
	std::cout << "Damage [ " << clapTrap.getDamage() << " ]" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ScavTrap rorobot("Rorobot");
	status(rorobot);
	rorobot.setDamage(10);
	status(rorobot);
	rorobot.takeDamage(3);
	status(rorobot);
	rorobot.attack("archi");
	status(rorobot);
	rorobot.beRepaired(10);
	status(rorobot);
	rorobot.takeDamage(13);
	status(rorobot);
	rorobot.attack("archi");

	ScavTrap archi(rorobot);
	archi.setName("Archi");

	archi.takeDamage(10);
	status(archi);
	status(rorobot);
	archi.attack("rorobot");
	rorobot.takeDamage(10);

	status(archi);
	status(rorobot);

	ScavTrap archibot;
	archibot = rorobot;
	archibot.setName("Archibot");
	
	status(archi);
	status(rorobot);
	status(archibot);

    rorobot.guardGate();

	return (0);
}
