/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 14:26:36 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap rorobot("Rorobot");
    rorobot.clapStatus();

    // ROROBOT DYING //

    rorobot.attack("Archi");
    rorobot.takeDamage(9);
    rorobot.clapStatus();
    rorobot.beRepaired(5);
    rorobot.clapStatus();
    rorobot.takeDamage(10);
    rorobot.clapStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);

    // ROROBOT RUNNING OUT OF ENERGY //

    /* for (int i = 0; i < 10; i ++) */
    /* 	rorobot.attack("Archi"); */
    /* std::cout << std::endl; */
    /* rorobot.clapStatus(); */
    /* rorobot.attack("Archi"); */
    /* rorobot.beRepaired(10); */

    // CANONICAL TEST //

    /* ClapTrap archibot; */
    /* archibot = rorobot; */
    /* archibot.clapStatus(); */
    /* archibot.setName("Archibot"); */
    /* archibot.takeDamage(7); */
    /* archibot.clapStatus(); */
    /* ClapTrap robot(archibot); */
    /* robot.clapStatus(); */
    /* robot.setName("Robot"); */
    /* robot.takeDamage(3); */
    /* robot.attack("Archi"); */
    /* robot.clapStatus(); */
    /* archibot.clapStatus(); */
    /* rorobot.clapStatus(); */

    std::cout << std::endl;
	return (0);
}
