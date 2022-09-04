/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:35:07 by athirion          #+#    #+#             */
/*   Updated: 2022/09/04 12:35:09 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    Harl        harl;
    std::string level;

    if (ac != 2) {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    level = av[1];
    harl.complain(level);
    return (0);
}
