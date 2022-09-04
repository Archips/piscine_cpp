/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:38:04 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 12:47:55 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	zombies;

	if (N <= 0) {
		return (NULL);
	}
	zombies = new Zombie[N];
    if (!zombies) {
        return (NULL);
	}
	for (int i = 0; i < N; i ++) {
	    zombies[i].setName(name);
	}
	return (zombies);
}
