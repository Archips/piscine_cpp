/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:35:19 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 13:04:32 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {
	
	Zombie	*zombies;
	int		N;

	N = 3;
	zombies = zombieHorde(N, "alfred");

    if (!zombies) {
        std::cout << "Error" << std::endl;
        return (1);
    }
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
