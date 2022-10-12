/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:54:10 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:54:11 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

    public:

        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);

        Cat & operator=(Cat const &rhs);

        void            setIdea(std::string idea, unsigned int index);
        std::string     getIdea(unsigned int index) const;
        virtual void    makeSound(void) const;

    private:

        Brain * _brain;
};

#endif
