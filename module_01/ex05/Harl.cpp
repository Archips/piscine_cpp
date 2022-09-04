/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:34:27 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 12:34:28 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

}

Harl::~Harl(void) {

}

void    Harl::debug(void){

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void){

    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::error(void){

    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::warning(void){

    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::complain(std::string level) {

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*levelPtr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i ++) {
        if (level.compare(levels[i]) == 0) {
            (this->*levelPtr[i])();
            return ;
        }
    }
    std::cout << "No complain.. Harl must be sick." << std::endl;
}
