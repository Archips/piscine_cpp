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

#include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap rorobot("Rorobot");
    rorobot.scavStatus();

    // ROROBOT DYING //

    rorobot.attack("Archi");
    rorobot.takeDamage(95);
    rorobot.scavStatus();
    rorobot.beRepaired(5);
    rorobot.scavStatus();
    rorobot.guardGate();
    rorobot.scavStatus();
    rorobot.takeDamage(10);
    rorobot.scavStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);

    // ROROBOT RUNNING OUT OF ENERGY //

    /*for (int i = 0; i < 50; i ++)
        rorobot.attack("Archi");
    std::cout << std::endl;
    rorobot.scavStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);*/

    // CANONICAL TEST //

    /* ScavTrap archibot;
    archibot = rorobot;
    archibot.scavStatus();
    archibot.setName("Archibot");
    archibot.takeDamage(7);
    archibot.scavStatus();
    ScavTrap robot(archibot);
    robot.scavStatus();
    robot.setName("Robot");
    robot.takeDamage(3);
    robot.attack("Archi");
    robot.scavStatus();
    archibot.scavStatus();
    rorobot.scavStatus(); */

    std::cout << std::endl;
    return (0);
}
