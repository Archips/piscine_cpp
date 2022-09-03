/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:35:19 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 14:36:29 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie *zombie;
	zombie = newZombie("alfred");
	zombie->announce();
	delete zombie;
	randomChump("archi");
	return (0);
}
