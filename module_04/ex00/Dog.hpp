/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:41 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:42 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:

    Dog(void);
    Dog(Dog const &src);
    virtual ~Dog(void);

    Dog & operator=(Dog const &rhs);

    virtual void    makeSound(void) const;
};

#endif
