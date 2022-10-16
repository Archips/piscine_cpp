/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:03:52 by athirion          #+#    #+#             */
/*   Updated: 2022/10/15 14:28:49 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

	try {
		
		Bureaucrat archi("archi", 1);
		std::cout << archi << std::endl;
		archi.incrementGrade();
	
	} catch (const std::exception &e) {
	
		std::cout << "Error with archi: " << e.what() << std::endl;
	}

	
	return (0);
}
