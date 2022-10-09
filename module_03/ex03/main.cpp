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
    rorobot.attack("Archi");
    rorobot.guardGate();
    rorobot.highFiveGuys();
	rorobot.whoAmI();
	return (0);
}
