/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:56:10 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:56:13 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria {

    public:

        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);

        AMateria & operator=(Amateria const &rhs);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:

        const   std::string _type;
};

#endif
