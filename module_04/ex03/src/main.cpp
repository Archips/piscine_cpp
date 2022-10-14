/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:58:23 by athirion          #+#    #+#             */
/*   Updated: 2022/10/14 12:51:14 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		std::cout << std::endl;
		src->learnMateria(new Cure());
		std::cout << std::endl;
	
		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		AMateria* cpy;
		std::cout << std::endl;
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("cure");
		std::cout << std::endl;
		me->equip(tmp);
		cpy = tmp;
		me->unequip(1);
		delete cpy;
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("cure");
		std::cout << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("cure");
		std::cout << std::endl;
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
	
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		bob->equip(tmp);
		tmp = src->createMateria("cure");
		std::cout << std::endl;
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		bob->equip(tmp);

		me->use(0, *bob);
		me->use(1, *bob);
		bob->use(2, *me);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		me->use(2, *bob);
		bob->use(3, *me);
		me->use(-45, *me);
		bob->use(2147483647, *me);
		bob->use(1, *me);
	
		std::cout << std::endl;
		delete bob;
		std::cout << std::endl;
		delete me;
		std::cout << std::endl;
		delete src;
		std::cout << std::endl;
	}

		Character player = Character("archi");
	{
		std::cout << std::endl;
		Cure c = Cure();
		std::cout << std::endl;

		Cure c2 = Cure(c);
		std::cout << std::endl;
	
		std::cout << "c type is " << c.getType() << std::endl;
		std::cout << "c2 type is " << c2.getType() << std::endl;
		c.use(player);
		c2.use(player);
		std::cout << std::endl;
	}
	
		std::cout << std::endl;
		Character player2 = Character(player);
	{
		Ice i = Ice();
		std::cout << std::endl;

		Ice i2 = Ice(i);
		std::cout << std::endl;
	
		std::cout << "i type is " << i.getType() << std::endl;
		std::cout << "i2 type is " << i2.getType() << std::endl;
		i.use(player2);
		i2.use(player2);
		std::cout << std::endl;

		}
	
	{
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		std::cout << std::endl;
		src->learnMateria(new Cure());
		std::cout << std::endl;
	
		AMateria* materia;
		AMateria* cpyMateria;

		materia = src->createMateria("ice");
		player.equip(materia);
		player.use(0, player2);
		cpyMateria = player.getInventory(0);
		player.unequip(0);
		delete cpyMateria;
		delete src;
	}

	return 0;
}
