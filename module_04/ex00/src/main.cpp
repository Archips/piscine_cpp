/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:49:49 by athirion          #+#    #+#             */
/*   Updated: 2022/10/14 09:49:07 by athirion         ###   ########.fr       */
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

	std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

	std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;

    const WrongAnimal* badAnimal = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    std::cout << std::endl << "cat type is " << cat->getType() <<  std::endl;
    cat->makeSound();
    badAnimal->makeSound();
    std::cout << "badAnimal is " << badAnimal->getType() << std::endl << std::endl;

    delete badAnimal;
    delete cat;
	
	std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;

	WrongCat wrongCat = WrongCat();
	
	std::cout << "wrongCat, whos's an animal of type " << wrongCat.getType() << " makes ";
	wrongCat.makeSound();
	std::cout << std::endl;
	
	std::cout << "-----------------------------------------" << std::endl << std::endl;
	
	Cat 	chat = Cat();
	Dog 	chien = Dog();
	Animal	animal = Animal();
	Animal	animal2 = Animal("animal2");

	std::cout << std::endl << "chat, whos's an animal of type " << chat.getType() << " makes ";
	chat.makeSound();
	std::cout << "chien, who's an animal of type " << chien.getType() << "  makes ";
	chien.makeSound();
	std::cout << "animal, who's an animal of type " << animal.getType() << " makes ";
	animal.makeSound();
	std::cout << "animal2, who's an animal of type " << animal2.getType() << " makes ";
	animal2.makeSound();
	std::cout << std::endl;

	return (0);
}
