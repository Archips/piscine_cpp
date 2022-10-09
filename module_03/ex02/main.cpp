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
#include "FragTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
    FragTrap rorobot("Rorobot");
    rorobot.fragStatus();
    rorobot.takeDamage(3);
    rorobot.fragStatus();
    rorobot.attack("archi");
    rorobot.fragStatus();
    rorobot.beRepaired(10);
    rorobot.fragStatus();
    rorobot.takeDamage(13);
    rorobot.fragStatus();
    rorobot.attack("archi");

    FragTrap archi(rorobot);
    archi.setName("Archi");

    archi.takeDamage(10);
    archi.fragStatus();
    rorobot.fragStatus();
    archi.attack("rorobot");
    rorobot.takeDamage(10);

    archi.fragStatus();
    rorobot.fragStatus();

    FragTrap archibot;
    archibot = rorobot;
    archibot.setName("Archibot");

    archi.fragStatus();
    rorobot.fragStatus();
    archibot.fragStatus();

    archi.highFiveGuys();

	return (0);
}
