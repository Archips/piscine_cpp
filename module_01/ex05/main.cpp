/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:34:40 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 12:34:41 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {

    Harl        harl;
    std::string level;

    while (1) {

        if (std::cin.eof()) {
            std::cout << "Exit.." << std::endl;
            return (1);
        }
        std::cout << "Enter your complain: ";
        std::getline(std::cin, level);
        if (level.compare("EXIT") == 0) {
            std::cout << "Exit.." << std::endl;
            return (0);
        }
        harl.complain(level);
    }
}
