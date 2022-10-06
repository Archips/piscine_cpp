/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:41:16 by athirion          #+#    #+#             */
/*   Updated: 2022/10/06 15:53:58 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap {

	public :

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const &rhs);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

		void			setName(std::string name);
		void			setHP(unsigned int hp);
		void			setEnergy(unsigned int energy);
		void			setDamage(unsigned int damage);

	private :

		std::string 	_name;
		unsigned int	_HP;
		unsigned int	_energy;
		unsigned int	_damage;

};




#endif
