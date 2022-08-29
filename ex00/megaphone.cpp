/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:56:34 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 12:36:09 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {

	size_t	len;
	std::locale loc;

	(void) av;
	len = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i ++)
		{
			std::string str(av[i]);
			len = str.size();
			for (size_t j = 0; j < len; j ++)
				str[j] = toupper(str[j], loc);
			std::cout << str;
			/* if (i != ac -1) */
			/* 	std::cout << " "; */
		}
		std::cout << std::endl;
	}
	return (0);
}
