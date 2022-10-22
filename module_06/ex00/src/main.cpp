#include "Scalar.hpp"

int main(int ac, char **av) {

    Scalar s;

    if (ac == 2) {
        s.convertInput(av[1]);
    }
    else
        std::cout << "Error: Bad input" << std::endl;
    return (0);
}