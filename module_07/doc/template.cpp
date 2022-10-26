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

    Data(int nb): _nb(nb) {}
    ~Data(void) {}

    int    getNb(void){return (this->_nb);}

//    bool	Data::operator>(const Data &rhs)
//    {
//        return (this->_nb > rhs._nb);
//    }
//    bool	Data::operator<(const Data &rhs)
//    {
//        return (this->_nb < rhs._nb);
//    }
//    bool	Data::operator>=(const Data &rhs)
//    {
//        return (this->_nb >= rhs._nb);
//    }
//    bool	Data::operator<=(const Data &rhs)
//    {
//        return (this->_nb <= rhs._nb);
//    }

private:

    int _nb;
};

template< class T>
T  const &max(T const & x, T const &y){
    if (x >= y)
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

int main(void) {

    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a, b) << std::endl;

    float c = 21.21;
    float d = 42.42;

    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl;
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c, d) << std::endl;

    std::string c1 = "Hi";
    std::string c2 = "Ho";

    std::cout << "Max of " << c1 << " and " << c2 << " is ";
    std::cout << ::max<std::string>(c1, c2) << std::endl;
    std::cout << "Max of " << c1 << " and " << c2 << " is ";
    std::cout << ::max(c1, c2) << std::endl;

    Data    d1(42);
    Data    d2(21);

    std::cout << "Max of " << d1 << " and " << d2 << " is ";
    std::cout << ::max<Data>(d1, d2) << std::endl;
//    std::cout << "Max of " << d1 << " and " << d2 << " is ";
//    std::cout << ::max(d1, d2) << std::endl;

//    List< int >         l1(42);
//    List< float >       l2(42.42);
//    List< List <int> >  l3(a);

    return (0);
}

