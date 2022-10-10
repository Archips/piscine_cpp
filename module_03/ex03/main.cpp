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

#include "DiamondTrap.hpp"

int	main(void)
{
    DiamondTrap rorobot("Rorobot");
    rorobot.diamondStatus();

    // ROROBOT DYING //

    rorobot.attack("Archi");
    rorobot.takeDamage(95);
    rorobot.diamondStatus();
    rorobot.beRepaired(5);
    rorobot.diamondStatus();
    rorobot.whoAmI();
    rorobot.diamondStatus();
    rorobot.guardGate();
    rorobot.diamondStatus();
    rorobot.highFiveGuys();
    rorobot.diamondStatus();
    rorobot.takeDamage(10);
    rorobot.diamondStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);

    // ROROBOT RUNNING OUT OF ENERGY //

    /*for (int i = 0; i < 50; i ++)
        rorobot.attack("Archi");
    std::cout << std::endl;
    rorobot.diamondStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);*/

    // CANONICAL TEST //

    /*DiamondTrap archibot;
    archibot = rorobot;
    archibot.diamondStatus();
    archibot.setName("Archibot");
    archibot.takeDamage(7);
    archibot.whoAmI();
    archibot.diamondStatus();
    DiamondTrap robot(archibot);
    robot.diamondStatus();
    robot.setName("Robot");
    robot.takeDamage(3);
    robot.whoAmI();
    robot.attack("Archi");
    robot.diamondStatus();
    archibot.diamondStatus();
    rorobot.diamondStatus();*/

    std::cout << std::endl;

    return (0);
}
