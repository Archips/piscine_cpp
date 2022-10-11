/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:54:01 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:54:03 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

    public:

        Brain(void);
        Brain(Brain const &src);
        ~Brain (void);

        Brain & operator=(Brain const &rhs);
        void        cpyBrain(Brain *brain);
        void        setIdea(std::string idea, unsigned int index);
        std::string getIdea(unsigned int index) const;

    private:

        std::string _ideas[100];
};

#endif
