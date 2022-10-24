/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:14:07 by athirion          #+#    #+#             */
/*   Updated: 2022/10/24 09:46:56 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t	serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data*>(raw));
}

int main(void) {

	Data		*data = new Data;
	Data		*data_ptr;
	uintptr_t	ptr;
	
	data->data = 42;
	
	std::cout << "data : [ " << data << " ]" << std::endl;
	std::cout << "&data : [ " << &data << " ]" << std::endl;
	std::cout << "data->data : [ " << data->data << " ]" << std::endl;
	
	ptr = serialize(data);
	std::cout << "ptr : [ " << ptr << " ]" << std::endl;

	data_ptr = deserialize(ptr);
	std::cout << "data_ptr : [ " << data_ptr << " ]" << std::endl;
	std::cout << "&data_ptr : [ " << &data_ptr << " ]" << std::endl;
	std::cout << "data_ptr->data : [ " << data_ptr->data << " ]" << std::endl;

	data_ptr->data ++;
	std::cout << "data->data : [ " << data->data << " ]" << std::endl;

	delete data_ptr;
	return (0);
}

