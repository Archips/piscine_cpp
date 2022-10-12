/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:49 by athirion          #+#    #+#             */
/*   Updated: 2022/10/12 17:31:33 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice(void);
	Ice(Ice const &src);
    virtual ~Ice(void);

    Ice & operator=(Cure const &rhs);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

    const std::string _type;

};

#endif
