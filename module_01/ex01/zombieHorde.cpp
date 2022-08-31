/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:38:04 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 14:50:53 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < 42; i ++)
	{
		if (i % 2 == 0)
			zombies[i].setName(name);
		else
			zombies[i].setName("Archi");
	}
	return (zombies);
}
