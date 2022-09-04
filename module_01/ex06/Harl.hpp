/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:35:02 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 12:35:03 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl {

    public:

        Harl(void);
        ~Harl(void);

        void    complain(std::string level);

    private:

        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

};

#endif
