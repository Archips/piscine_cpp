/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:24 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:25 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

public:

    Cat(void);
    Cat(Cat const &src);
    virtual ~Cat(void);

    Cat & operator=(Cat const &rhs);

    virtual void    makeSound(void) const;
};

#endif
