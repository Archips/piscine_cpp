/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:09:31 by athirion          #+#    #+#             */
/*   Updated: 2022/08/31 16:26:56 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon {

	public:
		
		Weapon(std::string weapon);
		~Weapon(void);
		const	std::string&	getType(void) const;
		void					setType(std::string type);

	private:
	
		std::string _type;

};

#endif
