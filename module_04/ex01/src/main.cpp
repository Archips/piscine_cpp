/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:51:45 by athirion          #+#    #+#             */
/*   Updated: 2022/10/14 10:46:52 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {

    {
        const Animal *animals[10];

        for (int i = 0; i < 10; i ++) {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

		std::cout << std::endl;

        for (int i = 0; i < 10; i ++)
            animals[i]->makeSound();

		std::cout << std::endl;
        
		for (int i = 0; i < 10; i ++)
            delete animals[i];
    }

	std::cout << std::endl << "--------------------------------------------" << std::endl <<std::endl;

	{
        Dog cocteau = Dog();
		
		std::cout << std::endl;
        
		for (int i = 0; i < 100; i++) {
            if (i == 20)
                cocteau.setIdea("I love cats", i);
            else
                cocteau.setIdea("I hate cats", i);
        }

        std::cout << "Cocteau is thinking : " << std::endl << std::endl;
        for (int i = 0; i < 100; i++) {
			if (i % 5 == 0)
				std::cout << std::endl;
            std::cout << "[ " << i << " ]: " << cocteau.getIdea(i) << " | ";
		}
		
		std::cout << std::endl;
		std::cout << std::endl;

        Dog otherDog = Dog(cocteau);
       
		std::cout << std::endl << "The copy of cocteau is thinking : " << std::endl;

		for (int i = 0; i < 100; i++) {
			if (i % 5 == 0)
				std::cout << std::endl;
            std::cout << "[ " << i << " ]: " << otherDog.getIdea(i) << " | ";
		}
		std::cout << std::endl;
    }

	std::cout << std::endl << "--------------------------------------------" << std::endl <<std::endl;
    
	{
        Cat leonard = Cat();
		
		std::cout << std::endl;
        
		for (int i = 0; i < 100; i++) {
            if (i == 20)
                leonard.setIdea("I love dogs", i);
            else
                leonard.setIdea("I hate dogs", i);
        }

        std::cout << "Leonard is thinking : " << std::endl << std::endl;
        for (int i = 0; i < 100; i++) {
			if (i % 5 == 0)
				std::cout << std::endl;
            std::cout << "[ " << i << " ]: " << leonard.getIdea(i) << " | ";
		}

		std::cout << std::endl;
		std::cout << std::endl;

        Cat otherCat = Cat(leonard);
        
		std::cout << std::endl << "The copy of Leonard is thinking : " << std::endl;
        
		for (int i = 0; i < 100; i++) {
			if (i % 5 == 0)
				std::cout << std::endl;
            std::cout << "[ " << i << " ]: " << otherCat.getIdea(i) << " | ";
		}
    	std::cout << std::endl;
    	std::cout << std::endl;
	}
    std::cout << std::endl;
	return (0);
}
