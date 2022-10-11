/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:49 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:56:50 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : virtual public AMateria {

public:

    Ice(std::string const &name);
    Ice(Ice const  &src);
    virtual ~Ice(void);

    Ice & operator=(Cure const &rhs);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

    const std::string _type;

};

#endif
