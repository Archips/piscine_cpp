/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:25:08 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 14:43:36 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {

	public:

		Zombie(void);
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void) const;
	
	private:

		std::string _name;

};

Zombie*	zombieHorde(int N, std::string name);

#endif
