/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:25:47 by athirion          #+#    #+#             */
/*   Updated: 2022/10/28 11:08:23 by athirion         ###   ########.fr       */
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
		Array(int n);
		Array(const Array<T> &src);
		~Array(void);

		Array<T>	&operator=(const Array<T> &rhs);
        Array<T>    &operator=(const T &rhs);
		T		    &operator[](unsigned int index);

		void			copyArray(T *cpy, const T *src, unsigned int size);
		void			display(void) const;
		unsigned int	size(void) const;

	private:

		unsigned int	_size;
		T 				*array;
		
		class outOfBoundException : public std::exception {

			const char *what() const throw() {

                return ("Out of bound of the array");
            };
		};
		

};

#endif

/*
 ** CONSTRUCTORS
 */

template<class T>
Array<T>::Array(void) {

	std::cout << "Array default constructor called" << std::endl;
    this->_size = 0;
}

template<class T>
Array<T>::Array(int n) {

	std::cout << "Array parameter constructor called" << std::endl;
    if (n < 0) {
        throw Array::outOfBoundException();
		return ;
	}
	this->_size = n;
	this->array = new T[n];
}

template<class T>
Array<T>::Array(const Array<T> &src) {
	
	std::cout << "Array copy constructor called" << std::endl;
	this->_size = src._size;
	this->array = new T[src._size];
	this->copyArray(this->array, src.array, src._size);
}

/*
 ** DESTRUCTOR
 */

template<class T>
Array<T>::~Array(void) {

	std::cout << "Array destructor called" << std::endl;
	delete [] this->array;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

template<class T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs) {

	std::cout << "Array copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_size = rhs._size;
		this->array = new T[rhs._size];
		this->copyArray(this->array, rhs.array, rhs._size);
	}
	return (*this);
}

template<class T>
Array<T>	&Array<T>::operator=(const T &rhs) {

    *(this->array) = rhs;
    return (*this);
}

/*
 ** OVERLOAD OPERATOR []
 */

template<class T>
T	&Array<T>::operator[](unsigned int index){

	if (index >= this->_size)
		throw Array::outOfBoundException();
	return (this->array[index]);
}

/*
 ** MEMBER FUNCTION
 */

template<class T>
unsigned int	Array<T>::size(void) const {

	return (this->_size);
}

template<class T>
void			Array<T>::copyArray(T *cpy, const T *src, unsigned int size) {

	for (unsigned int i = 0; i < size; i ++) {
		cpy[i] = src[i];
	}
}

template<class T>
void			Array<T>::display(void) const {

	for (unsigned int i = 0; i < this->_size; i ++) 
		std::cout << this->array[i] << std::endl;
}
