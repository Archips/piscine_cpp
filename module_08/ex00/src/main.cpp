#include "easyfind.hpp"

template <typename T>
void    display(T c){

    typename T::iterator it;
    for (it = c.begin(); it != c.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main(void) {

    std::cout << ">>>> ARRAY <<<<" << std::endl << std::endl;
    std::array<int, 10> array = {0, 4, 8, 12, -8, -4, 42, 21, -21, 100};
    std::cout << "---------------" << std::endl;
    display(array);
    std::cout << "---------------" << std::endl;
    try {
        std::cout << easyfind(array, 4) << std::endl;
        std::cout << easyfind(array, 3) << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << ">>>> LIST <<<<" << std::endl << std::endl;
    std::list<int> list;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            list.push_back(i * 2);
        else
            list.push_front(i / 3);
    }std::cout << "---------------" << std::endl;
    display(list);
    std::cout << "---------------" << std::endl;
    try {
        std::cout << easyfind(list, 4) << std::endl;
        std::cout << easyfind(list, 3) << std::endl;
        std::cout << easyfind(list, -3) << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << ">>>> VECTOR <<<<" << std::endl << std::endl;
    std::vector<int> vector;
    for (int i = -5; i < 5; i++) {
        if (i % 2 == 0)
            vector.push_back(i * 2 + 3);
        else
            vector.push_back(i / 3 - 1);
    }std::cout << "---------------" << std::endl;
    display(vector);
    std::cout << "---------------" << std::endl;
    try {
        std::cout << easyfind(vector, -2) << std::endl;
        std::cout << easyfind(vector, 3) << std::endl;
        std::cout << easyfind(vector, -3) << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    return (0);
}