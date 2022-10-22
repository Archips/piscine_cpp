/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:03:52 by athirion          #+#    #+#             */
/*   Updated: 2022/10/20 13:54:08 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

    /*
     ** EXCEPTIONS TESTS
     */

    std::cout << "<<<<< EXCEPTIONS TESTS >>>>>" << std::endl;

	try {
		
		//Bureaucrat archi("archi", -345);
        //Bureaucrat archi("archi", 45);
        //Bureaucrat archi("archi", 0);
        //Bureaucrat archi("archi", 150);
        Bureaucrat archi("archi", 2);
        //Bureaucrat archi("archi", 2147483649);
        //Bureaucrat archi("archi", -2147483649);
		std::cout << archi;
		archi.incrementGrade();
        std::cout << archi;
        archi.decrementGrade();
        std::cout << archi;
        archi.incrementGrade();
        std::cout << archi;
        archi.incrementGrade();
        std::cout << archi;

	} catch (const std::exception &e) {
	
		std::cout << "Error with archi: " << e.what() << std::endl;
	}

    /*
     ** COPY TESTS
     */

    std::cout << std::endl << ">>>>> COPY TESTS <<<<<" << std::endl;

    Bureaucrat archi("Archi", 50);
    std::cout << archi;
    Bureaucrat archibad(archi);
    std::cout << archibad;
    Bureaucrat archips;
    archips = archi;
    std::cout << archips;
	
	return (0);
}
