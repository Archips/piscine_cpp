/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:56:34 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 10:26:52 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	len;

	(void) av;
	len = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i ++)
		{
			len = std::strlen(av[i]);
			for (int j = 0; j < len; j ++)
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return (0);
}
