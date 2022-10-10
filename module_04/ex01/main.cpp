#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

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