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

int	main(void)
{
	ScavTrap rorobot("Rorobot");
	rorobot.scavStatus();
	rorobot.takeDamage(3);
    rorobot.scavStatus();
	rorobot.attack("archi");
    rorobot.scavStatus();
	rorobot.beRepaired(10);
    rorobot.scavStatus();
	rorobot.takeDamage(13);
    rorobot.scavStatus();
	rorobot.attack("archi");

	ScavTrap archi(rorobot);
	archi.setName("Archi");

	archi.takeDamage(10);
    archi.scavStatus();
    rorobot.scavStatus();
	archi.attack("rorobot");
	rorobot.takeDamage(10);

    archi.scavStatus();
    rorobot.scavStatus();

	ScavTrap archibot;
	archibot = rorobot;
	archibot.setName("Archibot");

    archi.scavStatus();
    rorobot.scavStatus();
    archibot.scavStatus();

    rorobot.guardGate();

	return (0);
}
