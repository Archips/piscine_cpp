/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:49 by athirion          #+#    #+#             */
/*   Updated: 2022/10/11 13:49:50 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void) {

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << meta->getType() << std::endl << std::endl;

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* badAnimal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    badAnimal->makeSound();
    std::cout << badAnimal->getType() << std::endl << std::endl;

    delete badAnimal;
    delete cat;
}
