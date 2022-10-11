/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:39 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:56:41 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : virtual public AMateria {

public:

    Cure(std::string const &name);
    Cure(Cure const  &src);
    virtual ~Cure(void);

    Cure & operator=(Cure const &rhs);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

    const std::string _type;

};

#endif
