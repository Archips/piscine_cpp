/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/07 13:59:32 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap rorobot("Rorobot");
	rorobot.clapStatus();
	rorobot.setDamage(10);
	rorobot.clapStatus();
	rorobot.takeDamage(3);
    rorobot.clapStatus();
	rorobot.attack("archi");
    rorobot.clapStatus();
	rorobot.beRepaired(10);
    rorobot.clapStatus();
	rorobot.takeDamage(13);
    rorobot.clapStatus();
	rorobot.attack("archi");

	ClapTrap archi(rorobot);
	archi.setName("Archi");

	archi.takeDamage(10);
	archi.clapStatus();
    rorobot.clapStatus();
	archi.attack("rorobot");
	rorobot.takeDamage(10);

    archi.clapStatus();
    rorobot.clapStatus();

	ClapTrap archibot;
	archibot = rorobot;
	archibot.setName("Archibot");

    archi.clapStatus();
    rorobot.clapStatus();
	archibot.clapStatus();

	return (0);
}
