/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:09 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:12 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

    public:

        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal(void);

        Animal & operator=(Animal const &rhs);

        void                setType(std::string type);
        std::string getType(void) const;
        virtual void        makeSound(void) const;

    protected:

        std::string _type;
};

#endif
