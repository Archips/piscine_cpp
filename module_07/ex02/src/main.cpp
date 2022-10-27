/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:06:43 by athirion          #+#    #+#             */
/*   Updated: 2022/10/27 15:01:10 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	{
		Array<int> array(5);

		array[0] = 1;
		array[1] = 2;
		array[2] = 3;
		array[3] = 4;
		array[4] = 5;

		array.display();

		std::cout << "Size of array is " << array.size() << std::endl;
	}

	{
		Array<std::string> array(10);
		/* Array<std::string> cpy; */
		Array<std::string> cpy(array);

		for (int i = 0; i < 10; i ++)
		{
			if (i % 2 == 0)
				array[i] = "salut";
			else
				array[i] = "bye";
		}

		array.display();

		try {

			std::cout << array[10] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}

		/* cpy = array; */

		cpy.display();
		cpy.size();
		try {
			for (int i = 0; i < 10; i ++)
				cpy[i] = "NOPE";
		}
		catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;}
		std::cout << "COPY :" << std::endl;
		cpy.display();
		std::cout << "ARRAY :" << std::endl;
		array.display();

	}

	return (0);
}
