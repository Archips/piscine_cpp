/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:25:47 by athirion          #+#    #+#             */
/*   Updated: 2022/10/26 17:19:48 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array {

	public:

		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		Array	operator=(Array const &rhs);
		T		operator[](unsigned int index);

		T array[];
		unsigned int	size(void);
		void			copyArray(Array &src);

	private:

		unsigned int	_size;

		class outOfBoundException : public std::exception {

			const char *what() const throw() {

				return ("Out of bound of the array");
		};
		

};

#endif

/*
 ** CONSTRUCTORS
 */

template<>
Array<T>::Array(void) {

	std::cout << "Array default constructor called" << std::endl;
	this->array = new T[5];
}

/* template<typename T> */
Array<T>::Array(unsigned int n) {

	std::cout << "Array parameter constructor called" << std::endl;
	this->array = new T[n];
}

/* template<typename T> */
Array<T>::Array(Array const &src) {
	
	std::cout << "Array copy constructor called" << std::endl;
	this->_size = src._size;
	this->array = new T[src._size];
	this->array->copyArray(src.array);
}

/*
 ** DESTRUCTOR
 */

Array<T>::~Array(void) {

	std::cout << "Array destructor called" << std::endl;
	delete [] this->array;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

/* template<typename T> */
Array	&Array<T>::operator=(const Array &rhs) {

	std::cout << "Array copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		this->_array.copyArray(src.array);
	}
	return (*this);
}

/*
 ** OVERLOAD OPERATOR []
 */

/* template<typename T> */
T	Array<T>::operator[](unsigned int index){

	if (index >= this->_size)
		throw Array::outOfBoundException();
	return (this->array[index]);
}

/*
 ** MEMBER FUNCTION
 */

unsigned int	Array<T>::size(void) {

	return (this->_size);
}


void			Array<T>::copyArray(Array &src) {

	for (int i = 0; i < src.size(); i ++)
		this->array[i] = src.array[i];
}
