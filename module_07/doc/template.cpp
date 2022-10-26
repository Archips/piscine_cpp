#include <iostream>
#include <string>

//template<typename T>
//class List {
//    public:
//
//        List<T>(T const content){}
//        List<T>(List<T> const &src){}
//        ~List<T>(void){}
//
//    private:
//
//        T          _content;
//        List<T> *    _next;
//};

class Data {

public :

    Data(int n): nb(n) {}
    ~Data(void) {}

    int    getNb(void){return (this->nb);}

    bool	operator>(Data &rhs)
    {
        return (this->nb > rhs.nb);
    }
    bool	operator<(Data &rhs)
    {
        return (this->nb < rhs.nb);
    }
    bool	operator>=(Data &rhs)
    {
        return (this->nb >= rhs.nb);
    }
    bool	operator<=(Data &rhs)
    {
        return (this->nb <= rhs.nb);
    }
	int nb;
};

std::ostream &operator<<(std::ostream & o, Data const &data) {
	o << "Data contains : " << data.nb << std::endl;
	return o;
}

template< typename T>
T  const &max(T const & x, T const &y){
    if (x >= y)
        return (x);
    else
        return (y);
}

template<>
Data  const &max(Data const & x, Data const &y){
    if (x.nb >= y.nb)
        return (x);
    else
        return (y);
}

template< typename T>
T const & min(T const & x, T const & y){
    if (x <= y)
        return (x);
    else
        return (y);
}

template< typename T>
void	swap(T &x, T &y){

	T	temp;
	temp = x;
	x = y;
	y = temp;
}

int main(void) {

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
    
	/* int a = 21; */
    /* int b = 42; */

    /* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max<int>(a, b) << std::endl; */
    /* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max(a, b) << std::endl; */

	/* ::swap(a, b); */

	/* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max<int>(a, b) << std::endl; */
    /* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max(a, b) << std::endl; */
	
	/* ::swap<int>(a, b); */

	/* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max<int>(a, b) << std::endl; */
    /* std::cout << "Max of " << a << " and " << b << " is "; */
    /* std::cout << max(a, b) << std::endl; */

    /* float c = 21.21; */
    /* float d = 42.42; */

    /* std::cout << "Max of " << c << " and " << d << " is "; */
    /* std::cout << max<float>(c, d) << std::endl; */
    /* std::cout << "Max of " << c << " and " << d << " is "; */
    /* std::cout << max(c, d) << std::endl; */

    /* std::string c1 = "Hi"; */
    /* std::string c2 = "Ho"; */

    /* std::cout << "Max of " << c1 << " and " << c2 << " is "; */
    /* std::cout << ::max<std::string>(c1, c2) << std::endl; */
    /* std::cout << "Max of " << c1 << " and " << c2 << " is "; */
    /* std::cout << ::max(c1, c2) << std::endl; */

    /* Data    d1(42); */
    /* Data    d2(21); */

    /* std::cout << "Max of " << d1 << " and " << d2 << " is "; */
    /* std::cout << ::max<Data>(d1, d2) << std::endl; */
    /* std::cout << "Max of " << d1 << " and " << d2 << " is "; */
	/* std::cout << ::max(d1, d2) << std::endl; */

//    List< int >         l1(42);
//    List< float >       l2(42.42);
//    List< List <int> >  l3(a);

    return (0);
}
