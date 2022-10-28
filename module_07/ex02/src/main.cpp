/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:06:43 by athirion          #+#    #+#             */
/*   Updated: 2022/10/28 11:12:27 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iomanip>

template<typename T>
void	init(Array<T> &src, T elem) {
	
	for (unsigned int i = 0; i < src.size(); i ++)
		src[i] = elem;
}

int main(void)
{
    std::cout << ">>>>>> BAD INDEX <<<<<<<" << std::endl << std::endl;
    {
        try {
            Array<std::string> test(-4); }
        catch (const std::exception &e) {
            std::cout << "Error: " << e.what() << std::endl; }
    }

    std::cout << ">>>>>> INT ARRAY <<<<<<<" << std::endl << std::endl;
	{
		Array<int> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		init(array, 2);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		array[2] = 3;
		array[0] = -2;
		array.display();
		std::cout << std::endl;
	}

	std::cout << std::endl;
    std::cout << ">>>>>> FLOAT ARRAY <<<<<<<" << std::endl << std::endl;
	{
		Array<float> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		init(array, 42.0f);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		array[2] = 21.0f;
		array[0] = 0.0f;
		array.display();
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << ">>>>>> DOUBLE ARRAY <<<<<<<" << std::endl << std::endl;
	{
		Array<double> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		init(array, 42.0);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		array[2] = 0.0;
		array[0] = -42.0;
		array.display();
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << ">>>>>> STRING ARRAY <<<<<<<" << std::endl << std::endl;
	{
		Array<std::string> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		std::string s = "forty two";
		init(array, s);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		array[2] = "twenty one";
		array[0] = "zero";
		array.display();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << ">>>>>> OUT OF BOUND <<<<<<<" << std::endl << std::endl;
	{
		Array<std::string> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		std::string s = "forty two";
		init(array, s);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		int i = 2;
		try {
			std::cout << "3rd element of array is : " << array[i] << std::endl;
		 	i = 5;		
			std::cout << "6th element of array is : " << array[i] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Error : array[" << i << "]: " << e.what() << std::endl;
		}
		try {
			i = 7;
			array[i] = "twenty one";
		}
		catch (const std::exception &e)
		{
			std::cout << "Error : array[" << i << "]: " << e.what() << std::endl;
		}
		try {
			i = -7;
			array[i] = "twenty one";
		}
		catch (const std::exception &e)
		{
			std::cout << "Error : array[" << i << "]: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << ">>>>>> COPY <<<<<<<" << std::endl << std::endl;
	{
		Array<int> array(5);
		std::cout << "array size : [" << array.size() << "]" << std::endl;
		init(array, 2);
		std::cout << "---------------------" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		Array<int> cpy;
		cpy = array;
		std::cout << ">>> DISPLAY CPY <<<" << std::endl;
		cpy.display();
		cpy[2] = 3;
		cpy[0] = -2;
		std::cout << ">>> DISPLAY CPY <<<" << std::endl;
		cpy.display();
		std::cout << ">>> DISPLAY ARRAY <<<" << std::endl;
		array.display();
		std::cout << "---------------------" << std::endl;
		Array<int> cpy2(cpy);
		std::cout << ">>> DISPLAY CPY2 <<<" << std::endl;
		cpy2.display();
		std::cout << std::endl;
	}

/* 	Array<std::string> array(10); */
/* 		Array<std::string> cpy; */

/* 		for (int i = 0; i < 10; i ++) */
/* 		{ */
/* 			if (i % 2 == 0) */
/* 				array[i] = "salut"; */
/* 			else */
/* 				array[i] = "bye"; */
/* 		} */

/* 		array.display(); */

/* 		try { */

/* 			std::cout << array[10] << std::endl; */
/* 		} */
/* 		catch (const std::exception &e) */
/* 		{ */
/* 			std::cout << "Error: " << e.what() << std::endl; */
/* 		} */

/* 		cpy = array; */

/* 		cpy.display(); */
/* 		cpy.size(); */
/* 		try { */
/* 			for (int i = 0; i < 11; i ++) */
/* 				cpy[i] = "NOPE"; */
/* 		} */
/* 		catch (const std::exception &e) { */
/* 			std::cout << "Error: " << e.what() << std::endl;} */
/* 		std::cout << "COPY :" << std::endl; */
/* 		cpy.display(); */
/* 		std::cout << "ARRAY :" << std::endl; */
/* 		array.display(); */

/*         Array<std::string> cpy2(cpy); */
/*         std::cout << "COPY 2:" << std::endl; */
/*         cpy2.display(); */

/*         try { */
/*             for (int i = 0; i < 10; i ++) */
/*                 cpy2[i] = "NOPEEEEEEEEEE"; */
/*         } */
/*         catch (const std::exception &e) { */
/*             std::cout << "Error: " << e.what() << std::endl;} */

/*         std::cout << "COPY :" << std::endl; */
/*         cpy.display(); */
/*         std::cout << "COPY 2:" << std::endl; */
/*         cpy2.display(); */

/* 	} */

	return (0);
}
