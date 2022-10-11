/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:55:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:55:42 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

    WrongCat(void);
    WrongCat(WrongCat const &src);
    virtual ~WrongCat(void);

    WrongCat & operator=(WrongCat const &rhs);

    void    makeSound(void) const;
};

#endif
