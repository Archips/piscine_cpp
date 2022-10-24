/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:00:42 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 11:28:53 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>

Base	*generate(void) {

	int	random;

	std::srand(time(0));
	random = std::rand() % 3;
	if (random == 0)
	{
		std::cout << "A generated" << std::endl;
		return (new A());
	}
	else if (random == 1)
	{
		std::cout << "B generated" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "C generated" << std::endl;
		return (new C());
	}
}

void	identify(Base *p) {

	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "The type of *p is [A]" << std::endl;
	else if (b)
		std::cout << "The type of *p is [B]" << std::endl;
	else if (c)
		std::cout << "The type of *p is [C]" << std::endl;
	else
		std::cout << "Dynamic casting error" << std::endl;

}

void	identify(Base &p) {

	try {
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "The type of &p is [A]" << std::endl;
		return ;
	}
	catch (std::exception &e) {
		std::cout << "A& cast error: " << e.what() << std::endl;
	}
	try {
		B &b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "The type of &p is [B]" << std::endl;
		return ;
	}
	catch (std::exception &e) {
		std::cout << "B& cast error: " << e.what() << std::endl;
	}
	try {
		C &c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "The type of &p is [C]" << std::endl;
		return ;
	}
	catch (std::exception &e) {
		std::cout << "C& cast error: " << e.what() << std::endl;
	}
}

int main(void) {

	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;

	return (0);
}
