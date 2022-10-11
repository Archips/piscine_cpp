/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:02:26 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 14:51:49 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
    FragTrap rorobot("Rorobot");
    rorobot.fragStatus();

    // ROROBOT DYING //

    rorobot.attack("Archi");
    rorobot.takeDamage(95);
    rorobot.fragStatus();
    rorobot.beRepaired(5);
    rorobot.fragStatus();
    rorobot.highFiveGuys();
    rorobot.fragStatus();
    rorobot.takeDamage(10);
    rorobot.fragStatus();
    rorobot.attack("Archi");
    rorobot.beRepaired(10);

    // ROROBOT RUNNING OUT OF ENERGY //

    /* for (int i = 0; i < 50; i ++) { */
    /*     rorobot.attack("Archi"); */
    /*     rorobot.beRepaired(1); */
    /* } */
    /* std::cout << std::endl; */
    /* rorobot.fragStatus(); */
    /* rorobot.attack("Archi"); */
    /* rorobot.beRepaired(10); */

    // CANONICAL TEST //

    /* FragTrap archibot; */
    /* archibot = rorobot; */
    /* archibot.fragStatus(); */
    /* archibot.setName("Archibot"); */
    /* archibot.takeDamage(7); */
    /* archibot.fragStatus(); */
    /* FragTrap robot(archibot); */
    /* robot.fragStatus(); */
    /* robot.setName("Robot"); */
    /* robot.takeDamage(3); */
    /* robot.attack("Archi"); */
    /* robot.fragStatus(); */
    /* archibot.fragStatus(); */
    /* rorobot.fragStatus(); */

    std::cout << std::endl;

	return (0);
}
