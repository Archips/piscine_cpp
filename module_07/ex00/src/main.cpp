/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:15:47 by athirion          #+#    #+#             */
/*   Updated: 2022/10/26 10:30:54 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class A {
	public:
		A(void):_n(0){}
		A(int n):_n(n){}
		A &operator=(A &a){_n=a._n; return *this;}
		bool operator==(A const &rhs) const { return (this->_n == rhs._n);}
		bool operator!=(A const &rhs) const { return (this->_n != rhs._n);}
		bool operator>(A const &rhs) const { return (this->_n > rhs._n);}
		bool operator<(A const &rhs) const { return (this->_n < rhs._n);}
		bool operator>=(A const &rhs) const { return (this->_n >= rhs._n);}
		bool operator<=(A const &rhs) const { return (this->_n <= rhs._n);}
		int get_n() const { return (_n);}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const A &a) { o << a.get_n(); return o;}


int main( void ) {
	
	{	
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		A a(2), b(4);

		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	return (0);

}

