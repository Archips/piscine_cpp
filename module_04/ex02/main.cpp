/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:54:27 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:54:28 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {

    /*{
        const Animal *animals[10];

        for (int i = 0; i < 10; i ++) {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        for (int i = 0; i < 10; i ++)
            animals[i]->makeSound();

        for (int i = 0; i < 10; i ++)
            delete animals[i];
    }
    {
        Dog cocteau = Dog();
        for (int i = 0; i < 100; i++) {
            if (i == 20)
                cocteau.setIdea("I love cats", i);
            else
                cocteau.setIdea("I hate cats", i);
        }

        std::cout << "Cocteau is thinking : " << std::endl;
        for (int i = 0; i < 100; i++)
            std::cout << "[ " << i << " ]: " << cocteau.getIdea(i) << std::endl;

        Dog otherDog = Dog(cocteau);
        std::cout << std::endl << "The copy of cocteau is thinking : " << std::endl;
        for (int i = 0; i < 100; i++)
            std::cout << "[ " << i << " ]: " << otherDog.getIdea(i) << std::endl;
    }

    {
        Cat leonard = Cat();
        for (int i = 0; i < 100; i++) {
            if (i == 20)
                leonard.setIdea("I love dogs", i);
            else
                leonard.setIdea("I hate dogs", i);
        }

        std::cout << "Leonard is thinking : " << std::endl;
        for (int i = 0; i < 100; i++)
            std::cout << "[ " << i << " ]: " << leonard.getIdea(i) << std::endl;

        Cat otherCat = Cat(leonard);
        std::cout << std::endl << "The copy of Leonard is thinking : " << std::endl;
        for (int i = 0; i < 100; i++)
            std::cout << "[ " << i << " ]: " << otherCat.getIdea(i) << std::endl;
    }*/

    Animal test;

    return (0);

}
