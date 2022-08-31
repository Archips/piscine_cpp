/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:35:19 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 14:52:36 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {
	
	Zombie *zombies;
	zombies = zombieHorde(42, "alfred");
	for (int i = 0; i < 42; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
