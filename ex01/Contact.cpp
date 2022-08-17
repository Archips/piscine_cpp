/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:35:12 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 13:38:33 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}
