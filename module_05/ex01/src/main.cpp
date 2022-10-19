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

    /*
     ** EXCEPTIONS TESTS
     */

    std::cout << "<<<<< EXCEPTIONS TESTS >>>>>" << std::endl;

    try {
        Form form("3MMC", 70, 58);
        //Form form("3MMC", -436587, 156);
        //Form form("3MMC", 241, 58);
        std::cout << form;
        //Bureaucrat archi("archi", -345);
        //Bureaucrat archi("archi", 45);
        //Bureaucrat archi("archi", 73);
        //Bureaucrat archi("archi", 0);
        Bureaucrat archi("archi", 150);
        //Bureaucrat archi("archi", 157);
        //Bureaucrat archi("archi", 2);
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
        form.beSigned(archi);
        std::cout << form;
        archi.signForm(form);


    } catch (const std::exception &e) {

        std::cout << "Error: " << e.what() << std::endl;
    }

    /*
     ** COPY TESTS
     */

    std::cout << std::endl << ">>>>> COPY TESTS <<<<<" << std::endl;

    Bureaucrat archi("Archi", 50);
    std::cout << archi;
    Bureaucrat archibad(archi);
    std::cout << archibad;
    Form form("3mmc", 100, 90);
    std::cout << form;
    form.beSigned(archibad);
    std::cout << form;
    Form formV2(form);
    std::cout << formV2;
    formV2.beSigned(archi);
    archi.signForm(formV2);

    return (0);
}
