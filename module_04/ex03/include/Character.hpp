/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:28 by athirion          #+#    #+#             */
/*   Updated: 2022/10/13 14:54:21 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Character : virtual public ICharacter {

    public:

        Character(void);
        Character(const std::string name);
        Character(Character const &src);
        virtual ~Character(void);

        Character & operator=(Character const &rhs);

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

		void	initInventory(AMateria **inventory);

    private:

        AMateria        *_inventory[4];
        std::string     _name;
};

#endif
