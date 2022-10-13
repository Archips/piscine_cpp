/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:39 by athirion          #+#    #+#             */
/*   Updated: 2022/10/13 14:33:16 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

    Cure(void);
    Cure(Cure const  &src);
    virtual ~Cure(void);

    Cure & operator=(Cure const &rhs);

    std::string const & getType() const;
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

    std::string _type;

};

#endif
