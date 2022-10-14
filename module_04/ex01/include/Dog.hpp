/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:51:38 by athirion          #+#    #+#             */
/*   Updated: 2022/10/14 10:15:51 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

    public:

        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog & operator=(Dog const &rhs);

        void            setIdea(std::string idea, unsigned int index);
        std::string     getIdea(unsigned int index) const;
		virtual void    makeSound(void) const;

    private:

        Brain *_brain;
};

#endif
