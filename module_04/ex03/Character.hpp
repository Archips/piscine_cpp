/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:28 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:56:29 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
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

    private:

        AMateria            _inventory[4];
        const std::string   _name;
};

#endif
