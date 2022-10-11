/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:58:03 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:58:05 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: virtual public IMateriaSource{

    public:

        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        ~MateriaSource(void);

        MateriaSource & operator=(MateriaSource const &rhs);

        virtual ~MateriaSource();
        virtual void learnMateria(AMateria* materia);
        virtual AMateria* createMateria(std::string const & type);

    private:

        AMateria    _materiaCopy[4];
};

#endif
